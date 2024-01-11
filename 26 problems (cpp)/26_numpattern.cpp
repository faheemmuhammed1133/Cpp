// print patter like below
//    1
//   232
//  34543 
// 4567654
//  34543 
//   232
//    1
#include <iostream> 
using namespace std;

 


/*int main(){
    strt:
    int x;
    cout<<"enter odd number of rows you want: ";
    cin>>x;
    if(x%2==0){
        cout<<"\nMake sure to enter odd number only: ";
        goto strt;
    }else{
        for (int i = 0 ;i <= x/2+1 ;i++){
            for (int j=x/2+1;j>i;--j){
                cout<<" ";
            }
            for(int k=i+1;k>=i;k--){
                cout<<k;
            }
    } 
    }   
}*/

int main() { 
    strt:
    int k,n;
    cout<<"\nenter odd number of rows you want: ";
    cin>>k;
    cout<<"\n";
    n=k/2+1;
    if(n%2==0){
        cout<<"\nMake sure to enter odd number only: \n";
        goto strt;
    }else{

    // Print the top half of the pattern
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = n; j > i; j--) {
            cout << " ";
        }

        // Print increasing numbers
        for (int j = i; j <= 2 * i - 1; j++) {
            cout << j;
        }

        // Print decreasing numbers
        for (int j = 2 * i - 2; j >= i; j--) {
            cout << j;
        }

        
    cout <<"\n";
    }

    //  bottom half 
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = n; j > i; j--) {
            cout << " ";
        }

        // Print increasing numbers
        for (int j = i; j <= 2 * i - 1; j++) {
            cout << j;
        }

        // Print decreasing numbers
        for (int j = 2 * i - 2; j >= i; j--) {
            cout << j;
        }

        // Move to the next line
        cout <<"\n";
     }
    cout<<"\n";
    return 0;
    }
}
