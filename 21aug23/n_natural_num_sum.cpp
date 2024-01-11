#include <iostream>
using namespace std;
int n,k, sum=0,m;
int main(){
    cout<<"enter the value of n (you need the table of) and k (upto) ";
    cin>>n>>k;
    for (int i=1;i<=k;i++){
        m=n*i;
        cout<<m<<endl;
    }
    
    // for( int i=1 ;i<=n;i++){
    //  int i=1;
    //  while(i<=n) {
    //     sum=sum+i;
        
    //     // i++;
    //     }
    //     cout<<sum<<endl;

        return 0;
}
    

