#include <iostream>
using namespace std;
#include <string>

int main(){
    // string fullName;
    // cout <<"enter a name: ";
    // getline(cin,fullName);
    // cout<<"your name is "<<fullName<<endl;
    string firstname,lastname,fullname;
    cout << "Enter your First Name :"; cin >>firstname ;
    cout << "\n Enter Your Last Name:"; cin>> lastname;
    // fullname = firstname + lastname;
    //  cout <<"\n FullName : "<<fullname;
    // 2nd way of concatenation using the overloaded operator+()
    //   cout <<"\n FullName: "<<(firstname+" "+lastname);
    //3rd method to concatenate strings by appending one string at end another.
        cout <<"\n FullName: "+(firstname).append(" ").append(lastname);
    //4th method to concatenate two strings and store it in third variable.
    //    (firstname+""+lastname).copy(fullname,0,(firstname+""+lastname).length());
    //5th method to concatenate two strings and store it in third variable.
    //    strcpy((char*)fullname,"");
    //6th method to concatenate two strings and store it in third variable.
    //    strcat ((char *)fullname ,firstnamme );
    //7th method to concatenate two strings and store it in third variable.
    //    strncpy((char *)fullname ,"",sizeof(fullname));
    //8th method to concatenate two strings and store it in third variable.
    //    sprintf(fullname,"%s %s ",firstname,lastname);
    

        return 0;
        }
