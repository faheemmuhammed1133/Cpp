#include<iostream>
using namespace std;
class Wall{
    public:
    double length,breadth;

    Wall(double l,double b){
        length=l;
        breadth=b;
    }
    Wall(Wall & xyz){
        length=xyz.length;
        breadth=xyz.breadth;
    }
    double Area(){
        return (length*breadth);
    }
};
int main(){

    Wall wall1(4.8,6.2);

    cout<<"area of wall 1 is "<<wall1.Area()<<endl;

    Wall wall2=wall1;

    cout<<"area of wall 2 is "<<wall2.Area()<<endl;

    return 0;
}