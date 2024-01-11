// celsius to fahrenheit & viceversa.
#include <iostream>
using namespace std;
int main(){
    int x;
    double y,c;
    cout <<"enter  \' 1 \' to convert fahrenheit to celsius or \' any value \' to convert viceversa";
    cin>>x;
    if(x==1){
        cout<< "Enter Fahrenheit: ";
        cin>>y;
        c =.555555555*(y-32);
        cout<<"after convertion fahrenheit "<<y<<"-> celsius is"<<c;

    }else{
        cout<<"enter celsius: ";
        cin>>y;
        c =(1.8*y)+32;
        cout<<"after convertion celsius "<<y<<"-> fahrenheit is "<<c;
    }
}
    