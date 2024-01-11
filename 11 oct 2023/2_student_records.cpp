/*2. Design a C++ program to manage student records. Create a class Student
with attributes such as name, roll number, and marks. Implement methods
for displaying student details, adding new students, and calculating the
average marks of all students in the record system.*/
#include<iostream>
using namespace std;
float sum=0;
class Student{
    private:
    string name,rollNo;
    float marks;
    public:
    void setData(int k){
        
        cout<<"enter name of student: "<<k+1<<" ";
        cin>>name;
        cout<<"enter Roll no of student: "<<k+1<<" ";
        cin>>rollNo;
        cout<<"enter marks: "<<k+1<<" ";
        cin>>marks;
        sum+=marks;
      
    }
    void getData(int k){

        cout<<"\nname of student "<<k+1<<" "<<name;
        cout<<"\nRoll No : "<<rollNo;
        cout<<"\nTotal marks got in exam : "<<marks;
        cout<<endl;
       
    }
    // float avg(){
    //     return sum;  
    // }
};
int main(){
    int n,x=0;
    mn:
    cout<<"how many student data you want to enter ";
    cin>>n;

    if(n<0){
        cout<<"enter positive intiger\n";
        goto mn;
    }

    Student stdnt[n+x];
    for(int i=0;i<n;i++){
        stdnt[i].setData(i);
    }
    for(int i=0;i<n;i++ ){
        stdnt[i].getData(i);
    
    }
        
    agn:
    char c;
    cout<<"Do you want to add more students? (type \'y\' else type anything) ";
    cin>>c;
    if(c=='y'){
        cout<<"how many more student data you want to enter ";
        cin>>x;
        for(int i=n;i<n+x;i++){
        stdnt[i].setData(i);
    }   
        for(int i=n;i<n+x;i++){
        stdnt[i].getData(i);
    }
    n=n+x;
    goto agn;
    }
    // float total=avg()/n;
    cout<<"\n\naverage of total  class is "<<sum/n<<endl;
    return 0;
}   