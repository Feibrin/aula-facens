#include <iostream>
using namespace std;

int main () {
    int num;
    
    cout << "DIGITE UM NUMERO INTEIRO POSITIVO: ";
    cin >> num;
    
    cout << "Os primeiros " << num << " numeros pares sao: ";
    
    for (int i = 2; i <= num * 2; i += 2) {
        cout << i << " ";
    }
    
    return 0; 
}