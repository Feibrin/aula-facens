#include <iostream>
#include <cmath> 
using namespace std;

int main () {
    float cateto1, cateto2, hipotenusa;
    
    cout << "Digite o comprimento do cateto1: ";
    cin >> cateto1;
    cout << "Digite o comprimento do cateto2: ";
    cin >> cateto2;
    
    hipotenusa = sqrt (pow(cateto1, 2) + pow(cateto2, 2));
    
    cout << "O comprimento da hipotenusa eh: " << hipotenusa << endl;
    
    return 0;
}
