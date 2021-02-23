#include <iostream>
#include <iomanip>
#include <fstream>
#include <algorithm>

using namespace std;

void montVetorCodigo(int* v, int n, int x);
void montVetorPeca(string* vP, int n, string y);
void pairSort(int* v, string* vP, int n);
void buscaBinaria(int* v, int n, int x, string* vP);

int main()
{
    fstream arquivo;
    string sArqNome,sLinha,sCodigo,sPeca;
    int iCodigo,iQtdLinhas=0,n;
    char cOp;

    cout << "Entre com o nome do arquivo: ";
    cin >> sArqNome;
    arquivo.open(sArqNome);
    if (arquivo.is_open()){
        while(!arquivo.eof()){  // contar as linhas para definir n
            getline(arquivo,sLinha);
            iQtdLinhas++;
        }
        n = iQtdLinhas;
        int iVetorCodigo[n];
        string sVetorPeca[n];
        int iQtdLinhas=0;
        arquivo.clear();
        arquivo.seekg(ios::beg);
        while(!arquivo.eof()){
            getline(arquivo,sLinha);
            arquivo >> iCodigo >> sPeca;
            cout << sLinha << endl;
            /*iCodigo = stoi(sLinha.substr(0,3));
            sCodigo = to_string(iCodigo);
            if (sCodigo.size() == 1){
                sPeca = sLinha.substr(2,20);
                sPeca.erase(remove(sPeca.begin(), sPeca.end(), ' '), sPeca.end());
            }else{
                sPeca = sLinha.substr(3,20);
                sPeca.erase(remove(sPeca.begin(), sPeca.end(), ' '), sPeca.end());  // remover espaços em branco da captura da string 'sPeca'
            }*/
            montVetorCodigo(iVetorCodigo,iQtdLinhas,iCodigo);  // montar vetor dos códigos
            montVetorPeca(sVetorPeca,iQtdLinhas,sPeca);  // montar vetor das peças
            iQtdLinhas++;
        }
        pairSort(iVetorCodigo,sVetorPeca,n);
        cout << endl;
        do{
            buscaBinaria(iVetorCodigo,n,iCodigo,sVetorPeca);  // buscar e mostrar a peça referente ao código digitado
            cout << endl;
            cout << "Deseja continuar a pesquisa?(Digite 's' para SIM e 'n' para NAO)-> ";
            cin >> cOp;
            cin.ignore();
            cout << endl;
        }while (cOp == 's' || cOp == 'S');
    }else{
        cout << "Arquivo nao encontrado" << endl;
    }
    arquivo.close();
    return 0;
}

void montVetorCodigo(int *v, int n, int x){
    v[n] = x;
}

void montVetorPeca(string *vP, int n, string y){
    vP[n] = y;
}

// algoritmo de ordenação de um vetor string baseado em um vetor de inteiros
void pairSort(int* v, string* vP, int n){
    pair<int,string>pairt[n];
    for (int i = 0; i < n; i++){
        pairt[i].first = v[i];
        pairt[i].second = vP[i];
    }
    sort(pairt, pairt + n);
    for (int i = 0; i < n; i++){
        v[i] = pairt[i].first;
        vP[i] = pairt[i].second;
    }
}

// algoritmo de busca binária
void buscaBinaria(int* v, int n, int x, string* vP){
    cout << "Digite o codigo referente a peca desejada: ";
    cin >> x;
    int esq = - 1, dir = n;
    while (esq < dir - 1){
        int meio = (esq + dir) / 2;
        if (v[meio] < x) esq = meio;
        else dir = meio;
    }
    cout << endl;
    if (v[dir] == x){
        cout << "CODIGO: " << x << endl;
        cout << "PECA: " << vP[dir] << endl;
    }else{
        cout << "Peca nao encontrada. Tente novamente." << endl;
    }
}
