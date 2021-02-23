#include <iostream>
#include <iomanip>  // biblioteca para manipulação de formato de entrada e saída de dados

using namespace std;

void montVetor(int *v, int n);     // protótipo da função para montar o vetor
void showVetor(int *v, int n);     // protótipo da função para mostrar o vetor montado
void bubbleSort(int *v, int n);    // protótipo do algoritmo de ordenação Bubble Sort
void trocar(int *v, int i, int j); // protótipo da função auxiliar do algoritmo 'trocar'

int main()
{
    srand(0);               // semente para geração de números aleatórios (seed randômica)
    int n = 20;             // tamanho do vetor de números aleatórios
    int iVetor[n];          // definição do vetor
    montVetor(iVetor,n);    // montar iVetor com números aletatórios
    cout << "VETOR ORIGINAL" << endl;
    showVetor(iVetor,n);    // mostrar iVetor montado com números aleatórios
    bubbleSort(iVetor,n-1); // aplicação do algoritmo de ordenação Bubble Sort
    cout << "VETOR ORDENADO" << endl;
    showVetor(iVetor,n);    // mostrar vetor ordenado
    return 0;
}

// corpo da função que monta um vetor com números aletatórios(randômicos)
void montVetor(int *v, int n){
    for (int i = 0; i < n; i++){
        v[i] = rand()%100;  // rand(): função para geração de números aleatórios
                            /* %: operador que garante que o número seja menor que o limite estabelecido,
                            serve para obter o resto da divisão pelo limite */
    }
}

// corpo da função que mostra o vetor montado de tamanho n
void showVetor(int *v, int n){
    cout << "Indices:   ";
    for (int i = 0; i < n; i++){
        cout << setw(3) << i << " ";  // setw: define a quantidade de caracteres que serão mostrados
    }
    cout << endl;
    cout << "Elementos: ";
    for (int i = 0; i < n; i++){
        cout << setw(3) << v[i] << " ";
    }
    cout << endl << endl;
}

// implementação do algoritmo Bubble Sort de forma recursiva
void bubbleSort(int *v, int n){
    if (n > 1){
        for (int i = 0; i < n ; i++){
            if (v[i] > v[i + 1])
                trocar(v, i, i +1);
        }
        bubbleSort(v, n-1);
    }
}

// corpo da função auxiliar do algoritmo para troca de valores entre duas posições em um vetor
void trocar(int *v, int i, int j){
    int iAux;
    iAux = v[i];
    v[i] = v[j];
    v[j] = iAux;
}
