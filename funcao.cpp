#include <iostream>
using namespace std;

int soma (int a, int b) {
    int Resultado1;
    Resultado1 = a + b;
    return Resultado1;
}
int sub (int a, int b) {
    int Resultado2;
    Resultado2 = a - b;
    return Resultado2;
}
int mult (int a, int b) {
    int Resultado3;
    Resultado3 = a * b;
    return Resultado3;
}
int divi (int a, int b) {
    int Resultado4;
    Resultado4 = a / b;
    return Resultado4;
}
   
   int main () {
       cout << soma (30,5) << endl;
       cout << sub (30,5) << endl;
       cout << mult (30,5) << endl;
       cout << divi (30,5) << endl;
   } 