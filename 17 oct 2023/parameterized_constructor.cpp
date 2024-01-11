#include<iostream>
using namespace std;
class Wall{
    public:
    double base,height;

    Wall(double b,double h){
       base=b;
       height=h;
    }
    void showArea(){
        cout<<" area of wall is "<< base*height<<endl;
    }
};
int main(){
    
    Wall wall1(4.8,6.2);
    wall1.showArea();

    return 0;
}