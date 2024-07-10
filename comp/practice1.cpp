#pragma once
#include <iostream> 
#include <string>
#include <array>
#include <vector>
#include <algorithm>
using std::cout, std::endl, std::cin, std::array, std::vector, std::string, std::reverse;


int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    string S;
    cin >> S;
    
    
    string myArr[4] = {"light", "moon", "star", "night"};


    int i = S.size();
    bool ok = true;

    while(i > 0 && ok){
        ok = false;
        for(const auto& x: myArr){
            string rev = x;
            std::reverse(rev.begin(), rev.end());
            if(i >= x.size() && (S.substr(i - x.size(), x.size()) == x || S.substr(i - x.size(), x.size()) == rev)){
                ok = true;
                i = i - x.size();

            }
        }
    }

    if(i == 0 && ok){
        cout << "YES" << endl;

    }else{
        cout << "NO" << endl;
    }



    return 0;
 }