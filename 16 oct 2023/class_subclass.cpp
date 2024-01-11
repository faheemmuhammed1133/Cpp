#include<iostream>
using namespace std;
class Shape{
    public:
    int height,width;
    void setHeight(int h){
        height=h;    
    }
    void setWidth(int w){
        width=w;
    }
};// sub class 1
class Rectangle : public Shape{
    public:
    int setArea(){
        return (width*height);
    }
};// sub class 2
class Triangle : public Shape{
    public:
    int tArea(){
        return (.5*width*height);
    }
};
int main(){
    Rectangle R;
    Triangle T;
    int n,x;
    cout<<"enter the base and height rectangel/triangle: ";
    cin>>n>>x;
    R.setHeight(x),R.setWidth(n);
    T.setHeight(x),T.setWidth(n);
    cout<<"\nTotal area of Rectangle "<<R.setArea()<<"\n\nArea of triangle of same side is "<<T.tArea()<<"\n\n";
    return 0;
}