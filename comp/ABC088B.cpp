#pragma once
#include <iostream> 
#include <string>
#include <array>
#include <vector>
#include <algorithm>
using std::cout, std::endl, std::cin, std::array, std::vector, std::sort;


int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> myVec;

    for(int i =0;i<n;i++){
        int a;
        cin>>a;
        myVec.push_back(a);
    }

    sort(myVec.rbegin(), myVec.rend());

    int a = 0;
    int b = 0;
    for(int i =0; i<myVec.size();i++){
        if(i%2 == 0){
            a+= myVec[i];
        }else{
            b+= myVec[i];
        }
    }

    cout << a - b << endl;



    return 0;
 }  