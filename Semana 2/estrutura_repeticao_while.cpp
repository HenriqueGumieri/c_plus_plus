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

/* Quantidade de ciclos indefinida at� que se forne�a o
n�mero correto (sa�da for�ada) ou um n�mero maior ou igual a 100,
tornando a instru��o falsa. */
