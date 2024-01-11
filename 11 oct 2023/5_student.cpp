/*5. Design a program to manage student grades for a classroom. Create a
class Student with attributes for student name and an array to store grades.
Implement methods for adding grades, calculating the average grade, and
displaying the student's name and grades. Use constructors and destructors
to initialize and release resources.*/
#include <iostream>
#include <string>  
using namespace std;
float sum=0;

class Student{
    private:

    string name,rollNo;
    float marks;
    int x;
    public:
    
Student(){
    int n;
    mn:
    cout<<"how many student data you want to enter ";
    cin>>n;
if(n<0){
    cout<<"enter positive intiger\n";
    goto mn;
    }
    x=n;

for(int i=0;i<n;i++){
    cout<<"enter name of student "<<i+1<<":- ";
    cin>>name;
    cout<<"enter Roll no of student "<<i+1<<":- ";
    cin>>rollNo;
    cout<<"enter marks "<<i+1<<":- ";
    cin>>marks;
    sum+=marks;     
    }
}

void showData()
{ 
for(int i=0;i<x;i++){  
    cout<<"name student "<<i+1<<" . "<<name<<endl;
    cout<<"RollNo : "<<rollNo<<endl;
    cout<<"marks : "<<marks<<endl;
        
    }
}

void avg(){
     cout<<"average marks of total class : "<<sum/x<<endl;
}
~Student(){

}
     
};
int main(){  
    Student s;
    s.showData();
    s.avg();
}