#include<iostream>
using namespace std;
class Cube{
    public:
    int side;

    Cube(){
        cout<<"Default constructor called\n";
        side=10;
    }
    ~Cube(){
        cout<<"Destructor called\n";
    }

};
int main(){
    Cube c;
    cout<<c.side<<endl;
}