/*
1. Crie uma constante com o valor de e = 2.71828183;
2. Criar um ciclo de repetição para resolver a equação de Lambert por quantas
vezes o usuário desejar;
3. Permitir a entrada de um número real;
4. Verificar se o número digitado satisfaz a restrição de |𝑥| < 1/e
5. Caso satisfaça a condição dada, calcular o valor de Wo(x);
6. Caso contrário, emitir uma mensagem informando que o cálculo não será
possível;
7. Verificar se o usuário deseja efetuar novos cálculos;
8. Para o caso afirmativo, promover novo ciclo;
9. Para o caso negativo, encerrar o processo.
*/

#include <iostream>
#include <cmath>
#define e 2.71828183

using namespace std;

int fatorial(int iF);

int main()
{
    int iContador,iLimite = 12;
    float fX,fWo,somatoria;
    char cOp;
    while(true){
        cout << "Entre com o valor de X: ";
        cin >> fX;
        if (abs(fX) < 1/e){
            for(iContador = 1;iContador <= iLimite;iContador++){
                fWo = fWo + ((pow(-iContador,iContador-1)/fatorial(iContador))*pow(fX,iContador));
            }cout << "\nO valor de Wo(x) = " << fWo << endl;
        } else {
            cout << "\nO calculo nao sera possivel." << endl;
        }
        fWo = 0;
        cout << "\nDeseja continuar? Caso queira, digite 's': ";
        cin >> cOp;
        cout << endl;
        if(cOp != 's' && cOp != 'S'){
            break;
        }
    }
    return 0;
}
int fatorial(int iF){
    if(iF > 1)
        return iF * fatorial(iF - 1);
    return iF;
}
