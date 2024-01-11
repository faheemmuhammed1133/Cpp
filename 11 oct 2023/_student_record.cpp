/*2. Design a C++ program to manage student records. Create a class Student
with attributes such as name, roll number, and marks. Implement methods
for displaying student details, adding new students, and calculating the
average marks of all students in the record system.*/

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
};
int main(){
    Student s1,s2,s3;
    s1.getData(1,"ABC");
    s2.getData(2,"XYZ");
    s3.getData(3,"UVW");
    s1.showData();
    s2.showData();
    s3.showData();


    return 0;
}