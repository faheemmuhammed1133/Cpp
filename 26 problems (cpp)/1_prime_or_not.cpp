//prime or not:
#include <iostream>
using namespace std;
int main(){
    int n;
    strt:
    cout <<"enter number to check if it is prime or not : ";
    cin>>n;
    if(n>1){// eliminating numbers less than 2.
    for(int i=2;i<n;i++){// no number will have factor greater than half of the number itself.
        if(n%i==0){// if any factor found rather than 1 and n it will display it is a prime number.
            cout<<n<<" is not a prime number \n";
            return 0;
        }
        
    }
    }else{
        cout<<"\n"<<n<<" is not a prime number \n"<<"number must be greather than 1 to be prime :\n";
        goto strt;
    }
            cout<<n<<" is a prime number\n";
    return 0;
}