// to print pattern
//    *****
//     ****
//      ***
//       **
//        *
#include<iostream>
using namespace std;
int main (){
    int x;
    cout<<"enter number of rows you want ";
    cin>>x;
    for (int i=1;i<=x;i++){
        for(int j = 1 ;j <=i;j++){
            cout<<" ";
        }
        for(int k=x;k>=i;k--){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
