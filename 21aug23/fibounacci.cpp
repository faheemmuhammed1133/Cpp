#include <iostream>
using namespace std;
int main(){
 int fib,n,f=0,s=1;
    cout <<"enter the number of fibunacci num you want";
    cin>>n;

    for (int i=0;i<n;i++){
        if(i<=1){
            fib = i;
        }else{
            fib =f+s;
            f=s;
            s=fib;
        }
       
    }
     cout<<fib<<"\n";
return 0;
}