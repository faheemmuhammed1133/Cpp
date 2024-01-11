// program to read and print student basic information for BTech Admission:
#include <iostream> 
#include<string>
#include<thread>
using namespace std;

class Btech{
    public:
    string name[2], branch,dob,ph;
    float twelthMarks;
    bool eligible;// = true;
    
};
class Droppers:public Btech{
    public:
    void setDetails(){
        cout<<"enter name :";
        getline(cin,name[0]);
        getline(cin,name[1]);
        
        std::this_thread::sleep_for(std::chrono::seconds(1));
        cout<<"enter your whatsapp number ";
        cin>>ph;
        cout<<"enter your dob(dd mm yyyy)";
        cin>>dob;

        cout<<"branch?";
        cin>>branch;
        if(branch=="cse"){
            eligible=true;
        }else{
            cout<<"Sorry, we are only providing BTech CSE Right Now: \nif you are applying for btech cse, write \'cse\'";
            eligible=false;
        }
        }
    void eligibilityMark(){
    
        cout<<"enter your JEE percentile : ";
        cin>>twelthMarks;
        if(twelthMarks>86 && twelthMarks<=100){

        }else if (twelthMarks>78 && twelthMarks<=86)
        {
            cout<<"you are required to give an eligibility test from the comfort of your home\n";
            cout<<"test will be sent to your registered phone no. \n";
        }else{
            cout<<"\n\t Sorry You Are Not Eligible For The Program. \n" ;
            eligible=false;
        }
        
        }
    void Declare(){
        if(eligible==true){
        cout<<"\n"<<name[1]<<"\n";
        cout<<"phone number "<<ph;
        cout<<"born on "<<dob<<"\n";
        cout<<twelthMarks<<"\n";
        cout<<"we hope to see you soon in our beutifull campu, Take care \n";
        }else{
          cout<<"you are not eligible for the program \n";
        }
    }
};
class Regular:public Btech{
    public:
    void setDetails(){
        cout<<"enter name :";
        getline(cin,name[0]);
        getline(cin,name[1]);

        std::this_thread::sleep_for(std::chrono::seconds(1));
        cout<<"enter your whatsapp number ";
        cin>>ph;
        cout<<"enter your dob(dd mm yyyy)";
        cin>>dob;

        cout<<"branch?";
        cin>>branch;
        if(branch=="cse"){
            eligible=true;
        }else{
            cout<<"Sorry, we are only providing BTech CSE Right Now: \nif you are applying for btech cse, write \'cse\'";
            eligible=false;
        }
        }
    void eligibilityMark(){
        
        cout<<"enter your 12th marks : ";
        cin>>twelthMarks;

        if(twelthMarks>92 && twelthMarks<=100){
            
        }else if (twelthMarks>80 && twelthMarks<=92)
        {
            cout<<"you are required to give an eligibility test from the comfort of your home\n";
            cout<<"test will be sent to your registered phone no. \n";
        }else{
            cout<<"\n\t Sorry You Are Not Eligible For The Program. \n" ;
            eligible=false;
        }
        
        }
    void Declare(){
        if(eligible==true){
        cout<<"\n"<<name[1]<<"\n";
        cout<<"born on "<<dob<<"\n";
        cout<<twelthMarks<<"\n";
        cout<<"we hope to see you soon in our beutifull campus, Take care \n";
        }else{
          cout<<"you are not eligible for the program \n";
        }
    }
};

int main() {
    mein:
    int n,k;
    cout<<"how many students you want to apply :";
    cin>>n;
    Droppers d;
    Regular r;
    for(int i=0;i<n;i++){
       
        cout<<"Dropper or Reugular(1,2)?";   
        cin>>k;
        if(k==1){
            d.setDetails();
            d.eligibilityMark();

        }else if(k==2){
            r.setDetails();
            r.eligibilityMark();
        }else 
        {
            cout<<"invlaid input\n";
            goto mein;
        }
        
    }
    for(int i=0;i<n;i++){
        if(k==1){
            d.Declare();
            cout<<"I assure the above details provided are correct (y/n) ";
            char y;
            cin>>y;
            if(y=='n'){
              goto mein;
            }else{
                cout<<"have a great day!\n";
            }
        }else if(k==2){
            r.Declare();
            }cout<<"\nI assure the above details provided are correct (y/n) ";
            char y;
            cin>>y;
            if(y=='n'){
              goto mein;
            }else{
                cout<<"have a great day!\n";
            }
    }
    
    return 0;
}