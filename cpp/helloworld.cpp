#include <iostream>
using namespace std;

double Health { 2.53 };
bool isDead { false };

int main()
{
  Health -= 10;
  isDead = Health <= 0;
  std::cout << Health << std::endl;

  Health -= 10;
  std::cout << Health << std::endl;
  int tempHealth{static_cast<int>(Health)};
  std::cout << tempHealth << std::endl;
  Health = static_cast<int>(Health);
  std::cout << Health << std::endl;
  isDead = Health <= 0;
}

