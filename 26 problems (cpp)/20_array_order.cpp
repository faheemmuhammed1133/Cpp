//check if array is sorted in ascending order or not;
#include<iostream>
#include<string>
using namespace std;
int main() {
    bool sorted=true;
    int n,l=0;
    cout<<"enter length of array you wish to enter: ";
    cin>>n;
    string x[n];
    for(int i=0;i<n;i++){

        cout<<"enter element "<<i+1<<" of array \n";
        cin>>x[i];
        if(i>0){

        if(x[i-1]>x[i]){
            sorted=false;
        }
        }
    }
    if(sorted){
        cout<<"array is sorted.";
    }else{
        char dec;
    cout<<"array is not sorted in ascending order\nif you want to sort type \'Y\':";
    cin>>dec;
        if(dec=='Y'){
        cout<<"sorting the array...\n";
        sort(x,x+n);
        cout<<"sorted array:\n";
        for(int i=0;i<n;i++){
        cout<<x[i]<<"\n";
        }
         cout<<"array is sorted now.";
        }
    }
     return 0;
}