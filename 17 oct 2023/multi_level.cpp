#include<iostream>
using namespace std;
class Base{
    public:
    int x;
    void getData(){
        cout<<"enter value of x: ";
        cin>>x;
    }
};
class Derrive1 : public Base{
    public:
    int y;
    void readData(){
        cout<<"enter value for y: ";
        cin>>y;
    }
};
class Derrive2 : public Derrive1{
    private:

    int z;

    public:

    void inData(){
        cout<<"enter value for z: ";
        cin>>z;
    }

    void product(){
        cout<<"product is "<<x*y*z<<endl;
    }
};
int main(){

    Derrive2 a;

    a.getData();
    a.readData();
    a.inData();
    a.product();

    return 0;
}