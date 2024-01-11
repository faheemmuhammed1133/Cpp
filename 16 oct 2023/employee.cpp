#include <iostream>
#include <string>
using namespace std;
class Employee
{
public:
  int employee_number, annualsalary, working_hours,n;
  string employee_name,post, postconclusion[4]={"Principal","Hod","Professor","Lab Assistant"};
  int basic_salary, da, net_salary;
};
class Description : public Employee

{
public:
  void getDetails()
  {
    cout << "Enter the post of the person \n";
    for(int i=0;i<4;i++){
      cout<<i+1<<"."<<postconclusion[i]<< endl;
    }
    cin >> n;
    post=postconclusion[n-1];
  
    cout << "Enter the name of the \'" << post << "\'"<< endl;
    cin >> employee_name;
  
    cout << "Enter the number of \'" << post << "\'"<< endl;
    cin >> employee_number;
  
    cout << "Enter the number of working hours per week as \'" << post << "\'"<< endl;
    cin >> working_hours;
    basic_salary = 1200 * working_hours;
    
    if (basic_salary > 70000)
    {
      da = 0.08 * basic_salary;
    }
    else
    {
      da = 0.07 * basic_salary;
    }
  }
  void showDetails()
  {
    cout << "Name: " << employee_name << endl;
  
    cout << "Daily Allowance: ₹" << da << endl;
  
    cout << "Basic salary: ₹" << basic_salary << endl;
  
    cout << post << "_number: " << employee_number << endl;
  
    net_salary = basic_salary + da;
    cout << "Net salary: ₹" << net_salary << endl;
  
    annualsalary = net_salary * 12;
    cout << "Annual salary : ₹" << annualsalary << endl;
  }
};
int main()
{
  Description d;
  d.getDetails();
  
  d.showDetails();
}
