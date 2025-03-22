#include <iostream>

using namespace std;

int main(){

    int l;
    int h;
    int p;

    cout << "Digite o valor da largura: " << endl;
    cin >> l;

    cout << "Digite o valor da altura: " << endl;
    cin >> h;

    p = 2* (l + h);

    cout << "O perímetro do retângulo é " << p << endl;
}