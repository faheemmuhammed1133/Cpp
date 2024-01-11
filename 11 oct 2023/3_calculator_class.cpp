/*3. Create a C++ program that implements a basic calculator. Use a class
Calculator with methods to perform addition, subtraction, multiplication,
and division of two numbers. The program should allow the user to input
two numbers and select an operation to perform.*/

#include <iostream>
using namespace std;
class Calculator{
    private:
    char prodcedure[5]={'+','-','*','/','%'};
    double a,b,result;
    int procedr;

    public:

    void getValues(){
        cout<<"Enter first number : ";
        cin>>a;
        cout<<"Enter the second number : ";
        cin>>b;
        for(int i=0;i<5;i++){
            cout<<i+1<<":-"<<prodcedure[i]<<endl;
        }
        cin>>procedr;
        if(procedr==1){
            result=a+b;
        }else if(procedr==2){
            result=a-b;
        }else if(procedr==3){
            result=a*b;
        }else if(procedr==4){
            result=a/b;
        }else if(procedr==5){
            result=int(a)%int(b);
        }else{
            cout<<"Invalid Operation";
        }
    }
    
    void showFinal(){
        if(procedr==1)
        {
            cout<<a<<" + "<<b<<" = "<<result<<"\n";
        }
        else if(procedr==2)
        {
            cout <<a<<" - "<<b<<" = "<<result<<"\n";
        }
        else if(procedr==3)
        {
            cout <<a<<" * "<<b<<" = "<<result<<"\n";
        }
        else if(procedr==4)
        {
            cout<<a<<" / "<<b<<" = "<<result<<"\n";
        }
        else if(procedr==5)
        {
            cout<<a<<" / "<<b<<" remainder = "<<result<<"\n";
        }else
        {
            cout<<"Invalid operation\n";
        }
    }
};
int main(){

    Calculator c;

    c.getValues();
    c.showFinal();

    return 0;
}