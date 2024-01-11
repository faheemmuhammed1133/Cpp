// power of a number using loop.
#include<iostream>
using namespace std;
int main(){
    float x,p=1;
    int n;
    cout<<"Enter the base , exponent: ";
    cin>>x>>n;
    for(int i=1;i<=n;i++){
        p *= x;
    }
    cout <<x<<"^"<<n<<" = "<<p;
    return 0;
}