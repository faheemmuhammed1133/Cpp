#include<iostream>
using namespace std;
int leap(int year){
    if ((year % 4 == 0 &&year%100!=0)||year%400==0) {
        return 1;
    }else{
        return 2;
    }
}
int main(){
    int y;
    cout<<"enter a year to check: ";
    cin>>y;
    if(leap(y)==1){
        cout<<y<<" is a leap year 😊\n";
    }else{
        cout<<y<<" is not a leap year 🫥\n";
    }
    return 0;
}