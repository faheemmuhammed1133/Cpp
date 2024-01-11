#include<iostream>

using namespace std;

class student {
    private:
    int rollno;
    string name;
    string Class;
    string div;
    int mark;

    public :
    //    void getdata() ; //default constructor
    void getstudentdata() {
        cout<<"enter rollno";
        cin>>rollno;
        cout<<"enter name";
        cin>>name;
        cout<<"enter class";
        cin>>Class;
        cout<<"enter division";
        cin>>div;
        cout<<"enter mark";
        cin>>mark;
       
    }
    void displaydata(){
        cout<<"\nRoll No  :"<<rollno<<endl;  //cout is used to print the value of variable.
        cout<<"\nName     :"<<name<<endl;   
        cout<<"\nClass    :"<<Class<<endl;   
        cout<<"\nDivison  :"<<div<<endl;
        cout<<"\nMark     :"<<mark<<endl;
    }
};
int main()
{
    //constructor with parameterized values.
    student s1, s2;
    s1.getstudentdata();
    s1.displaydata();
    
    return 0;
}