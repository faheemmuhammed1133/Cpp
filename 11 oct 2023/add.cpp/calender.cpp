#include <iostream>
using namespace std;
int main(){
    string t31[7]={"january","march","may","july","august","october","december"}, t30[4]={"june","april","november","september"};
    string day[7]={"sunday","monday" ,"tuesday","wednesday","thursday","friday","saturday"};
    cout<<"month?";
    string x,y;
    int startingDay,month;
    cin>>x;
    cout<<"starting day?";
    cin>>y;
    
    for(int i=0;i<7;i++){
        //month setting:
        if (t31[i]==x){
            month=31;
        }else if(t30[i]==x){
            month=30;
        }else if(x=="february"){
            month=28;
        }
        //day setting:
        if(day[i]==y){
            startingDay=i;
        }
    }
    cout<<"here is your calender of month "<<x<<" starting from "<<y<<"\n";
    for(int i=startingDay;i<7;i++){
        cout<<" ";
    }
    if((month==31||month==30||month==28)&&(startingDay>=0&&startingDay<7)){
            for(int i=1;i<=month;i++){
            if(i<=9){
                cout<<0;
            }
            cout<<i<<": "<<day[startingDay]<<"  ";
            startingDay++;
            
            if(startingDay>6){
                cout<<"\n";
                startingDay=0;
            }
            }
    }else{
        cout<<"invalid entry of month or day\n";
    }
    cout<<"\n";
    return 0;
}