//largest among three.
#include<iostream>
using namespace std;
int main(){
    int a, b ,c;
    cout<<" enter three numbers ";
    cin >>a>>b>>c;
    if(a==b&&b==c){
        cout<<"all are equal \n";
    }else if(a==b&&c>b){
        cout<<"largest num is "<<c<<" and others are same\n";
    }else if(a==c&&b>a){
        cout<<"largest num is "<<b<<" and others are same\n";
    }else if(c==b&&a>b){
        cout<<"largest num is "<<a<<" and others are same\n";
    }else if(a>b&& a>c){// checks if a> both b and c
        cout<< " largest number is "<<a<<"\n";
    }else if(b>a&& b>c){// checks if b> both a and c
        cout<< " largest number is "<<b<<"\n";
    }else {// default(if any of above condition is not satisfied)
        cout<< " largest number is "<<c<<"\n";
    }
    return 0;
}
