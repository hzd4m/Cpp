#include <iostream> 

using namespace std;

int soma(int a , int b){
    return a + b;
}

int multiplica(int a, int b){
    return a * b;
}

int main(){
    int(*f)(int,int);

    int x = 451 , y = 127;

    f = soma;

    cout << "Soma: " << f(x,y) << endl; 


    f = multiplica;
    cout << "Multiplicação: " << f(x,y) << endl; 

    return 0;
}