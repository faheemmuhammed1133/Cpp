#include <iostream>
using namespace std;
class Student{

private:

    int rollno;
    string name;

public:

void getData(int r, string n){
    rollno=r;
    name=n; 
}
void showData(){
    cout<<rollno<<"-";
    cout<<name<<"\n";
}
void setData(){
    cout<<"enter name: ";
    cin>>name;
    cout<<"enter roll no: ";
    cin>>rollno;
}
};
int main(){
    Student s1,s2,s3;
    s1.getData(1,"ABC");
    s2.setData();
    s3.setData();
    s1.showData();
    s2.showData();
    s3.showData();


    return 0;
}