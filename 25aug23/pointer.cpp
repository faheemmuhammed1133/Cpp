// pointer and reference.
#include <iostream>
using namespace std;
int main(){
    int x=9;
    int * p3=&x;
    *p3=8;
    
    
    cout<<"value of x is "<<*p3<<" & "<<"is stored at"<<p3;
  
    // int y=6;
    // int &v=y;
    // v=7;
    // cout<<&v<< " "<<v;
    return 0;
}