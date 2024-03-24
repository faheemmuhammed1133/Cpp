// Implement a program to check if a triangle with given sides is equilateral, isosceles, or scalene.
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter sides of triangle: ";
    cin>>a>>b>>c;
    if(a==b&&a==c){
        cout<<"\ntriangle is Equilateral";
    }else if(a==b||a==c||c==b){
        cout<<"\ntriangle is Isosceles";
    }else{
        cout<<"\nTriangle is Scalene.";
    }
    return 0;
}