// program for understanding class and obj.
#include <iostream>
#include <string>
using namespace std;
class Student
{
    private:
    string college_name;
    string Rollno;
    string Name;
    float marks;
    public:
    Student(){
        college_name = "NIT";
        Rollno="1024567893";
        Name="<NAME>";
        
    }
    void collectData()
    {   string cn,rn,n;
        float m;
        cout<<"enter college name ";
        cin>>cn;
        college_name=cn;
        cout<<"enter roll number ";
        cin>>rn;
        Rollno=rn;
        cout<<"enter your name ";
        cin>>n;
        Name=n;
        cout<<"enter your marks \n";
        cin>>m;
        marks=m;

    }
    void showData(){
        cout<<"\n "<<college_name<<"\n "<<Rollno<<"\n "<<Name<<"\n "<<marks<<endl;
    }
    ~Student()
};
int main(){
    Student s1,s2,s3;
    s1.collectData();
    s2.collectData();
    s3.collectData();

    s1.showData();
    s2.showData();
    s3.showData();

    return 0;
}