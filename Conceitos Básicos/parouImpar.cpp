#include <iostream>


using namespace std ;

int main(){

    int x;

    cout << "Digite um número: " << endl;
    cin >> x;

    if(x % 2 == 0 ){
        cout << "Esse número é par." << endl;
    }else{
        cout<< "Esse número é ímpar." << endl;
    }
}