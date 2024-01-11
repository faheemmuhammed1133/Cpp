// manage student grades for a classroom.

#include <iostream>
#include <unistd.h>
using namespace std;
class Student
    {
    private:
    int roll_no ;
    string name , grade;
    float marks , average;
    public:
    Student(){
        average = 0;
        marks = 0;
        name = "";
        grade = "";
        roll_no = 0;
    }
    void getinfo()
    {
        cout<<"\nEnter Student name : ";
        cin>>name;
        cout<<"\nEnter Roll No. : ";
        cin>>roll_no;
        for(int i = 1 ; i <= 5 ; i++)
        {
            rerun:
            cout<<"Enter subject "<<i<<" marks : ";
            cin>>marks;
            if(marks > 100 || marks < 0)
            {
                cout<<"marks should not exceed 100 and Should not be negative :) \n";
                goto rerun;
            }
            average += marks;
        }
    }
    void displayinfo()
    {
        cout<<"NAME : "<<name<<"\n";
        cout<<"ROLL NO. : "<<roll_no<<"\n";
        cout<<"Total marks(out of 500) : "<<average<<"\n";
        average /= 5.00;
        if(average >= 85 && average < 95)
        {
            cout<<"PERCENTAGE : "<<average<<"% with GRADE : A";
        }
        else if(average >= 95)
        {
            cout<<"PERCENTAGE : "<<average<<"% with GRADE : A+";
        }
        else if(average >= 75 && average < 85)
        {
            cout<<"PERCENTAGE : "<<average<<"% with GRADE : B";
        }
        else if(average < 75 && average >= 60)
        {
            cout<<"PERCENTAGE : "<<average<<"% with GRADE : C";
        }
        else if(average < 60 && average > 33)
        {
            cout<<"PERCENTAGE : "<<average<<"% with GRADE : D";
        }
        else
        {
            cout<<"PERCENTAGE : "<<average<<"% and failed class with GRADE : F";
        }
        sleep(2);
    }
    ~Student(){
    }
};

int main()
{
    int n;
    char y;
    cout<<"\nEnter the number of students you want to enter details of? \n";
    cin>>n;
    Student stud[n];
    for(int i = 0 ; i<n ; i++)
    {
        stud[i].getinfo();
    }
    cout<<"\nDo you want to display data?(y/n)";
    cin>>y;
    if(toupper(y) == 'Y')
    {
        for(int i = 0 ; i<n ; i++)
        {
            cout<<"\n___________________________\n";
            cout<<"STUDENT "<<i+1<<"\n";
            stud[i].displayinfo();
        }
    }
    else
    {
        return 0;
    }
}