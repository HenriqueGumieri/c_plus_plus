#include <iostream>  // inclus�o biblioteca para entrada/sa�da de dados (input/output)
#include <fstream>  // inclus�o da biblioteca para manipula��o de arquivos (file stream - fluxo de arquivo)

using namespace std;  // defini��o de uso do escopos de estruturas padr�o

int main()  // fun��o principal do programa
{
    fstream arquivo;  // cria��o do nome do objeto de fluxo de dados
    char cOp = 'S';
    string sNome;
    arquivo.open("arqNom.txt",ios::app);  /*  M�todo .open: fun��o de abertura do arquivo
    1� Par�metro: string com o nome do arquivo que dever� ser gravado
    2� Par�metro: input-output stream :: append -> adi��o de dados no final do arquivo  */
    do {
        cout << "Nome: ";
        getline(cin,sNome);  // capturar uma string e ignorar o ENTER final
        arquivo << sNome << endl;  // fluxo de sa�da de dados (grava��o) para o arquivo
        cout << endl;
        cout << "Deseja continuar gravando? ";
        cin >> cOp;
        cin.ignore();  // ignorar o conte�do do buffer de mem�ria
    } while (cOp == 's' || cOp == 'S');
    arquivo.close();  // M�todo .close: fun��o para fechamento do arquivo
    return 0;  // retorno inteiro da fun��o principal
}
