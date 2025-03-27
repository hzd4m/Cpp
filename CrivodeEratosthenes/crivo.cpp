//Iremos desenvolver o Crivo de Eratosthenes dos primeiros 3.500.000 números inteiros
#include <iostream>
#include <vector>

using namespace std;

const int N = 3500000;

int main(){
    //Consideremos valor 0 para números não primos e valor 1 para os primos.
    //Setar ,inicialmente, todos os índices como primo menos os números x[0] e x[1].
    
    vector<int> x(N+1,1);
    x[0] = 0;
    x[1] = 1;

    for(int i = 2 ; i * i <= N ; i++){
        if(x[i] == 1){
            for(int j = i * i ; j <= N ; j+=i){ //Para todo número multiplo do índice setaremos 0 (NÃO PRIMO)
                x[j] = 0;

        }

        
    }

    for(int i = 2; i <=N ; i++){
        if(x[i] == 1){
            cout << i << " ";
        }
        
    
    }
    return 0;
    


}