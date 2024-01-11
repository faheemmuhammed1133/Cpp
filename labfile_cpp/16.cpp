/*a program to creating an inventory management system for a small store. The
system should use object-oriented principles in C++. Yourprogram should have the
following features:
• Create a Product class that represents a product in the inventory. Each
Product object should have the following attributes:
• Product ID (an integer)
• Product Name (a string)
• Price (a floating-point number)
• Quantity in stock (an integer)
• Implement a parameterized constructor for the Product class toinitialize the
attributes when a new product is added to the inventory.*/

#include <iostream>
using namespace std;
class Product
{
    private:
    int stock;
    string productname;
    float price;
    public:
    int id;
    Product()
    {
        stock = 0;
        id = 0000;
        price = 0.0;
        productname = "None";
    }
    Product(int idd, string pname = "None", int st = 0, int pr = 0)
    {
        id = idd;
        productname = pname;
        stock = st;
        price = pr;
    }
    void setdetails()
    {
        cout << "\n______________________________";
        cout << "\nEnter the Product ID code : ";
        cin >> id;
        cout << "Product's Name : ";
        cin >> productname;
        cout << "Price : ";
        cin >> price;
        cout << "No. of Stocks : ";
        cin >> stock;
    }
    void getdetails()
    {
        cout << "_________________________________";
        cout << "\nNAME : ";
        cout << productname;
        cout << "\nID : " << id << "\n"
        << "PRICE : " << price << " STOCK : " <<
        stock << "\n";
    }
};
int main()
{
    int n, product_no;
    char y, x;
    cout << "Enter the number of products ";
    cin >> n;
    Product prod[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nDetails of Product " << i + 1;
        prod[i].setdetails();
    }
    access:
    cout << "Which product you want to access (ID)? ";
    cin >> product_no;
    for (int i = 0; i < n; i++)
    {
        if (product_no == prod[i].id)
        {
            prod[i].getdetails();
            cout << "\nAny changes?(y/n)";
            cin >> y;
            if (toupper(y) == 'Y')
            {
                prod[i].setdetails();
                cout<<"\nUpdated the changes to the Product with ID : ";
                cout<<prod[i].id<<"\n";
                prod[i].getdetails();
                cout<< " \n\n";
            }
            else
            {
                break;
            }
        }
        else
        {
            continue;
        }
    }
        cout << "Do you want to access details of another product ?";
        cin >> x;
        if (toupper(x) == 'N')
        {
            return 0;
        }
        else
        {
            goto access;
        }
    return 0;
}