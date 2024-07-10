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

    string x;
    cin >> x;
    bool ok = true;
    int i = x.size();
    
    string myArr[4] = {"dream", "dreamer", "erase", "eraser"};

    while(i > 0 && ok){
        ok = false;
        for(const auto& y: myArr){
            if(i >= y.size() && x.substr(i - y.size(), y.size()) == y){
                ok = true;
                i = i - y.size();
            }
        }

    }
    if(ok && i == 0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }


    return 0;
 }