/*4. Design a program to simulate a simple online shop. Create a class
Product with attributes like name, price, and quantity in stock. Implement
methods for adding products to the shopping cart, calculating the total
cost, and displaying the contents of the cart.*/
#include<iostream>
using namespace std;
class Product{
    private:
    string pname[20];
    float cost_perunit[20],sum;
    // static float sum;
    int qtyinstock[20],count;
    
    public:
    
    
void addItem(int n){
    sum=0;
    count=0;
    if(count<n){
        for (int i=0;i<n;i++){
            //storing it into array
        cout<<"Enter product name "<<i+1<<" : ";
        cin>>pname[i];
        cout<<"Enter cost of unit: ";
        cin>> cost_perunit[i];
        cout<<"Enter Quantity needed: ";
        cin >> qtyinstock[i];   
                
            cout<<"\nAdded " <<qtyinstock[i]<<" "<< pname[i] << " to your cart.\n" << endl;
            count++;
        }
        } else {
            cout<<"you have already added "<<n<<" products!" << endl;
        }
}
float calcTotalCost(){
    cout<<"Product    :   qty       :price \n";
        for (int i=0 ;i<count;i++){
        cout<<pname[i]<<"  : "<<qtyinstock[i]<<"       : ₹"<<cost_perunit[i] *float(qtyinstock[i])<<endl;
        sum += (cost_perunit[i] * qtyinstock[i]) ;

        }
    return sum;
}
};
// float Product::sum=0;
int main() {
    int n=0,x;
    main:
    cout<<"how many products you wanna add into cart (cart capacity is max 20) ";
    cin>>x;
    n=n+x;
    if(n>=20){
        cout<<"Sorry! Cart has reached its maximum limit. Please remove some items before adding more."<<endl;
    }
    string yes;

    Product p1;
    
    p1.addItem(n);
    cout<<"dp you want to add more products ";
    cin>>yes;
    if(yes=="yes"){
        goto main;
    }
    
    float total=p1.calcTotalCost();
    cout<<"sum of total products is : ₹"<<total<<endl;
  
}