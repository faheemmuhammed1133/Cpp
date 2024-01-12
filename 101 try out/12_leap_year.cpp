// leap year check.
#include<iostream>
using namespace std;
int main(){
    int x;
    cout <<"provide a year to check if it is leap year \n";
    cin>>x;
    //ensuring only natural numbers.
    if (x<1){
        cout<<" invalid input! \n";
        return main();
    }else{
// condition checks if it is included in leap year.
if((x%4==0&& x%100 !=0)|| x%400==0){
    cout <<x <<"th year is a leap year \n";

}else{
    cout <<x <<"th year is not a leap year \n";
}
    }
return 0;
}

/*#include<iostream>
using namespace std;
int main(){
    
string str;
    cout <<"enter a string to reverse: ";
    cin>>str;
    array x[str.length()],rx[str.length()];
    for(int i=str.length();i<=1;i--){
        rx = rx+str[i];
    }
    cout<<"\nreverse of the entered string is : "<<rx[];
}*/
