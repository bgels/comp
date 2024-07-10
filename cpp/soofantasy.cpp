#include <iostream> 

bool isAlive {true};
int level{5};
std::string name{"Goblin Warrior"};
float armor{.4};
int health{100};

void takeDmg(int, bool);

int main(){
    std::cout << health << "\n";
    takeDmg(43, true);
    std::cout << health;
    return 69;
 }

 void takeDmg(int dmg = 50, bool burn = false){
    health-= dmg;
    if (burn){
        health -= 5;
    }
    
}