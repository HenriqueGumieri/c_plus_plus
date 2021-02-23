/*
1. Solicite do usuário o tamanho do vetor de inteiros a ser ordenado;
2. Monte um laço de repetição para a digitação dos elementos do vetor;
3. Processe a ordenação do vetor com o uso do algoritmo quickSort;
4. Mostre na tela o vetor desordenado e o vetor ordenado;
*/

#include <iostream>
#include <iomanip>

using namespace std;

void montVetor(int *v, int n);
void showVetor(int *v, int n);
void quickSort(int *v, int esq, int dir);
int separar(int *v, int esq, int dir);
void trocar(int *v, int i, int j);

int main()
{
    int n;
    cout << "Entre com o tamanho do vetor de inteiros que deseja ordenar: ";
    cin >> n;
    cout << endl;
    int iVetor[n];
    montVetor(iVetor,n);
    cout << endl;
    cout << "VETOR ORIGINAL" << endl;
    showVetor(iVetor,n);
    quickSort(iVetor,0,n-1);
    cout << "VETOR ORDENADO" << endl;
    showVetor(iVetor,n);
    return 0;
}

void montVetor(int *v, int n){
    for (int i = 0; i < n; i++){
        cout << "Digite o elemento " << i+1 << " escolhido para compor o vetor: ";
        cin >> v[i];
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

void quickSort(int *v, int esq, int dir){
    if (esq < dir){
        int j = separar(v, esq, dir);
        quickSort(v, esq, j -1);
        quickSort(v, j + 1, dir);
    }
}

int separar(int *v, int esq, int dir){
    int iPivo = v[esq];
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
