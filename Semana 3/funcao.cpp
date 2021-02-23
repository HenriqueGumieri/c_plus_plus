// Função para somar dois valores passados como argumentos.

#include <iostream>

using namespace std;

float soma(float fX, float fY);  // protótipo da função com tipo e nome

int main()
{
    float fA,fB,fC,fD;
    char cOp;
    while(true){
        cout << "Entre com o valor de A: ";
        cin >> fA;
        cout << "Entre com o valor de B: ";
        cin >> fB;
        fC = soma(fA,fB);
        fD = soma(2*fA,3*fB);
        cout << "Soma A + B = " << fC << endl;
        cout << "Soma 2A + 3B = " << fD << endl;
        cout << "Soma 4A + 5B = " << soma(4*fA,5*fB) << endl;
        cout << "\nDeseja continuar? ";
        cin >> cOp;
        cout << endl;
        if(cOp != 's' && cOp != 'S'){
            break;
        }
    }
    return 0;
}
float soma(float fX, float fY){  // função para somar dois números
    return fX + fY;
}
