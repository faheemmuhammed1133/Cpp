  /*int arr[10],i,mark,avg=0,largest=0;
        int Length = sizeof(arr) / sizeof(int);
        
        for (i=0 ; i<10;i++){
            cout<<"enter the marks for Rollno "<<i+1<<" : \n";
            cin>>mark;
            if(largest<=mark){
            largest=mark;
            }
            arr[i]=mark;
        }
        for( i=0 ; i<10;i++){
        cout<<"\tMarks of Rollno "<<i+1<<" is: "<<arr[i]<<"\n";
        }
       
        for( i=0;i<10;i++){
            
            avg=(avg+arr[i]);
           
    }
    cout <<"length of array is: "<< Length<<endl;
     cout<<"average mark is " <<avg/Length;
     cout<<"\nhighest mark is "<<largest<<endl;*/

#include <iostream>
using namespace std;
int main() {
    int number,Number=0,i;
    cout<<"enter num";
    cin>>number;
    
    while (number > 0)/*here it works by analysing last number first and add it to rev ,then remove from og then multiply the rev with ten and find the new last num and add to rev and continue procces till the number finishes*/ {
    i =  number % 10;
    Number += i; 
    number /= 10;
    
    }
    cout<<Number;
    return 0;
    }
    