//find is it a vowel or consonent.
#include<iostream>
using namespace std;
int main() {
    char c;
    cout<<"enter a single character to check if vowel or consonent ";
    cin>>c;
    if(c=='a'||c=='A'||c=='E'||c=='e'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U'){
        cout<<c<<" is a vowel ";
    }else{
        cout<<c<<"is not a vowel";
    }
}