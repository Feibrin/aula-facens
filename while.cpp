#include <iostream>
using namespace std;

int main () {
    int num;
    
    do {
        cout << "DIGITE UM NUMERO ENTTRE 1 A 10: ";
        cin >> num;
    } while (num < 1 || num > 10);
    
    cout << "VOCE DIGITOU O NUMERO " << num << ".";
    
    return 0;
}