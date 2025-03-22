#include <iostream> 

using namespace std;


int main(){

    int numero;
    int i = 1;

    cout << "Digite o número: " << endl;
    cin >> numero;

    while(i <= 10){
        cout << numero << " x " << i << " = " << numero * i << endl;
        i++;
    }

    return 0;
}