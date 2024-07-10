#pragma once
#include <iostream> 
#include <string>
using std::cout, std::endl, std::cin;


int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin >> a >> b;
    a = a * b;
    if(a%2 == 0){
        cout << "Even" << endl;
    }else{
        cout << "Odd" << endl;
    }
    return 0;
 }