// checking if wheather a number is an armstrong or not.
#include<iostream>
using namespace std;
int main(){
    int x=0,digit,num,arm=0;
    cout<<"enter a number to check if it is armstrong or not: ";
    cin>>num;
    int k=num;// declared a new for retaining orginal num to check in last time.
    while(k!='\0'){//loop runs until meets a nullinput.
        k/=10;// remove last digit.
        x++;// counting digits.
    }
    k=num;
    while(k!=0){
        digit=k%10;//taking out last last number to digit.
        k/=10;// remove last digit.
        arm += pow(digit,x);// adding digit rise to n each time while loop is executed.
    }
    if(arm==num){// checking sum of each digit rise to num of digit = number.
        cout<<num<<" is an armstrong number \n";
    }else{
        cout<<num<<" is not an armstrong number \n";
    }
    return 0;
}