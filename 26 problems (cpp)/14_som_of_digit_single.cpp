//sum of gigit until single digit.
#include<iostream>
using namespace std;
int main(){
     int a;
    cout<<"enter the number";
    cin>>a;
    agn:
    int di=0;
    while(a!=0){
    di += a%10;
    a/=10;
    }
if(di > 9 || di < -9) {
    a=di;
    goto agn;
}else{
    cout<<"\nthe sum is : " <<di<<"\n";
}
return 0;
}
