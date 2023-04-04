#include <iostream>
using namespace std;

int main () {
    float raio, area;
    const float PI = 3.14159;
    
    cout << "Digite o raio do circulo: ";
    cin >> raio;
    
    area = PI * raio * raio;
    
    cout << "A area do circulo eh: " << area << endl;
    
    return 0;
}