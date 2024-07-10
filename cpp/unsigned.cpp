#include <iostream> 


int main(){
    unsigned int cool{0}; //unsigned assignment means no negative numbers, 0 will therefore be the lower extreme. bound to overflow
    cool -= 2;
    std::cout << cool;
 return 0;
 }