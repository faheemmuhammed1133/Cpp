//calculate series 1/1!+2/2!+3/3!.....+n/n! using nested loop
#include<iostream>
using namespace std;
int main(){
    float x,f,s=0;
    cout<<" please enter desired number of sequence: ";
    cin>>x;
    cout<<"\n\n";
    for(int i=1;i<=x;i++)
    {   f=1;
        for(int j=1;j<=i;j++)
        {
        f*=j;
        }
        s = s + i/f;
        if(i==x){
            cout<<"("<<i<<" / "<<i<<"!) ";
        }else{
        cout<<"("<<i<<" / "<<i<<"!) + ";
        }
    } 
    cout<<" = "<<s<<"\n";

    return 0;
    }