#include <iostream>

using namespace std;

bool ehPrimo(int n){
    if(n < 2){
        return false;
    }else{
        for(int i = 2 ; i * i <= n ; i++){
            if(n % i == 0){
                return false;
            
        }
    }
        return true;
}
