// Determining category of aeroplane by it's speed:
//500:-slow.
//moderate:-500-1000.
//fast:-1000-1500.
//supersonic:-1500 or above.
#include<iostream>
using namespace std;
int main(){
    float sp;
    cout<<"Enter the cruising speed of Aeroplane to check its category: ";
    cin>>sp;
    cout<<endl;
    //category check using if else ladder:
    if(sp<500){
        cout<<"\tAeroplane belongs to \'Slow\' category .";
    }else if(sp>=500 && sp<1000){
        cout<<"\tAeroplane belongs to \'Moderate\' category\' .";
    }else if(sp>=1000 && sp<1500){
        cout<<"\tAeroplane belongs to \'Fast\' category .";
    }else {
        cout<<"\tAeroplane belongs to \'Supersonic\' category .";
    }
    cout<<endl<<endl;
    return 0;
}