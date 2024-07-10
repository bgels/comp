#pragma once
#include <iostream> 
#include <string>
#include <array>
#include <vector>
#include <algorithm>
using std::cout, std::endl, std::cin, std::array, std::vector, std::string;


int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    string a;
    cin >> a;
    size_t x = a.find_first_of('R');
    size_t y = a.find_first_of('M');

    if(y > x){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
 }