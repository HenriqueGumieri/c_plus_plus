#include <iostream>

using namespace std;

float fCalcAreaRet(float fB,float fH);

float fArea2x = 0;  // VARIÁVEL GLOBAL: visibilidade em todo o programa

int main()
{
    // Cálculo da área de um retângulo
    float fBase,fAltura,fAreaL;  // VARIÁVEIS LOCAIS: visibilidade no bloco main()
    for (int iCont = 1; iCont <= 3; iCont++){  // iCont é um PARÂMETRO FORMAL: comporta-se com varável local dentro do bloco de repetição for
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

float fCalcAreaRet(float fB,float fH){  // função que calcula a área do retângulo com PARÂMETROS FORMAIS: varáveis locais dentro da função
    float fA = fB * fH;
    static int iContFunc = 0;  // VARIÁVEL ESTÁTICA: inicializadas apenas na primeira chamada da função
    fArea2x = 2 * fA;
    iContFunc++;
    cout << "Valor da variavel estatica = " << iContFunc << endl;
    return fA;
}
