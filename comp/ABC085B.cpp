#pragma once
#include <iostream> 
#include <string>
#include <array>
#include <vector>
#include <algorithm>
using std::cout, std::endl, std::cin, std::array, std::vector;

// Kagami Mochi
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<int> myArr;
    for(int i =0; i<N; i++){
        int a;
        cin >> a;
        myArr.push_back(a);
    }
    sort(myArr.rbegin(), myArr.rend());
    int counter{1};
    int biggest{myArr[0]};

    for(int i =1; i<myArr.size();i++){
        if(myArr[i] < biggest){
            counter++;
            biggest = myArr[i];
        }
    }
    cout << counter;
    return 0;
 }

