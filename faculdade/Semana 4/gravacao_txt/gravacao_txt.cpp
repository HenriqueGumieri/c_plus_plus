#include <iostream>  // inclusão biblioteca para entrada/saída de dados (input/output)
#include <fstream>  // inclusão da biblioteca para manipulação de arquivos (file stream - fluxo de arquivo)

using namespace std;  // definição de uso do escopos de estruturas padrão

int main()  // função principal do programa
{
    fstream arquivo;  // criação do nome do objeto de fluxo de dados
    char cOp = 'S';
    string sNome;
    arquivo.open("arqNom.txt",ios::app);  /*  Método .open: função de abertura do arquivo
    1º Parâmetro: string com o nome do arquivo que deverá ser gravado
    2º Parâmetro: input-output stream :: append -> adição de dados no final do arquivo  */
    do {
        cout << "Nome: ";
        getline(cin,sNome);  // capturar uma string e ignorar o ENTER final
        arquivo << sNome << endl;  // fluxo de saída de dados (gravação) para o arquivo
        cout << endl;
        cout << "Deseja continuar gravando? ";
        cin >> cOp;
        cin.ignore();  // ignorar o conteúdo do buffer de memória
    } while (cOp == 's' || cOp == 'S');
    arquivo.close();  // Método .close: função para fechamento do arquivo
    return 0;  // retorno inteiro da função principal
}
