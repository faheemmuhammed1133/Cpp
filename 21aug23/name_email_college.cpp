#include <iostream>
#include <string>
using namespace std;

int main()
{
  string first_name,college,mail,Last_name;
  
  cout<< "Enter your First Name: ";
  cin>> first_name;

  cout<< "Enter your Last Name: ";
  cin>> Last_name;
  string Full_name= first_name + " "+ Last_name;
  cout<< "Hello, "<< Full_name <<"!"<<endl;

  long int num;
  int roll_no;
  cout<< "Enter your college name:. \n"<< "Enter your phone number\n"<< "Enter your email id: \n"<< "Enter your Roll no:. \n";
  cin>> college>> num>> mail>> roll_no;

  cout<< endl<< Full_name<<endl<< college<<endl<< num<<endl<< mail<<endl;
  return 0;
}
