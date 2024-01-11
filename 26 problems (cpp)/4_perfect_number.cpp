// perfect number.
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
int main(){
    strt:
    int x,d=0,i;
    
    cout <<"enter number to check if it is perfect num or not : ";
    cin>>x;
    this_thread::sleep_for(chrono::seconds(1));
    cout<<"Perfect numbers are sum of proper divisor's  of a number exept itself\n";
    cout<<"checking "<<x<<"\n";
    this_thread::sleep_for(chrono::seconds(1));
    if(x<0){
        cout<<"only positive numbers are  considered as perfect number ";
        goto strt;
    }else if(x==1){
      cout<<"1 is not a perfect number .(because perfect numbers are sum of proper divisor's of a number exept itself)\n";
    } else{
    for(i=1;i<(x/2)+1;i++){
        if(x%i==0){
            d+=i;
        }
    }if(x==d){
    cout<<x<<" is a perfect number.\n";
    }else if(x!=0){
          cout<<x<<" is not a perfect number.\n";
    }
    }
    return 0;
}