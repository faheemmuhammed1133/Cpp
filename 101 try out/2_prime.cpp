//prime or  not 
#include<iostream>
using namespace std;
int main(){
    bool prime=true;
    int x=0;
    cout<<"Please provide a value that you'd like to check if it is prime. : ";
    cin>>x;
    // The condition excludes numbers less than 2.
    if (x<2){
        cout <<"\n\tmake sure to enter positive numbers and greater than 1 \n\n";
        return main();
    }else{
    // condition to check factors
    for (int i =2;i<=x/2;i++){
    if (x%i==0){
        prime = false ;
        break;
    }else{
        prime = true ;
    }
    }
    if(prime){
        cout<<x<<" is a prime num ";
    }else{
        cout<<x<<" isn't a prime num ";
    }  
    return 0;
    }
    }
