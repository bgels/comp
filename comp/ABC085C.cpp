#pragma once
#include <iostream> 
#include <string>
#include <array>
#include <vector>
#include <algorithm>
using std::cout, std::endl, std::cin, std::array, std::vector;


int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    int x{-1};
    int y{-1};
    int z{-1};
    

    for(int i = 0; i <= a; i++){
        for(int j = 0; j <= a - i; j++){
            int k = a - j - i;
            if((i * 10000) + (j * 5000) + (k * 1000) == b && i + j + k == a){
                    x = i;
                    y = j;
                    z = k;
            }
        }
    }
    cout << x << " " << y << " " << z << " " << endl;

    return 0;
 }