#include <iostream>
#include <iomanip>

using namespace std; 

int main(){
    double n1;
    double n2;
    double n3;

    cout << "Digite o primeiro número: " ;
    cin >> n1 ;


    cout << "Digite o segundo número: " ;
    cin >> n2 ;

    cout << "Digite o terceiro número: " ;
    cin >> n3 ;


    double media = (n1 + n2 + n3)/3.0;

    cout << fixed << setprecision(2);

    cout << "A média aritmética é: " << media << endl; 


    return 0;
}