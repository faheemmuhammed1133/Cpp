//if num divisible by 11 and 5 among given numbers.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements u wanna check: ";
    cin>>n;
    int array[n];
    for (int i=1;i<=n;i++){
        cout<<"enter an element to check: ";
        cin >>array[i];
    }
    for (int i=1;i<=n;i++){
        if(array[i]%5==0&&array[i]%11==0){
            cout<<array[i]<<" is divisible by 11 and 5. \n";
        }else{
            cout<<array[i]<<" is not divisible by 11 and 5. \n";
        }
    }
    return 0; 
}
