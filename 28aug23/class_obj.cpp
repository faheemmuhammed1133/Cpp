#include<iostream>
using namespace std;
class Demo

{
    private:
    int data;
    public:
    void setdData(int d)
    {
        data = d;
    }
    void showData()
    {
        cout<<"Data is "<<data<<endl;
    }
};
int main() {
Demo s1,s2;
s1.setdData(13);
s2.setdData(56);
s1.showData();
s2.showData();
}
