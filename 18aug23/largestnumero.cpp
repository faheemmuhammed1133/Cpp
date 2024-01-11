#include<iostream>

using namespace std;

int main() 
{
    int a, b, c;
    cout<<"enter values for a , b , c :";
    cin >>a>>b>>c ;
    if(a > b && a > c) {
        cout << "\nlargest number is \n"<<a<<endl;
    } else if(b > a && b > c) {
        cout <<"\n largest number is\n"<<b<< endl;
    } else {
        cout<<"\nlargst numbe is\n" <<c<<endl;
    }
        return 0;
}
