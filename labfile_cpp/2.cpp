// power

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
float n , pow ;
double sum = 1;
cout<<"Enter the number : ";
cin>>n;
cout<<"\nEnter the power of the number : ";
cin>>pow;
int itr = (pow < 0)? -pow:pow;
for(int i = 1 ; i <=itr; i++){
sum *= n;
}
if(pow<0){
    if(n < 0 ){
cout<<"\n"<<n<<" to the power of "<<pow<<" is [-1/"<<sum<<"]"<<" = "<<fixed<<setprecision(4)<<-(1/sum)<<"\n";
}
else {
cout<<"\n"<<n<<" to the power of "<<pow<<" is [-1/"<<sum<<"]"<<" = "<<fixed<<setprecision(4)<<(1/sum)<<"\n";
}
return 0;
}
else if(pow == 0)
{
cout<<"\n"<<n<<" to the power of "<<pow<<" is [1]";
}
else
{
cout<<"\n"<<n<<" to the power of "<<pow<<" is ["<<sum<<"]\n";
}
return 0;
}

