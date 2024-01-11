// manage student records.

// Including the library
#include <iostream>
// Standard namespace to be used
using namespace std;
// Class for getting data and maintaining the objects
class Student
{
    private:
    // Initializing some value
    float sem1, sem2, sem3, sem4, sem5;
    float average;
    public:
    string name;
    int roll_no;
    // Will take inputs from the user and store it
    void getdata()
    {
        cout << "Name : \n";
        cin >> name;
        cout << "Roll No : \n";
        cin >> roll_no;
        cout << " Semester - 1 Marks - \n";
        cin >> sem1;
        while(sem1>100){
            cout<<"LESS THAN 101 PLEASE :)";
            cout << " Semester - 1 Marks - \n";
            cin >> sem1;
        }
        cout << " Semester - 2 Marks - \n";
        cin >> sem2;
        while(sem2>100){
            cout<<"LESS THAN 101 PLEASE :)";
            cout << " Semester - 2 Marks - \n";
            cin >> sem2;
        }
        cout << " Semester - 3 Marks - \n";
        cin >> sem3;
        while(sem3>100){
            cout<<"LESS THAN 101 PLEASE :)";
            cout << " Semester - 3 Marks - \n";
            cin >> sem3;
        }
        cout << " Semester - 4 Marks - \n";
        cin >> sem4;
        while(sem4>100){
            cout<<"LESS THAN 101 PLEASE :)";
            cout << " Semester - 4 Marks - \n";
            cin >> sem4;
        }
        cout << " Semester - 5 Marks - \n";
        cin >> sem5;
        while(sem5>100){
            cout<<"LESS THAN 101 PLEASE :)";
            cout << " Semester - 5 Marks - \n";
            cin >> sem5;
        }
        average = (sem1 + sem2 + sem3 + sem4 + sem5) / 5.0;
    }
    // Checking eligibility if the student is pass or not
    bool eligibilitycheck()
    {
        if (average >= 70.00 && sem1 >= 60.00 && sem2 >= 60.00 &&
        sem3 >= 60.00 && sem4 >= 60.00 && sem5 >= 60.00)
        {
        return true;
        }
        else
        {
        return false;
        }
    }
    // Displaying data of the object
    void displaydata()
    {
        cout << "\nName : " << name << "\n";
        cout << "Roll No : " << roll_no << "\n";
        cout << "Average : " << average << "\n";
        cout << "---------------------------\n";
    }
};
// Main loop or entry function
int main()
{
    char a;
    // Create an empty array of students
    Student stud[100]; // Assuming a maximum of 100 students
    int n = 0;
    do
    {
    // Creating a loop to get the desired amount of data
        // Count of students
        cout << "Do you want to enter student details? (y/n): ";
        cin >> a;
    if (a == 'y' || a == 'Y')
    {
        stud[n].getdata();
        n++;
    }
    } while (a == 'y' || a == 'Y');
    // Displaying data on the screen
    for (int i = 0; i < n; i++)
    {
        stud[i].displaydata();
        stud[i].eligibilitycheck();
    }
    do{
        cout << "Do you want to check some student's eligibility? (y/n) \n";
        cin >> a;
    if (a == 'y' || a == 'Y')
    {
        int search;
        cout << "Write the Roll No. you want to look for \n";
        cin >> search;
        for (int i = 0; i < n; i++)
            {
            if (search == stud[i].roll_no)
            {
            if (stud[i].eligibilitycheck() == true)
            {
                stud[i].displaydata();
                cout << "\n"
                << stud[i].name << " IS ELIGIBLE FOR THE NEXT SEMESTER"
                << "\n";
            }
            else
            {
                stud[i].displaydata();
                cout << "\n"
                << stud[i].name << " IS NOT ELIGIBLE FOR THE NEXT SEMESTER"
                << "\n";
            }
            }
        }
    }
    else{
        return 0;
    }
    }while(a=='y' || a == 'Y');
    // Essential

    return 0;
}