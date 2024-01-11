#include<iostream>
using namespace std;
class Student{
    private:
    string name,rollNo;
    float marks;
    public:
    void setData(int k){
        
        cout<<"enter name of student: "<<k+1<<" ";
        cin>>name[k];
        cout<<"enter Roll no of student: "<<k+1<<" ";
        cin>>rollNo[k];
        cout<<"enter marks: "<<k+1<<" ";
        cin>>marks;
      
    }
    void getData(int k){
        
        cout<<"\nname of student "<<k+1<<" "<<name[k];
        cout<<"\nRoll No : "<<rollNo[k];
        cout<<"\nTotal marks got in exam : "<<marks;
        cout<<endl;
       
    }
    Student 
    
};
int main(){
    cout<<"how many student data you want to enter ";
    int n,i;
    cin>>n;
    Student stdnt[]={};
    if(n>0){
    
    for( i=0;i<n;i++){
        stdnt[i].setData(i);
    }
    for( i=0;i<n;i++ ){
        stdnt[i].getData(i);
    
    }
    }else{
        cout<<"enter positive intiger\n";
        return main();
    }
    agn:
    char c;
    cout<<"Do you want to add more students? (type \'y\' else type anything ";
    cin>>c;
    if(c=='y'){
        int x;
        cout<<"how many more student data you want to enter ";
        cin>>x;
        for( i=n;i<n+x;i++){
        stdnt[i].setData(i);
    }   
        for( i=n;i<x;i++){
        stdnt[i].getData(i);
    }
    n=n+x;
    goto agn;
    }
    Student stdnt1;
    
    
    return 0;
    
}   