#include <iostream>

using namespace std;

int main()
{
    char cOp;  // definição de variável do tipo char (caractere da tabela ASCII) usando as boas práticas (lower CamelCase)
    string sNome;  // definição de variável do tipo string (cadeia de caracteres)
    cout << "Entre com um caractere qualquer: ";
    cin >> cOp;
    cout << "Entre com o seu nome: ";
    cin.ignore();  // ignorar o último enter (salto de linha) na entrada da getline
    getline(cin,sNome);  // função da biblioteca <iostream> para esvaziar o buffer (limpar memória), evitar problema na capitura do nome
    cout << "Ola " << sNome << endl;
    cout << "Voce digitou o caractere " << cOp << endl;
    return 0;
}
