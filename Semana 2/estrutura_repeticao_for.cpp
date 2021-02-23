#include <iostream>

using namespace std;

int main()
{
    int iContador,iLimite;  // parâmetros da instrução 'for' - Quantidade de ciclos previamente definida (uma somatória, por exemplo)
    cout << "Entre com a quantidade de ciclos: ";
    cin >> iLimite;  // quantidade de ciclos de repetição do programa
    for (iContador = 1;iContador <= iLimite;iContador++){  // (condição inicial;condição de finalização do ciclo;incrementação de uma unidade a cada ciclo)
        cout << "Linha " << iContador << endl;
        if (iContador>50){
            break;  // saída forçada do 'for' caso o contador ultrapasse 50 ciclos
        }
    }
    return 0;
}
