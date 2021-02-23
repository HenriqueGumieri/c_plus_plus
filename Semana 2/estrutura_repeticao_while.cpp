#include <iostream>

using namespace std;

int main()
{
    int iNumero = 0;
    while (iNumero < 100){
        cout << "Entre com um numero menor que 100: ";
        cin >> iNumero;
        cout << "Voce digitou " << iNumero << endl;
        if(iNumero == 50){
            cout << "Bingo! Voce acertou!" << endl;
            break;
        }
    }
    return 0;
}

/* Quantidade de ciclos indefinida até que se forneça o
número correto (saída forçada) ou um número maior ou igual a 100,
tornando a instrução falsa. */
