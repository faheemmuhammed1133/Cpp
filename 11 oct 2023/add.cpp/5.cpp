// a prgrm : (a+b+c+d/e *1/x *1/y *1/z)
#include <iostream>
using namespace std;
int main() {
    double a,b,c,d,e,x,y,z,add;
    cout<<"enter value's for variables to do function(a+b+c+d/e *1/x *1/y *1/z): ";
    cin>>a>>b>>c>>d>>e>>x>>y>>z;
    
    cout<<a<<" + "<<b<<" + "<<c<<" + "<<d<<" / "<<e<<" * 1/"<<x<< " * 1/"<<y<<" * 1/"<<z<<" = "<<a+b+c+ (d/e) *(1/x)*(1/y)*(1/z)<<"\n";
}