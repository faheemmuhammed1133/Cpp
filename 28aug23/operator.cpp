#include<iostream>
using namespace std;
// program to print natural numbers.
int main(){
    int a,b;
     std::cout<<"enter two nums "; 
        std::cin>>a>>b;
    
    // add
    cout<<"sum is "<<a+b<<endl;

    // sub
    cout<<"sub is "<<a-b<<endl;

    // multi
    cout<<" multiple is "<<a*b<<endl;

    // div
    cout<<"div is "<<float(a/b)<<endl;

    // mod
    if(a>b){
    cout<<"mod is "<<a%b<<endl;}
    else{
        cout<<"mod is "<<b%a<<endl;
    }
    // increament
    cout<<"increament is "<<++a<<endl<<a--;
    cout<<"increament is "<<++b<<endl<<b--;
    
    // decreament
    cout<<"decreament is "<<--a<<endl;
    cout<<"decreament is "<<--b<<endl;
    }
