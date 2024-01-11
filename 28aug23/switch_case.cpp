#include<iostream>
int main(){
    int x;
    
    std::cout<<" choose a value from 1-7 ";
    std::cin>>x;
    switch(x){
        case 1:
        std::cout<<"sunday\n";
        break;

        case 2:
        std::cout<<"monday\n";
        break;

        case 3:
        std::cout<<"tuesday\n";
        break;

        case 4:
        std::cout<<"wednessday\n";
        break;

        case 5:
        std::cout<<"thursday\n";
        break;

        case 6:
        std::cout<<"friday\n";
        break;

        case 7:
        std::cout<<"satuurday\n";
        break;

        default:
        std::cout<<"\tinvalid option \n";
    }
}