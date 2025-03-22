#include <iostream> 

using namespace std; 


int main(){

    int n;

    cout << "Digite o valor da sua idade: " << endl;
    cin >> n;

    if (n >= 18){
        cout << "Você é maior de idade." << endl;

    }else{
        cout << "Você não é maior de idade." << endl;
    }
}