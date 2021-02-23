/*
Escreva um programa em C++ com os seguintes requisitos:
1. Entrar com o nome de pessoa;
2. Entrar com seu peso em kg;
3. Entrar com sua altura em metros;
4. Calcular seu IMC;
5. Obter o diagnóstico da pessoa;
6. Mostrar uma mensagem para a pessoa, tal como:
Nome: Fulano de Tal
IMC: 22.3
Diagnóstico: Peso normal
7. Pular uma linha e emitir a mensagem: Deseja continuar?
8. Permitir o usuário digitar sua resposta;
9. Se a resposta digitada for afirmativa, voltar em 1, caso contrário, encerra o programa.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string sNome;
    float fPeso,fAltura,fIMC;
    char cOp;
    do {
    cout << "Entre com o seu nome completo: ";
    getline(cin,sNome);
    cout << "Entre com o seu peso em quilogramas(kg): ";
    cin >> fPeso;
    cout << "Entre com a sua altura em metros(m): ";
    cin >> fAltura;
    cout << endl;

    fIMC = fPeso / (fAltura * fAltura);
    cout << "Nome: " << sNome << endl;
    cout << fixed << setprecision(1) << "IMC: " << fIMC << endl;
    if (fIMC < 16){
        cout << "Diagnostico: Baixo peso muito grave" << endl;
    } else {
        if (fIMC <= 16.99){
            cout << "Diagnostico: Baixo peso grave" << endl;
        } else {
            if (fIMC <= 18.49){
                cout << "Diagnostico: Baixo peso" << endl;
            } else {
                if (fIMC <= 24.99){
                    cout << "Diagnostico: Peso normal" << endl;
                } else {
                    if (fIMC <= 29.99){
                        cout << "Diagnostico: Sobrepeso" << endl;
                    } else {
                        if (fIMC <= 34.99){
                            cout << "Diagnostico: Obesidade grau I" << endl;
                        } else {
                            if (fIMC <= 39.99){
                                cout << "Diagnostico: Obesidade grau II" << endl;
                            } else {
                                if (fIMC >= 40){
                                    cout << "Diagnostico: Obesidade grau III" << endl;
                                }
                            }
                        }
                    }
                }
            }
        }
      }
    cout << endl;
    cout << "Deseja continuar?(Digite 's' para SIM e 'n' para NAO)-> ";
    cin >> cOp;
    cin.ignore();
    cout << endl;
    } while (cOp == 's' || cOp == 'S');
    return 0;
}
