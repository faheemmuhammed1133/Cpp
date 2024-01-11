/*Vehicle Rental System3
Design a C++ program that simulates a vehicle rental system.
Create a base class Vehicle with attributes like make, model,
and rental price. Derive classes like Car, Motorcycle, and Truck
from Vehicle. Implement functionality to rent and return vehicles,
calculate rental charges, and display the rental history.
*/
#include<iostream>
using namespace std;

class Vehicle{// base class
    public:
    string make,model,custommer_name,id_c;
    float rental_price,total;
    int day;
};
class Car:public Vehicle{
    public:
    void rent(float p){
        rental_price=p;
        cout<<"which company's car do you prefer to rent ?";
        cin>>make;
        cout<<"which model do you want? ";
        cin>>model;
        
        cout<<"\nPrice for "<<model<<" per day is @ ₹"<<rental_price;
    }
    void retrn(int d){
        day=d;
        if(day>5){
            total=(rental_price*day)-rental_price*.1;
        }else{
            total=rental_price*day;
        }
        cout<<"here is your bil\n\n";
        cout<<"Model     : Make     :Ppd  :Renting Days \n"
            <<model<<"    "<<make<<"    ₹"<<rental_price<<"    "<<day<<endl;
            cout<<"                                             \n"
                <<"                                             \n"
                <<"                                             \n"
                <<"Net Toatal                       : ₹"<<total<<"\n";
    }
    void history(int x,string name,string id){
        custommer_name=name;
        id_c=id;
        day=x;
        cout<<"\nHere  is you rental History : \n";
        cout<<"\n\'Mr/Ms "<<custommer_name<<"\'"<<endl;
        cout<<"liscence no : "<<id_c<<endl;
        cout<<"You have taken "<<make<<"'s "<<model<<" for "<<day<<" days \nHope you had a great deal ";
    }

};
class Motorcycle:public Vehicle{
    public:
    void rent(float p){
        rental_price=p;
        cout<<"which company's Motorbike do you prefer to rent ?";
        cin>>make;
        cout<<"which model do you want? ";
        cin>>model;
        cout<<"\nPrice for "<<model<<" per day is @ ₹"<<rental_price;
    }
    void retrn(int d){
        day=d;
        if(day>5){
            total=(rental_price*day)-rental_price*.1;
        }else{
            total=rental_price*day;
        }
        cout<<"here is your bil\n\n";
        cout<<"Model     : Make     :Ppd  :Renting Days \n"
            <<model<<"    "<<make<<"    ₹"<<rental_price<<"    "<<day<<endl;
            cout<<"                                             \n"
                <<"                                             \n"
                <<"                                             \n"
                <<"Net Toatal                       : ₹"<<total<<"\n";

    }
    void history(int x,string name,string id){
        custommer_name=name;
        id_c=id;
        day=x;
        cout<<"\nHere  is you rental History : \n";
        cout<<"\n\'Mr/Ms "<<custommer_name<<"\'"<<endl;
        cout<<"liscence no : "<<id_c<<endl;
        cout<<"You have taken "<<make<<"'s "<<model<<" for "<<day<<" days \nHope you had a great deal";
    }
};
class Truck:public Vehicle{
    public:
    void rent(float p){
        rental_price=p;
        cout<<"which company's Truck do you prefer to rent ?";
        cin>>make;
        cout<<"which model do you want? ";
        cin>>model;
        cout<<"\nPrice for "<<model<<" per day is @ ₹"<<rental_price;
    }
    void retrn(int d){
        day=d;
        if(day>5){
            total=(rental_price*day)-rental_price*.1;
        }else{
            total=rental_price*day;
        }
        cout<<"here is your bil\n\n";
        cout<<"Model   : Make     :Ppd   :Renting Days \n"
            <<model<<"    "<<make<<"    ₹"<<rental_price<<"    "<<day<<endl;
            cout<<"                                             \n"
                <<"                                             \n"
                <<"                                             \n"
                <<"Net Toatal                       : ₹"<<total<<"\n";
    }
    void history(int x,string name,string id){
        custommer_name=name;
        id_c=id;
        day=x;
        cout<<"\nHere  is you rental History : \n";
        cout<<"\n\'Mr/Ms "<<custommer_name<<"\'"<<endl;
        cout<<"liscence no : "<<id_c<<endl;
        cout<<"You have taken "<<make<<"'s "<<model<<" for "<<day<<" days \nHope you had a great deal ";
    }

};

int main(){
    string name,liscence_no;
    int choos;
    cout<<"\n Welcome to \'ABC Rentals\'\n"
        <<"What is your name Mr/Ms \n";
    getline(cin,name);
    cout<<"Liscence no :";
    getline(cin,liscence_no);
    cout<<"Which type of vehicle do you prefer\n";
    cout<<"1.Car\n2.Motorcycle\n3.Truck\n";
    cin>>choos;
    Truck   t;
    Car c;
    Motorcycle m;
    switch (choos)
    {
    case 1:
        c.rent(1600.00);
        break;
    case 2:
        m.rent(800.00);
        break;
    case 3:
        t.rent(2000.00);
        break;    
    default:
        cout<<"INVALID OPTION OF VEHICLE CHOOSEN! 😔";
        break;
    }
    int days;
    cout<<"\n\nhow many days do you prefer to rent ";
    cin>>days;

    if(choos==1){
        c.retrn(days);
    }else if(choos==2){
        m.retrn(days);
    }else if(choos==3){
        t.retrn(days);
    }
    
    if(choos==1){
        c.history(days,name,liscence_no);
    }else if(choos==2){
        m.history(days,name,liscence_no);
    }else if(choos==3){
        t.history(days,name,liscence_no);
    }

    if(days>5){
        cout<<"\nYou have got \'10 % \' discout\n";
    }
    cout<<"\nThank you for choosing \'ABC Rental\'\n";
    return 0;
    
}