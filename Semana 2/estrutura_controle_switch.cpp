#include <iostream>

using namespace std;

int main()
{
    char cOp;
    float fA,fB,fC;  // definição de variável do tipo float (ponto flutuante, casas decimais)
    cout << "Entre com o valor de A: ";
    cin >> fA;
    cout << "Entre com o valor de B: ";
    cin >> fB;
    cout << "Digite + para A+B, - para A-B, / para A/B e * para A*B: ";
    cin >> cOp;
    switch (cOp){
        case '+':
            fC = fA + fB;
            cout << "A + B = " << fC << endl;
            break;
         case '-':
            fC = fA - fB;
            cout << "A - B = " << fC << endl;
            break;
         case '/':
            fC = fA / fB;
            cout << "A / B = " << fC << endl;
            break;
         case '*':
            fC = fA * fB;
            cout << "A * B = " << fC << endl;
            break;
         default:
            cout << "Operacao desconhecida!" << endl;
            break;
    }
    return 0;
}
