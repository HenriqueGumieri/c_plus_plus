#include <iostream>

using namespace std;

int main()
{
    char cOp;  // defini��o de vari�vel do tipo char (caractere da tabela ASCII) usando as boas pr�ticas (lower CamelCase)
    string sNome;  // defini��o de vari�vel do tipo string (cadeia de caracteres)
    cout << "Entre com um caractere qualquer: ";
    cin >> cOp;
    cout << "Entre com o seu nome: ";
    cin.ignore();  // ignorar o �ltimo enter (salto de linha) na entrada da getline
    getline(cin,sNome);  // fun��o da biblioteca <iostream> para esvaziar o buffer (limpar mem�ria), evitar problema na capitura do nome
    cout << "Ola " << sNome << endl;
    cout << "Voce digitou o caractere " << cOp << endl;
    return 0;
}
