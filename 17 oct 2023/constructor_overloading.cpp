#include<iostream>
using namespace std;
class Rect{
    private:
      int area;
    public:
      
    Rect(){
        area=0;
    }  
    Rect(int a,int b){
        area=a*b;
    }
    void disPlay(){
        cout<<"Area is "<<area<<endl;
    }
};
int main(){

    Rect r1;
    Rect r2(4,6);
    
    r1.disPlay();
    r2.disPlay();

    return 0;
}