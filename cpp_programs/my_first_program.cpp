#include<iostream>

using namespace std;

int main(){
    
    // cout<<"Hello Rowdies"<<endl;
    // int a;
    // a=100;
    // cout <<endl << a;
    // cout <<endl << &a;
    // int b;
    // b=50;
    // cout <<endl << b;
    // cout <<endl << &b;
    // a=75;
    // cout <<endl << a;
    // cout <<endl << &a <<endl;
    // int string = 10;
    // cout<<string;
    // short int sahil=62391;
    // cout<<sahil;
    // unsigned short int prem=62390;
    // cout<<endl<<prem<<endl;
    // int d;
    // cout<<"enter no"<<endl;
    // cin>>d;
    // cout<<"the entered number is"<<d<<endl;
    float my_marks;
    cout <<"Enter your marks in 12: ";
    cin >>my_marks ;
    cout<< "your marks in 12 is "<<my_marks<<endl;
    // char name[30];
    // cout <<"Enter your name: ";
    // cin >>name;
    // cout<<"your name is "<<name<<endl;
    // long int n;
    // cout<<"Enter the value of N:";
    // cin>>n;

    // double pi;
    // pi=22.0/7;
    // cout<<pi<<endl;

    if(my_marks>=80){
        cout<<"excellent"<<endl;
    }else if(my_marks>=40 && my_marks<=80) {
        cout<<"alive"<<endl;
    }else {
        cout<<"dead";
    }

    return 0;

}