//gcd using for loop
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<< "Enter two numbers to find GCD(HCF) : ";
    cin>>a>>b;
    int l=a,hcf=b;
    if(b>a){
        l=b;
    }
    for(int i=1;i<=l;i++){
        if(a%hcf==0&&b%hcf==0){
            cout<<"GCD is "<< hcf <<endl;
            break;
            }hcf--;
        }
        return 0;
    }