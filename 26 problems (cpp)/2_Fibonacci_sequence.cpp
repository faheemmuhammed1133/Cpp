//Fibonacci sequence upto n.
//prime or not:
#include <iostream>
using namespace std;
int main(){
    int n, f=0,s=1;
    strt:
    cout <<"how many sequence of fibonacci you want? ";
    cin>>n;
    int t=0;
    if(n<1){// elimination numbers less than one 
    cout<<" INVALID INPUT \n";
    goto strt;
     }else {
        cout<<"here is is your "<<n<<" sequence of fibonacci :\n";
        // cout<<t<<"\n";t++;
        for (int i=0;i<n;i++){
            cout<<f<<"\n";
            t=f+s;
            f=s;
            s=t;
            
        }
    }
    return 0;
}