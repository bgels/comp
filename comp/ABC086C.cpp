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

    int N;
    cin >> N;
    int x{0};
    int y{0};
    int time{0};
    bool ok = true;

    for(int i =0; i<N; i++){
        int t, a, b;
        cin >> t >> a >> b;

        int distance = abs(x - a) + abs(y - b);
        int tdiff = abs(t - time);

        if(tdiff >= distance && (abs(tdiff - distance)%2 == 0)){
            x = a; 
            y = b;
            time = t;
        }else{
            ok = false;
        }
    }
    if(ok){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    

    return 0;
 }