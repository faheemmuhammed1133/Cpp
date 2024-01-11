#include<iostream>
using namespace std;
class Employee{
    public:
    int salary;
    public :
    Employee()
    {
        cout<<"default constructor is called...\n ";
        salary=50000;
        cout<<salary<<"\n";
    }
    Employee(int s)
    {
        cout<<"parametrized constructor is called...\n ";
        salary=s;
        cout<<salary<<"\n";
    }
    Employee(Employee &obj)
    {
        cout<<"copy constructor is called...\n ";
        salary=obj.salary;
        cout<<salary<<"\n";
    }
    ~Employee(){
        cout<<"destructor is called\n"; 
    }
};
int main(){
    Employee e1,e2(60000),e3=e2;// default constructor get called
    // cout<<e1.salary<<"\n";
    return 0;
}