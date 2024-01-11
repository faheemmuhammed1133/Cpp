#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float balance=9999.00,dep,withd;
    cout<<"\n\tWELCOME TO ABC 1BANK ATM ') \n1. Withdraw_\n2. Deposite_ \n3. Check_balance_ \n4. Transfer_ \n5. Exit_ \n";
    int a,acct,t;
    cin>>a;
    switch(a){
        case 1:
        witd:
        cout<<"Enter amount to withdraw";
        cin>>withd;
        if (balance>= withd) {
            cout << "You have successfully withdrawn ₹"<<fixed<<setprecision(3) << withd<<"\n";
            balance-= withd;
            cout<<"Your current balance is ₹"<<fixed<<setprecision(3)<<balance<<"\nHAPPY BANKING:)\n";
            }else{
                cout<<"Insufficient Balance";
                goto witd;
            }break;
        case 2 : 
        cout<<"enter an amount you going to deposite";
        cin>> dep ;
        balance+=dep;
        cout<<"Your current balance is ₹"<<fixed<<setprecision(3)<<balance<<"\nHAPPY BANKING:)\n";
        break;
        case 3:
        cout<<"Your current balance is ₹"<<fixed<<setprecision(3)<<balance<<"\nHAPPY BANKING:)\n";
        break;
        case 4:
        tnfr:
        cout<<"enter account number of reciepient";
        cin>>acct;
        if(acct>99999999||acct<9999999){
            cout<<"invalid account no!)\n try again!\n";
            goto tnfr;
        }else{
            cout<<"enter the amount you want to tranfer";
            cin>>t;
            if(t>balance){
                cout<<"insufficent fund\n";
                goto tnfr;
            }else{
                balance-=t;
                cout<<"succesfully tranferred ₹"<<fixed<<setprecision(3)<<t<<"to account number"<<acct<<"\n";
                cout<<"Your remaining balance is ₹"<<fixed<<setprecision(3)<<balance<<"\nHAPPY BANKING:)\n";
            }
        }
        break;
        case 5:
        cout<<"Thank You for banking with us:)\nHave A Nice Day!\n";
        break;
        default:
        cout<<"Invalid Choice!! Try Again.\n";
        return main();
        break;

    };
    return 0;
    
}