 #include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;
    cout << "ENTRE COM O OPERADOR: +, -, *, /: ";
    cin >> op;
    cout << "ENTRE COM DOIS VALORES: ";
    cin >> num1 >> num2;
    
    switch(op) {
        case '+':
          cout << num1 << '+' << '=' << num1 + num2;
          break;
        case '-':
          cout << num1 << '-' << '=' << num1 - num2;
          break;
        case '*':
          cout << num1 << '*' << '=' << num1 * num2;
          break;
        case '/':
          cout << num1 << '/' << '=' << num1 / num2;
          break;
        default:
          cout << "OPERADOR ERRADO, ENTRE COM O CORRETO";
          break;
       }
       return 0;
}