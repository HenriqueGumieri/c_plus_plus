#include <iostream>

using namespace std;

int main()
{
    char cOp;  // variável de controle do fluxo
    string sNome;
    do {  // passa dentro do 'while' pelo menos uma vez
        cout << "Entre com o seu nome: ";
        getline(cin,sNome);
        cout << "Ola " << sNome << ", tudo bem?" << endl;
        cout << "Deseja continuar? ";  // enquanto o usuário quiser continuar, o laço continua
        cin >> cOp;
        cin.ignore();
    } while (cOp == 's' || cOp == 'S');  // entrada com o caractere S maiúsculo ou minúsculo
    return 0;
}
