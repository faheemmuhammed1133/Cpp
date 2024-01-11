// print multiplication table of a given number
#include <iostream>
using namespace std;
int main(){
    int x,y,z;
    strt:
    cout <<"Number you want multplication table of: \nFrom where : \nTo where you want: \n";
    cin>>x>>y>>z;
    cout<<"\nHere is your multplication table of "<<x<<" from "<<y<<" to "<<z<<"\n\n";
    for (int i=y;i<=z;i++){
        cout<<"\t"<<x<<" * "<<i<<" = "<<x*i<<"\n";
    }
    char yesorno;
    cout<<"Do you want to check again? (reply y for yes or reply n for no)";
    cin>>yesorno;
    if(yesorno=='y'){
        goto strt;
    }

    return 0;
}