#include <iostream> 


class pizza{
    private:
    std::string pizzaType{"Ham"};
    int pizzaToppings{4};
    public:
    void addToppings(int x){
        pizzaToppings+= x;
    }
    void removeToppings(int x){
        pizzaToppings -= x;
        if (pizzaToppings < 0){
            pizzaToppings = 0;
        }
    }
    std::string pizzaTyped(){
        return pizzaType;
    }
    int pizzaToppingsz(){
        return pizzaToppings;
    }
};


struct vector3{
    float x;
    float y;
    float z;
};

vector3 operator+(vector3& a, vector3& b){
    return vector3{(a.x + b.x), (a.y + b.y), (a.z + b.z)};
    
}
vector3 operator*(int num, vector3& vec){
    return vector3{(num * vec.x), (num * vec.y), (num * vec.z)};
}
vector3 operator*(vector3& vec, int num){
    return num * vec;
}
int main(){
    pizza newPizza;
    std::cout << newPizza.pizzaTyped() << std::endl;
    newPizza.addToppings(3);
    std::cout << newPizza.pizzaToppingsz() << std::endl;
    newPizza.removeToppings(2);
    std::cout << newPizza.pizzaToppingsz() << std::endl;
    vector3 pos{1.2, 4.2, 5.3};
    vector3 enemyPos{3.2, 4.2, 1.3};
    vector3 totalPos{pos + enemyPos};
    std::cout << totalPos.x << std::endl << totalPos.y << std::endl << totalPos.z << std::endl;
    vector3 multiPos{3 * pos};
    auto[x1,y1,z1] = multiPos;
    std::cout << x1 << std::endl << y1 << std::endl << z1 << std::endl;
    vector3 multiPos2{pos * 3};
    auto[x2,y2,z2] = multiPos2;
    std::cout << x2 << std::endl << y2 << std::endl << z2 << std::endl;

 return 0;
 }