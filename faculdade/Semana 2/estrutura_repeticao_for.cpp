#include <iostream>

using namespace std;

int main()
{
    int iContador,iLimite;  // par�metros da instru��o 'for' - Quantidade de ciclos previamente definida (uma somat�ria, por exemplo)
    cout << "Entre com a quantidade de ciclos: ";
    cin >> iLimite;  // quantidade de ciclos de repeti��o do programa
    for (iContador = 1;iContador <= iLimite;iContador++){  // (condi��o inicial;condi��o de finaliza��o do ciclo;incrementa��o de uma unidade a cada ciclo)
        cout << "Linha " << iContador << endl;
        if (iContador>50){
            break;  // sa�da for�ada do 'for' caso o contador ultrapasse 50 ciclos
        }
    }
    return 0;
}
