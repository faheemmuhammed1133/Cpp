/*// call by reference
#include<iostream>
using namespace std;
int add(int &a, int &b){
int z=a+b;
return z;
}
int main() {
int x,y;
cout<<"enter values for x and y ";
cin>>x>>y;
int sum=add(x,y);
cout<<sum<<endl;
return 0;
}*/

/*// call by pointer
#include <iostream>
using namespace std;
int add(int *a, int *b){
    int z=*a+*b;
    return z;
}
int main(){
    int x,y;
    cout<<"enter values for a and b ";
    cin>>x>>y;
    int sum =add(&x,&y);
    cout<<"sum is "<<sum;
    return 0;
}*/

// swapping
/*#include <iostream>
using namespace std;
int main(){
    int x,y,S;
    cout<<"enter values for a and b ";
    cin>>x>>y;
    S=x;
    x=y;
    y=S;
    cout<<"After swapping a is "<<x <<" and b is " <<y<<endl;
    return 0;
}*/
//pointers
#include <iostream>
using namespace std;

void add(int *k){
    *k=*k+10;
    cout<<endl<<*k<<endl;
    // return k;
}
int main(){
    int n=5;
    cout<<n<<endl;
    add(&n);
    cout<<"d "<<n<<endl;
}