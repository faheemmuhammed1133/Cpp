// lcm  usig nested loop.
#include<iostream>
using namespace std;
int main(){
    int n,lcm=0;
    // cout<<"enter no of elements you wanna find out lcm of ";
    // cin>>n;
    int array[3];
       for(int i=0;i<3;i++){
        cout<<"enter "<<i+1<<" th element of array ";
        cin >>array[i] ;
        if(array[i]>lcm){
            lcm = array[i];
        }

       }
       while (true)
       {int i;
        for( i=0;i<3;i++){
        if(lcm%array[i]==0){
            break;
       } 
        }
        if(i==3){
            break;
        }lcm++;
       }
       cout<< "LCM is :"<<lcm-1;
       return 0;
       }
       
       
      


/*#include<iostream>
using namespace std;
// lcm
int main() {
    int n1, n2,lcm;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    int num1=n1,num2=n2;
    // ensure natural numbers
    if (n1 > 0 && n2 > 0) {
    //  for (lcm = maxNum; ; lcm += maxNum) {
    //  if  (lcm % n1 12== 0 && lcm % n2 == 0) {
         while (n2 != 0) {
        int temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    };
    cout<<n1;
    lcm=(num1*num2)/n1;
        cout << "The LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;
       
    // }}
    }else {
           cout << "   make sure to enter natural numbers only" << endl;
        return 1; // return f(x) again
    }
   return 0;
}
*/
