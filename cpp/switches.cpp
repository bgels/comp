#include <iostream> 

int target{2};

int main(){
    switch(target){
        case 1:
            std::cout<<"1, Ok.\n";
            break;
        case 2:
            std::cout<<"2, Ok.\n";
        case 3:
            std::cout<<"3, Ok. \n";
        default:
            std::cout<<"Fallback, Ok.\n";
    }
 }