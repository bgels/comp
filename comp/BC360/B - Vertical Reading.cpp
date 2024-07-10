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

    string S, T;
    cin >> S, T;
    size_t w = S.find_first_of(T[0]);
    if(S == T){
        cout << "Yes";
    }



    return 0;
 }