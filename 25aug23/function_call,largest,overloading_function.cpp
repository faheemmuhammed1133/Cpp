//function call ...(inline,...)
/*#include <iostream>


using namespace std;
inline int add(int x,int y=14,int r=22){
    int z=x+y+r;
    return z;
//     cout<<"\nAddition of two numbers is : "<<x+y<<endl;
}
int main(){
    int a,b,sum,r;
    cout << "\nEnter the value for a , b and r : ";
     cin >>a>>b>>r ;

        sum =add(a);
       cout<<"\nAddition of these numbers is : "<<sum;
    
         
        return 0;}
        //
*/
// largest of two
/*#include <iostream>
using namespace std;
void lar(int x,int y)
{
    if((x>y)){
        cout<<"Largest number between " <<x<<" & "<<y<<" is : "<<x<<endl;
    }
    else if (x==y){
        cout <<"both " <<x<<" & "<<y<<" are equal"<<endl;
    }
    else {
        cout<<"largest number between " <<x<<" & "<<y<<" is "<<y<<endl;
        }
    }
    int main (){
        int a, b ;
        cout <<"enter two values to find largest";
        cin>>a>>b;
        lar(a,b);
        return 0;
    }*/

// function overloading

#include <iostream>
using namespace std;
void add(int x,int y){
    cout <<"\nf1 is called;\n";
    cout <<"Sum of given numbers: "<<x + y<<endl<<endl;
}
void add(int x, int y, int z){
    cout <<"f2 is called\n";
    cout <<"Sum of given numbers :"<<x+y+z<<endl<<endl;
}
void add(double x,int y,int z){
    cout <<"f3 is called \n" ;
    cout <<"Sum of given numbers:"<<x+y+x<<endl<<endl;
}
int main(){
    int a,b,c;
    double r;
    cout << "\nEnter the value for a , b ,c and r(decimal) : \n";
     cin >>a>>b>>c>>r ;
     add(a,b); //f1 is called

     add(a,b,c);//f2 is called

     add(r,b,c);//f3 is called
     
     return 0;
}