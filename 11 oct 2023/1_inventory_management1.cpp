/* 1. You are tasked with creating an inventory management system for a
small store. The system should use object-oriented principles in C++. Your
program should have the following features:
•
Create a Product class that represents a product in the inventory.
Each Product object should have the following attributes:
•
Product ID (an integer)
•
Product Name (a string)
•
Price (a floating-point number)
•
Quantity in stock (an integer)
•
Implement a parameterized constructor for the Product class to
initialize the attributes when a new product is added to the inventory*/
#include <iostream>
using namespace std;
class Product {
    private:
    int id, quantityInStock  ;
    float price;
    public :
    string name;
    // Parameterized Constructor , This will be used while adding products into Inventory
    Product (int id ,string n ,float p ,int qty){
        id = id;
        name=n;
        price=p;
        quantityInStock=qty;
        cout<<"\nproduct id: "<<id<<"\n"<<name<<"\n@ ₹"<<price<<"\n"<<qty<<" left in stock.\n\n";
    }
};
int main(){
    // int id, quantityInStock =0 ;
    // string name="";
    // float price=0.0;
    Product p1(111,"nike-A1",2999.00,12),p2(112,"adidas_flash-3",3499.99,6),p3(113,"nike_jordan3",2500.97,36),p4(1101,"puma_Aircros7",1998.99,15);
    return 0;
}