#include<iostream>
using namespace std;
int main(){
    float price;
    cout<<"enter the price value to check your discout : ";
    cin>>price;
    if(price>=10000 && price<25000){
        cout<<"your discount is 5 % .\n your final price is "<<price-price*.05<<"\n";
    }else if(price>=25000 && price<50000){
        cout<<"your discount is 14 % .\n your final price is "<<price-price*.14<<"\n";
    }else if(price>=50000 && price<100000){
        cout<<"your discount is 16 % .\n your final price is "<<price-price*.16<<"\n";
    }else if(price>=100000){
        cout<<"your discount is 20 % .\n your final price is "<<price-price*.2<<"\n";
    }else{
        cout<<"sorry, you are not eligible for any discount\n";
    }
}