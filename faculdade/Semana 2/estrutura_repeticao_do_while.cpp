#include <iostream>

using namespace std;

int main()
{
    char cOp;  // vari�vel de controle do fluxo
    string sNome;
    do {  // passa dentro do 'while' pelo menos uma vez
        cout << "Entre com o seu nome: ";
        getline(cin,sNome);
        cout << "Ola " << sNome << ", tudo bem?" << endl;
        cout << "Deseja continuar? ";  // enquanto o usu�rio quiser continuar, o la�o continua
        cin >> cOp;
        cin.ignore();
    } while (cOp == 's' || cOp == 'S');  // entrada com o caractere S mai�sculo ou min�sculo
    return 0;
}
