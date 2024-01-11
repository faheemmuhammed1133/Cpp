#include<iostream>
using namespace std;
class A{
    public:
    int x;
    void getx(){
        cout<<"enter value of x ";
        cin>>x;
    }
};
class B{
    public:
    int y;
    void gety(){
        cout<<"enter value of y ";
        cin>>y;
    }
};
class C:public A,public B{
    public:
    void getSum(){
        cout<<"Sum is "<<x+y<<endl;
    }
};
int main() {
    C obj1;
    obj1.getx();
    obj1.gety();
    obj1.getSum();
    return 0;
}

