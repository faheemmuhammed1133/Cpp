// check if a year is leap or not:
#include<iostream>
using namespace std;
int main(){
int y;
cout<<"enter a year to check :";
cin>>y;
if((y%4==0 &&y%100!=0)||y%400==0){
    cout<<"\n\nyear "<<y<<" is a leapyear ";
    }else{
        cout<<"\nyear "<<y<<" is not a leapyear";
}
}