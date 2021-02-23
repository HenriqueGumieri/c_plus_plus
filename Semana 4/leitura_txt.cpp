#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream arquivo;
    string sNomArq,sLinha;
    int iQtdLinhas = 0;
    cout << "Entre com o nome do arquivo: ";
    cin >> sNomArq;
    arquivo.open(sNomArq);  /* abertura do arquivo para leitura e grava��o,
    o ponteiro se posiciona no primeiro registro */
    if (arquivo.is_open()){  // verifica se o arquivo est� aberto devolvendo um resultado booleano
        cout << "O arquivo contem as seguintes linhas: " << endl;
        cout << endl;
        while (!arquivo.eof()){  // verifica se o ponteiro chegou ao fim do arquivo (.eof)
            getline(arquivo,sLinha);
         /* 1� Par�metro: estabelece o canal de conex�o com o arquivo
            2� Par�metro: recep��o por refer�ncia a string de cada linha */
            cout << sLinha << endl;  // exibe a linha na tela
            iQtdLinhas++;  // sequ�ncia de leitura uma a uma
        }
        cout << "\nQuantidade de linhas lidas = " << iQtdLinhas << endl;  // exibe a quantidade total de linhas
    }else{
        cout << "Arquivo nao encontrado" << endl;
    }
    return 0;
}
