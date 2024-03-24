//take 3 names complete sentance __ do you know __ college is lovely nothing like __ had.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string a,b,c;
    cout<<"enter name A: ";
    getline(cin,a);
    cout<<"enter name B: ";
    getline(cin,b);
    cout<<"enter name C: ";
    getline(cin,c);

    cout<<a<<" do you know " <<b<<"'s college is lovely nothing like "<<c<<" had.";
    return 0;
}