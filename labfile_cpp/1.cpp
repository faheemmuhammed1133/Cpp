//Calculate the roots of a quadratic equation using the discriminant
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
//ax^2+bx+c=0 is the quadratic equation
//b^2-4ac is discriminant.
double d,a,b,c;
//let D be Discriminant.
cout<<"\nQuadratice equation looks like (ax2+bx+c=0)\n";
cout<< "\nEnter the value of 'a': "; //asking user for the input
cin>>a; //initializing it with user input
cout<< "\nEnter the value of 'b': "; //asking user for the input
cin>>b; //initializing it with user input
cout<< "\nEnter the value of 'c': "; //asking user for the input
cin>>c; //initializing it with user input
if (a == 0)
{
if (b == 0) //if a=0, and also b=0, do...
{
if (c == 0) //if all three a = b = c = 0, do...
{
cout<< "\n\nInfinite solutions (Identity equation)"
<<endl; //print this
}
else // if c!=0 then print the following
{
cout<< "\n\nNo Solution (Contadiction)"<<endl;
}
}
else //if b!=0 do the following
{
    double x = -c/b ; //formula.
cout << "\n(Linear Equation) One root at 'x' = "<< x
<<endl; //printing the result
}
}
else //if a != 0 , do the following
{
d= (b*b)- 4*a*c ; //formula
cout<< "\nDiscriminant is: "<< d<< endl; //print the valu of discriminant

if ( b == 0) //when b =0
{
if (c == 0) //when b and c both = 0
{
cout<<"\nNo solution (Contradiction)"<<endl; // print this.
}
else //when c!= 0
{
double x = -c/a; //formula
cout<< "\n(Linear Equation) One root at x = "<<x<<endl; //print this.
}
}
else if (c == 0) //when c=0
{
cout<<"\nx = 0 "<<endl; //print this and also
cout << "\nAnother root at x = " << (-b / a) <<
endl;// print this
}
else if (d > 0) //when discriminant is greater than zero then...
{
double x1 = (-b + sqrt(d)) / (2 * a); //formula
double x2 = (-b - sqrt(d)) / (2 * a); //formula

cout << "\nDistinct Real Roots: \nRoot 1 = " << x1 <<
"\nRoot 2 = " << x2 << endl; //print the roots of the equation
}
else if (d == 0) //when discriminant is = 0 , then...
{
double x = -b / (2 * a); //formula
cout << "\nRepeated Real Root: x = " << x << endl; // print the root
}
else //when dicriminant is lesser than zero ,then...
{
double real = -b / (2 * a); //formula
double imaginary = sqrt(-(d)) / (2 * a); //formula
cout << "\nComplex Roots: \nRoot 1 = " << real << " + "
<< imaginary << "i \nRoot 2 = " << real << " - " << imaginary <<
"i" << endl; //print the roots of the equation
}
}
return 0; //end of this
}