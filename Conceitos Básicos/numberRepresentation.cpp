//Programa para exibir números em formato científico e formato "normal"
#include <iostream> 
#include <iomanip> 


using namespace std;

int main(){
    double n; 

    cout << "Digite um número 'quebrado'" << endl;
    cin >> n; 


    cout << fixed << setprecision(2);
    cout << "Formato decimal normal: " << n << endl;

    cout << scientific << setprecision(2);
    cout << "Formato científico: " << n << endl; 

    return 0;
}