#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream arquivo;
    string sNomArq,sLinha;
    char cOp;
    int iNumReg;
    long lPos;
    sNomArq = "C:\\Users\\im_nu\\OneDrive - ufu.br\\FACULDADE - Engenharia de Produ��o (UFU)\\3� PER�ODO\\AARE - Etapa 1\\Programa��o Computacional\\FACULDADE\\Semana 4\\ponteiros_posicao\\tabCidades.txt";
    arquivo.open(sNomArq);  // abertura autom�tica com o diret�rio previamente definido
    if (arquivo.is_open()){
        do {
            cout << "Entre com o numero do registro: ";
            cin >> iNumReg;
            lPos = (iNumReg - 1) * 45;
            arquivo.seekp(lPos,ios::beg);
            getline(arquivo,sLinha);
            cout << sLinha << endl;
            cout << "\nDeseja continuar? ";
            cin >> cOp;
        } while (cOp == 's' || cOp == 'S');
    }else{
        cout << "Arquivo nao encontrado" << endl;
    }
    return 0;
}
