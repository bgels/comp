#include <iostream> 

int health{100};
void nothing(){
    std::cout<<"This doesn't return anything";
}

bool something(){
    return true;
}

std::string everything(){
    std::cout<<"This will affect the health variable and return something\n";
    health -= 50;
    return "50 HP lost";
}

int main(){
    nothing();
    std::cout << std::endl;
    std::cout << something();
    std::cout << std::endl;
    std::cout << everything() << std::endl << health;
    

 return 0;
 }