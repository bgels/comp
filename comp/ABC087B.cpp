#pragma once
#include <iostream> 
#include <string>
#include <array>
#include <vector>
using std::cout, std::endl, std::cin, std::array, std::vector;


int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, x;
    cin >> a >> b >> c >> x;
    int counter = 0;

    for(int i =0;i<=a;i++){
        for(int j=0;j<=b;j++){
            for(int k = 0; k<= c; k++){
                if( (i* 500) + (j * 100) + (k * 50) == x){
                    counter++;
                }
            }
        }
    }

    cout << counter <<endl;

    return 0;
 }