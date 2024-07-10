#include <iostream> 

int health{160};
bool isDead{false};

void takeDamage() {
    health-= 150;

    health <= 0 ? isDead = true : health += 69; // ternary statments, structure kinda like list comprehension from python lol
    // if (health <= 0) { //regular if statments
    //     isDead = true;
    //     health = 0;
    //     std::cout << "Dead!\n";
    // } else{
    //     health += 69;
    // }

}

int main(){
    std::cout << health << std::endl;
    takeDamage();
    std::cout << health << std::endl << isDead;

 return 0;
 }