/*//1 Write the program to compute area of triangle and circle by overloading the area function
#include <iostream>
using namespace std;

// int AR(double x, double y){
void AR(double x, double y){
    double area=(x*y)/2;
    cout<<"\narea of triangle of side "<<x<<" and "<<" height "<<y<<" is "<<area<<endl;
    // return area;
}
// int AR(double x ){
    void AR(double x ,float pi=3.14){
    double area = pi*x*x;
    cout<<"\narea of circle with radius "<<x<<" is "<<area<<endl;
    // return area;
}

int main (){
    double a,b,r,area;
    cout<<" \nenter base length of trianle : ";
    cin>>a;
    cout<<"\nenter height of triangle : ";
    cin>>b;
    cout <<"\nenter radius for circle : ";
    cin>>r;
    AR(a,b);
    // area=AR(a,b);
    // cout<<"\narea of triangle of side "<<a<<" and "<<" height "<<b<<" is "<<area<<endl;
    AR(r);
    // area=AR(r);
    // cout<<"\narea of circle with radius "<<r<<" is "<<area<<endl;
    return 0;
}*/
//2 write a c++ program to display the relation between two variables using mustiple written/return statements
#include<iostream>
using namespace std ;

int xyz(int x,int y){
    if (x==b)
    {
        return "0";
    }
    else if(x>y){
        return "1";
    }
    else{
        return "-1";
    }
}
int main(){
 
    int a,b;
    cout <<"Enter two numbers: ";
    cin >> a >> b;
    xyz(a,b);
    cout<<;

    return 0;
}