#include <iostream>

using namespace std;

float fCalcAreaRet(float fB,float fH);

float fArea2x = 0;  // VARI�VEL GLOBAL: visibilidade em todo o programa

int main()
{
    // C�lculo da �rea de um ret�ngulo
    float fBase,fAltura,fAreaL;  // VARI�VEIS LOCAIS: visibilidade no bloco main()
    for (int iCont = 1; iCont <= 3; iCont++){  // iCont � um PAR�METRO FORMAL: comporta-se com var�vel local dentro do bloco de repeti��o for
        cout << "CALCULO DA AREA DO RETANGULO " << iCont << endl;
        cout << "\nEntre com o valor da base: ";
        cin >> fBase;
        cout << "Entre com o valor da altura: ";
        cin >> fAltura;
        cout << "Variavel global antes da chamada da funcao de area = " << fArea2x << endl;
        fAreaL = fCalcAreaRet(fBase,fAltura);
        cout << "Valor da area do retangulo = " << fAreaL << endl;
        cout << "Variavel global apos a chamada da funcao de area = " << fArea2x << endl;
        cout << "==============================================================" << endl;
    }
    return 0;
}

float fCalcAreaRet(float fB,float fH){  // fun��o que calcula a �rea do ret�ngulo com PAR�METROS FORMAIS: var�veis locais dentro da fun��o
    float fA = fB * fH;
    static int iContFunc = 0;  // VARI�VEL EST�TICA: inicializadas apenas na primeira chamada da fun��o
    fArea2x = 2 * fA;
    iContFunc++;
    cout << "Valor da variavel estatica = " << iContFunc << endl;
    return fA;
}
