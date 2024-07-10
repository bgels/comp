#pragma once
#include <iostream> 
#include <string>
#include <array>
#include <vector>
using std::cout, std::endl, std::cin, std::array, std::vector;

/*Find the sum of the integers between 
1 and 
N (inclusive), whose sum of digits written in base 
10 is between 
A and 
B (inclusive).
*/
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b;
    cin >> n >> a >> b;

    int ret = 0;

    for(int i =1; i<= n; i++){
        if(i < 10){
            if(i>= a && i<= b){
                ret+= i;
            }
        }else{
            int temp = 0;
            int c = i;
            while(c > 0){   
                temp+= c%10;
                c = c/10;
            }
            if(temp>= a && temp<= b){
                ret+= i;
            }
        }
    }

    cout << ret;



    return 0;
 }