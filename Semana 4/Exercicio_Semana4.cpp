// Para a execução do programa é necessário que o arquivo grupo.txt esteja na pasta do projeto.

#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main()
{
    fstream arquivo;
    string sLinha,sAlt,sPes;
    int iQtdLinhas=0;
    float fAlt,fPes,fAltMed,fPesMed,fSomAlt=0,fSomPes=0,fMaxAlt=0,fMaxPes=0;
    arquivo.open("grupo.txt");
    if (arquivo.is_open()){
        while (!arquivo.eof()){
            getline(arquivo,sLinha);
            sAlt = sLinha.substr(0,4);
            sPes = sLinha.substr(6,4);
            fAlt = stof(sAlt);
            fPes = stof(sPes);
            fSomAlt = fSomAlt + fAlt;
            fSomPes = fSomPes + fPes;
            if (fMaxAlt < fAlt){
                fMaxAlt = fAlt;
            }
            if (fMaxPes < fPes){
                fMaxPes = fPes;
            }
            iQtdLinhas++;
        }
        fAltMed = fSomAlt / iQtdLinhas;
        cout << "ALTURA MEDIA = " << fAltMed << endl;
        fPesMed = fSomPes / iQtdLinhas;
        cout << "PESO MEDIO = " << fPesMed << endl;
        cout << "MAIOR ALTURA = " << fMaxAlt << endl;
        cout << "MAIOR PESO = " << fMaxPes << endl;
    }else{
        cout << "Arquivo nao encontrado" << endl;
    }
    arquivo.close();
    return 0;
}
