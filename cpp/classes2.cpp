#pragma once
#include <iostream>
#include <string>
using std::cout, std::endl, std::cin;

class slimeMonster{
public: // Constructors should be public
    slimeMonster():
    health{100.0f}, attack{10}, slimeName{"Rimuru"}
    {
        cout << "Slime monster created. \n";
    }
    slimeMonster(float hp, int atk, std::string name): health{hp}, attack{atk}, slimeName{name}
    {
        cout << "Parameterized slime monster created. \n";
    }
    void printAtk(){
        cout << attack;
    }
    void printHp(){
        cout << health;
    }
    void updateHealth(float x){
        if(health >= 0){
            health = x;}
        else{
            cout << slimeName << ":slimeMonster, Health update failed! Invalid value (<0)";
        }
    }
    void updateAttack(int x){
        attack = x;
    }
private:
    float health;
    int attack;
public:
    std::string slimeName;

}; // Semicolon after class definition and structs always

struct Vector2{

    Vector2(float xCor, float yCor):
    x{xCor}, y{yCor}{}
    Vector2():
    x{1.0f}, y{1.0f}{cout << "Vector2: Initiated with default values\n";}
    float x;
    float y;
};

int main(){
    Vector2 location{1.2f, 1.2f};
    auto[x,y]{location};
    cout << x << endl << y << endl;
    slimeMonster carl{};
    slimeMonster jim{100.23f, 50, "jim"};
    carl.printAtk();
    carl.updateAttack(0);
    cout << endl;
    carl.printAtk();
    cout << endl;
    carl.printHp();
    cout << endl;
    carl.updateHealth(0);
    carl.printHp();



    return 0;
}