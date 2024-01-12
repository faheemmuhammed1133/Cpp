// Atm
#include<iostream>
#include <unistd.h>
#include <iomanip>
using namespace std;
int main(){
    int account_no , n ;
    float money , ac;
    srand((float) time(NULL));
    float c = (rand()%10000)+1000;
    cout<<"\n\nChecking your card status please wait :) \n";
    sleep(3);
    cout<<"\nWELCOME TO ATM ";
    start:
    cout<<"\nEnter your card number : \n";
    cin>>account_no;
    if(account_no < 10000000 || account_no > 99999999){
    cout<<"Account number should be of 8 number :) \n\n";
    goto start;
    }
    menu:
    cout<<"\n\nWhat would you like to do?\n1. Withdrawal\n2. Check balance\n3. Deposit money\n4. Transfer money \n5. Cancel \n";
    cin>>n;
    switch(n)
    {
    case 1:
    rerun:
    cout<<"\nEnter the money you want to withdraw ₹";
    cin>>money;
    if(money>c){
    sleep(1);
    cout<<"\nYour balance is lower than amount you want to withdraw";
    goto rerun;
    }
    if(money < 100)
    {
    cout<<"Minimal amount should be ₹100";
    goto rerun;
    }
    c -= money;
    sleep(2);
    cout<<"\nSuccessfully withdrawn ₹"<<fixed<<setprecision(3)<<money<<"\nYour balance is now ₹"<<fixed<<setprecision(3)<<c<<"\n";
    break;
    case 2:
    cout<<"\nYour account has ₹"<<fixed<<setprecision(3)<<c<<"\n";
    break;
    case 3:
    cout<<"\nEnter the amount you want to deposit ₹";
    cin>>money;
    c += money;
    cout<<"\nYour account now has ₹"<<fixed<<setprecision(3)<<c;
    break;
    case 4:
    reask:
    cout<<"\nEnter the amount you want to transfer : ₹";
    cin>>money;
    cout<<"\nEnter the account you want to transfer to ";
    cin>>ac;
    if(ac == account_no){
    cout<<"\nCan't send money to yourself can you? \n";
    goto reask;
    }else if (ac< 1000000 || ac>=99999999){
    cout<<"\nAccount no. should be of 8 digits\n";
    goto reask;
    }
    if( money > c || money < 100)
    {
    if(money>c){
    cout<<"Not enough money in your account \n";
    }else{cout<<"Minimal transfer amount is ₹100\n";}
    goto reask;
    }
    sleep(2);
    c -= money;
    cout<<"\nTransfered amount ₹"<<fixed<<setprecision(3)<<money<<" To Accout with account no : "<<fixed<<setprecision(0)<<ac<<"\n";
    cout<<"Your bank now has ₹"<<fixed<<setprecision(3)<<float(c);
    break;
    case 5:
    cout<<"\nTHANK YOU FOR CHOOSING US :) \n\n";
    return 0;
    default :
    cout<<"\nInvalid option :)";
    goto menu;
    }
    sleep(2);
    goto menu;
    return 0;
    }
