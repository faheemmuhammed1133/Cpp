// length of string without using length function
#include<iostream>
#include<string>
int main(){
    std::string x;
    std::cout<<"Please provide a string so that we can check its length \n";
    getline(std::cin,x);
    // condition to count number of letters by  itterating through the each and 
    //every character until it encounter a null character.
    int i;
    for(i=0;i<x[i]!='\0';i++){
    }
    std::cout<<"length of the entered string is "<<i<<"\n";
    return 0;
    }