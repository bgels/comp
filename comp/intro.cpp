#pragma once
#include <iostream> 
#include <string>
using std::cout, std::endl, std::cin;

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    std::string ret;
    cin >> ret;
    cout << a + b + c << " " << ret << endl;
    return 0;
 }