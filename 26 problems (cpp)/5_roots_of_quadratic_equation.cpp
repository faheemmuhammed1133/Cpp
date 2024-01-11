// roots of quadratic equation
#include<iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"enter values for a , b, c of ax^2+bx+c=0, to find roots: ";
    cin>>a>>b>>c;
    float d=b*b-(4*a*c);
    if(d==0){
        cout<<"roots are equal , real. \n";
        float x=-b/(2*a);
        cout<<"root of equation = "<<x;
    }else if(d>0){
        cout<<"roots are real \n";
        float x1= (-b+(sqrt(d)))/(2*a);
        float x2= (-b-(sqrt(d)))/(2*a);
        cout<<"roots of equation"<<a<<"x^2+"<<b<<"x+"<<c<<"=0 are "<<x1<<" and "<<x2;
    }else if(0>d){
        float x= (sqrt(-d))/(2*a);
        cout<<"roots are imaginary , complex and conjugate of one other.\n";
        cout<<"roots of equation "<<a<<"x^2+"<<b<<"x+"<<c<<"=0 are: \n"<<(-b/(2*a))<<"+"<<x<<"i \n"<<(-b/(2*a))<<"-"<<x<<"i \n";
    }
    return 0;
}