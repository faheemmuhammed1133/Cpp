#include<iostream>

using namespace std;
int main()
{
    int input=0, b=0, c=1 , series = 0 ;
    
    cout <<"welcome to fibuonacci series \n";
    cout <<"Please enter the number of fibuonacci you want \n";
    cin >> input;
    if(input==0){
        cout<<"enter positive num ";
    }
    else if (input==1){
       cout <<"here is your series \n" << b << " \n";
       }
    else if (input==2){
       cout <<"here is your series \n" << b << " \n" << c << " \n";
       }else{
        cout<<"here is your series \n" <<b<<"\n";
    for (int i=1; i<input; i++){
       
       series = b + c;
       b = c;
       c = series ;
       
       cout << series << "\n";

     }
    }
    return 0;
    
}