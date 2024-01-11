//multiplication table of a number using a loop.
#include<iostream>
using namespace std;
int main(){
    int num,lmt,strt;
    cout<<"Please input the number for which you'd like to generate the multiplication table.\nAlso, specify the starting and ending points for the table range.\nrespectively one after other; ";
    cin>>num>>strt>>lmt;
    cout<<"here is you table of "<<num<<" from"<<strt<<" upto "<<lmt<<" :\n";
    for (int i=strt;i<=lmt;i++){
        cout<<num<<" * "<<i<<" = "<<(num*i)<<"\n";//multiplication 
    }
    cout<<"hope it helpfull!😊\n";
}