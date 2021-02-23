#include <iostream>
#include <iomanip>

using namespace std;

void montVetor(int *v, int n);
void showVetor(int *v, int n);
void quickSort(int *v, int esq, int dir);  // protótipo do algoritmo de ordenação Quick Sort
int separar(int *v, int esq, int dir);     // protótipo da função auxiliar do algoritmo 'separar'
void trocar(int *v, int i, int j);

int main()
{
    srand(0);
    int n = 20;
    int iVetor[n];
    montVetor(iVetor,n);
    cout << "VETOR ORIGINAL" << endl;
    showVetor(iVetor,n);
    quickSort(iVetor,0,n-1); // aplicação do algoritmo de ordenação Quick Sort
    cout << "VETOR ORDENADO" << endl;
    showVetor(iVetor,n);
    return 0;
}

void montVetor(int *v, int n){
    for (int i = 0; i < n; i++){
        v[i] = rand()%100;
    }
}

void showVetor(int *v, int n){
    cout << "Indices:   ";
    for (int i = 0; i < n; i++){
        cout << setw(3) << i << " ";
    }
    cout << endl;
    cout << "Elementos: ";
    for (int i = 0; i < n; i++){
        cout << setw(3) << v[i] << " ";
    }
    cout << endl << endl;
}

/* Implementação do algoritmo Quick Sort:
coordena a separação das faixas da direita e da esquerda e sua chamada
recursiva para ordenação dessas faixas */
void quickSort(int *v, int esq, int dir){
    if (esq < dir){
        int j = separar(v, esq, dir);
        quickSort(v, esq, j -1);
        quickSort(v, j + 1, dir);
    }
}

// corpo da função auxiliar do algoritmo
int separar(int *v, int esq, int dir){
    int iPivo = v[esq];  /* para uma determinada faixa o pivô é eleito
    como sendo o elemento mais à esquerda */
    int i = esq + 1;
    int j = dir;
    while (i <= j){
        if (v[i] <= iPivo)
            i++;
        else if (v[j] > iPivo)
            j--;
        else if (i <= j){
            trocar(v,i,j);
        }
    }
    trocar(v,esq,j);
    return j;
}

void trocar(int *v, int i, int j){
    int iAux;
    iAux = v[i];
    v[i] = v[j];
    v[j] = iAux;
}
