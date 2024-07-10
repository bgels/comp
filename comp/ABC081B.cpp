#pragma once
#include <iostream> 
#include <string>
#include <array>
#include <vector>
using std::cout, std::endl, std::cin, std::array, std::vector;

// Shift only
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a;
    cin >> a;
    
    vector<int> myArr;
    for(int i =0; i<a; i++){
        int x;
        cin>>x;
        myArr.emplace_back(x);
    }
    int counter = 0;
    bool odd = false;

    while(!odd){
        for(int i =0; i<myArr.size(); i++){
            if(myArr[i]%2 != 0){
                odd = true;
                break;
            }
        }
        if(odd == true){break;}
        counter++;
        for(int i =0; i<myArr.size(); i++){
            myArr[i] = myArr[i]/2;
            
        }
    }

    cout << counter << endl;


    return 0;
 }