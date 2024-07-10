#pragma once
#include <iostream> 
#include <string>
using std::cout, std::endl, std::cin;


int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b = 0;
    cin >> a;
    while(a>0){
        b+= a%10;
        a = a/10;
    }
    cout << b << endl;
    return 0;
 }