// palindrome

#include <iostream>
using namespace std;
int main(){
string n;
int len , a = 0;
cout<<"Enter the string : \n";
cin>>n;
len = n.length();
for(int i = 0 ; i < len/2 ; i++){
if(n[i] == n[len-i-1]){
a++;
}
}
if(a == len/2){
cout<<"\n"<<n<<" is palindrome";
}
else
{
cout<<"\n"<<n<<" is not palindrome";
}
return 0;
}