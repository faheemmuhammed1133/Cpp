#include<iostream>
// program to print natural numbers.
int main(){
    int x,i=1;
     std::cout<<"enter a num";
        std::cin>>x;
    do{

       std::cout<<i<<std::endl;
       i++;
    }while(i<=x);
}