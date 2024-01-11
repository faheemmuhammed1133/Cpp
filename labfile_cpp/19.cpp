// a simple online food odering system

#include <iostream>
#include <vector>
using namespace std;
class FoodItem {
public:
string name;
int price;
string description;
};
class Dessert : public FoodItem {
    public:
    int showMenu() {
    int choice;
    while (true) {
        try {
            cout << "\n1. Vanilla Ice Cream (INR 80/pc)\n2. Choco lava cake (INR 120/pc)\n3. Ice cream Shake (INR 60/pc)\n";
            cin >> choice;
            if (1 <= choice && choice <= 3) {
                return choice;
            } else {
                cout << "Wrong input. Please try again.\n";
            }
        } catch (...) {
            cout << "Invalid input. Please enter a number.\n";
        }
    }
    }
    void cart(int choice) {
        if (choice == 1) {
            name = "Vanilla Ice Cream";
            price = 80;
            description = "Made with Milk and essence of vanilla";
        } else if (choice == 2) {
            name = "Choco Lava Cake";
            price = 120;
            description = "A Chocolate based cake with melted chocolate filling";
        } else if (choice == 3) {
            name = "Ice Cream Shake";
            price = 60;
            description = "Milk Shake with ice cream topped on it, a mouthwatering edible shake";
        }
    }
};
class Appetizer : public FoodItem {
    public:
    int showMenu() {
        int choice;
        while (true) {
            try {
                cout << "\n1. Potato Wedges (INR 120/plate)\n2."
                <<"French Fries (INR 100/plate)\n3. Paneer Chilly (INR 180/plate)\n";
                cin >> choice;
                if (1 <= choice && choice <= 3) {
                return choice;
                } else {
                cout << "Wrong input. Please try again.\n";
                }
            } catch (...) {
                cout << "Invalid input. Please enter a number.\n";
            }
        }
    }
    void cart(int choice) {
        if (choice == 1) {
            name = "Potato Wedges";
            price = 120;
            description = "Fried Potato with wrinkled shape and seasoned with salt and pepper";
        } else if (choice == 2) {
            name = "French Fries";
            price = 100;
            description = "Deep Fried Potato sticks with Peri Peri seasonings";
        } else if (choice == 3) {
            name = "Paneer Chilly";
            price = 180;
            description = "Paneer Seasoned with veggies and sauce and Saute with golden crisp";
        }
    }
};
class MainCourse : public FoodItem {
    public:
    int showMenu() {
        int choice;
        while (true) {
            try {
                cout << "\n1. Veg Plate Thali (INR 230/Thali)"
                "\n2. Non Veg Plate Thali (INR 260/Thali)\n3. Special Veg Thali (INR 280/ Thali)"
                "\n4. Special Non Veg Thali (INR 300/Thali)\n";
                cin >> choice;
            if (1 <= choice && choice <= 4) {
                return choice;
            } else {
                cout << "Wrong input. Please try again.\n";
            }
            }catch (...) {
                cout << "Invalid input. Please enter a number.\n";
            }
        }
    }
    void cart(int choice) {
        if (choice == 1) {
            name = "Veg Plate Thali";
            price = 230;
            description = "A Full meal Thali Served with 4 Rotis  with salad, paneer, dal, papad"; 
        } else if (choice == 2) {
            name = "Non Veg Plate Thali";
            price = 260;
            description = "A Full meal Thali Served with 4 Rotis and Jeera Rice alongside With salad, Chicken, Dal, papad";
        } else if (choice == 3) {
            name = "Special Veg Thali";
            price = 280;
            description = "A Full meal Thali Served with 4 Rotis and Jeera Rice alongside "
            "With salad, 2 paneer sabzi, veg mix, Dal,papad";
        } else if (choice == 4) {
            name = "Special Non Veg Thali";
            price = 300;
            description = "A Full meal Thali Served with 4 Rotis and Jeera Rice alongside"
            "With salad, 2 Chicken sabzis, Mutton, Dal, papad";
        }
    }
};


void foodMenu() {
    int price = 0;
    string pay, id, y;
    Dessert des;
    Appetizer app;
    MainCourse mncr;
    int i = 1;
    vector<string> l;
    while (true) {
        cout << "\nWELCOME TO FOOD ORDERING SECTION\n\nWHAT IS IT THAT YOU'D LIKE TO ORDER?";
        cout << "\n1. Dessert\n2. Appetizer\n3. Main Course\n";
        int choice;
        cin >> choice;

        if (choice > 3 || choice < 1) {
        continue;
        }
        if (choice == 1) {
        cout << "\n DESSERT \n";
        int dc = des.showMenu();
        des.cart(dc);
        } else if (choice == 2) {
        cout << "\n APPETIZER \n";
        int ac = app.showMenu();
        app.cart(ac);
        } else if (choice == 3) {
            cout << "\n MAIN MENU \n";
        int mc = mncr.showMenu();
        mncr.cart(mc);
        }
        if (choice == 1) {
        cout << "\n\nYour Item : ";
        cout << "\n " << des.name << " for INR " <<
        des.price << "\n " << des.description << endl;
        l.push_back(des.name + " for INR " +
        to_string(des.price) + " " + des.description);
        price += des.price;
        } else if (choice == 2) {
        cout << "Your Item : ";
        cout << "\n " << app.name << " for INR " <<
        app.price << "\n " << app.description << endl;
        l.push_back(app.name + " for INR " +
        to_string(app.price) + " " + app.description);
        price += app.price;
        } else if (choice == 3) {
        cout << "Your Item : \n\n " << mncr.name << " for INR " << mncr.price << "\n " << mncr.description <<
        endl;
        l.push_back(mncr.name + " for INR " +
        to_string(mncr.price) + " " + mncr.description);
        price += mncr.price;
        }
        cout << "\n\nWant to order any other food? (y/n)";
        cin >> y;
        if (y[0] != 'Y' && y[0] != 'y') {
            cout << "\n\nEAT WELL :)\nYOUR BILL : \n\n\n";
            int a = 1;
            for (const auto &item : l) {
            cout << a << " : " << item << endl;
            a++;
            }
            cout << "\nTotal Bill = INR " << price + (price * 0.18)
            << " + (TAX) " << price * 0.18 << endl;
            cout << "\nGRAND TOTAL = INR " << price + (price *
            0.18) << endl;
            cout << "\nHow would you like to pay? (Online/Cash)";
            cin >> pay;
            if (pay == "ONLINE" || pay == "CASH") {
            if (pay == "ONLINE") {
            cout << "\nEnter Upi id : ";
            cin >> id;
            cout << "\nSent the request to pay " << price +
            (price * 0.18) << " to your upi id " << id << endl;
            } else {
            cout << "\nPlease pay " << price + (price *
            0.18) << " with the cash With Change......Thank you :)" << endl;
            }
            }
            cout << "\nTHANK YOU FOR CHOOSING OUR TREAT. HAVE A GREAT DINE :)" << endl;
            break;
        }
    }
}
int main() {
foodMenu();
return 0;
}