#include <iostream>
using namespace std;

float soma(float fX, float fY);  // fun��o float com dois par�metros
float soma(float fX, float fY, float fZ);  // fun��o float com tr�s par�metros
void soma();  // fun��o void com retorno vazio

int main()
{
    float fA,fB,fC,fS;
    int iA,iB,iC;
    cout << "Entre com o valor de A: ";
    cin >> fA;
    cout << "Entre com o valor de B: ";
    cin >> fB;
    cout << "Entre com o valor de C: ";
    cin >> fC;
    fS = soma(fA,fB);
    cout << "A + B = " << fS << endl;
    fS = soma(fA,fB,fC);
    cout << "A + B + C = " << fS << endl;
    soma();
    return 0;
}

float soma(float fX, float fY){
    return fX + fY;
}

float soma(float fX, float fY, float fZ){
    return fX + fY + fZ;
}

void soma(){
    cout << "Funcao sem parametros" << endl;
}
