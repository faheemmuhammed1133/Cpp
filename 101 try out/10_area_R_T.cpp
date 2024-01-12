// area of rectangle / triangle.
#include<iostream>
using namespace std;
int main (){
    float b,h;
    string a;
    cout<<"type \'1\' to check area of triangle else type \'anything' to choose rectangle respectivel \n";
    cin>>a;
    if(a[0]=='1'){//triangle
        cout<<"you have choosen triangle \n";
    cout<<"enter base and height of triangle respectively \n";
    cin>>b>>h;
    cout<<"area of rectangle is "<<.5*b*h<<"\n";
    }else{// rectanle
        cout<<"you have choosen rectangle/sqaure\n";
        cout<<"enter base and height of rectangle respectively \n";
    cin>>b>>h;
    cout<<"area of rectangle is "<<b*h<<"\n";
    
    }
    return 0;
}
