//student grade respect to mark.
#include <iostream>
using namespace std;
#include<string>
int main(){
    double mark[5],sum=0,t;
    int n=0;
    strt:
    cout<<"SUBJECTS: \n1.Maths\n2.Physics\n3.Chemistry\n4.English\n5.Biology\nEnter max marks you want: ";
    cin>>t;
    cout<<"How many Students Data you wanna check? ";
    cin>>n;
    string name[n];
    double avg1[n],p[n],avg=0;
    for(int i=0;i<n;i++){
        cout<<"Enter name of student No."<<i+1<<" : ";
        cin>>name[i];
        for(int j=0;j<5;j++){
             cout<<"Enter mark for subject "<<j+1<<" : ";
        cin>>mark[j];
            if(mark[j]>100){
                 cout<<"invalid entry\n\t start from begining\n\n";
                 goto strt;
        }
        sum +=  mark[i];
        }
        avg1[i]=sum;
        p[i]=sum*100/t;
    }
    
    for(int i=0;i<n;i++){
        cout<<"Name:"<<name[i]<<"\n";
        for(int k=0;k<5;k++){
        cout<<"mark in subject"<<i+1<<mark[k];
        }

        cout<<name[i]<<" has got total of "<<p[i]<<"% marks with a total mark of"<<avg1[i]<<" out of "<<t<<"\n";
    if(p[i]>=95.00){
        if(p[i]==100.00){
            cout<<"\nOutstanding";
        }
        cout<<"\nGrade A1\n";
        cout<<"Keep it up\n";
    }else if(p[i]>=90){
        cout<<"\nGrade A\n Well done\n";
    }else if(p[i]>=85){
        cout<<"\nGrade B1\n Great\n";
    }else if(p[i]>=80){
        cout<<"\nGrade B\nGood\n";
    }else if(p[i]>=75){
        cout<<"\nGrade C1\nShould have done Better\n";
    }else if(p[i]>=70){
        cout<<"\nGrade c\n Average";
    }else if(p[i]>=55){
        cout<<"\nGrade D1\nNeed Improvement\n";
    }else if(p[i]>40){
        cout<<"\nGrade D\nHardly passed\n";
    }else if(p[i]<=40){
        cout<<"\nGrade E";
        cout<<"\n Failed\n";
    }
    avg +=avg1[i];
    }
    cout<<"average mars is "<<avg;
    cout<<"\n";
    return 0;
    }