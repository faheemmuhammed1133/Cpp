/*#include <iostream>using namespace std;int main(){int i=10;if (i==20) {cout<<i<<"\n"; } cout<<i<<"\n";  return 0;}*/

#include <iostream>
using namespace std;
int main(){
    int n,fact,i=1;
    cout <<"value for factorial";
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     fact=fact*i;}
        do
        {
            fact=fact*i;i++;
        } while (i<=n);
        
        
        cout<<"the factorial of "<<n<<" is "<<fact<<"\n";
        return 0;
   
    }
    