// greatest among three

#include <iostream>
using namespace std;
int main(){
    float a , b , c;
    cout<<"Enter three numbers : \n";
    cin>>a>>b>>c;
    cout<<"\n\n";
    if(!((a==b && a==c)||(b == c && b == a) || (c == a && c==b))){
    if(a>=b && a>=c){
    if (a==b)
    {
    cout<<"1st no. \""<<a<<"\" & "<<"2nd no. \""<<b<<"\" are the joint greatest";
    }
    else if( a == c)
    {
    cout<<"1st no. \""<<a<<"\" & "<<"3rd no. \""<<c<<
    "\" are the joint greatest";
    }
    else
    {
    cout<<"1st no. \""<<a<<"\" is greatest";
    }
    }
    else if(b > a && b >= c){
    if(b == c){
    cout<<"2nd no \""<<b<<"\" & "<<" 3rd no \""<<c<<"\" are the joint greatest";
    }
    else{
    cout<<"2nd no \""<<b<<"\" is greatest";
    }
    }
    else
    {
    cout<<"3rd no. \""<<c<<"\" is greatest";
    }

    }
    else{
    cout<<"ALL EQUAL";
    }
    cout<<"\n\n";
    return 0;
}