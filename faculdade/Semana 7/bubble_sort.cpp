#include <iostream>
#include <iomanip>  // biblioteca para manipula��o de formato de entrada e sa�da de dados

using namespace std;

void montVetor(int *v, int n);     // prot�tipo da fun��o para montar o vetor
void showVetor(int *v, int n);     // prot�tipo da fun��o para mostrar o vetor montado
void bubbleSort(int *v, int n);    // prot�tipo do algoritmo de ordena��o Bubble Sort
void trocar(int *v, int i, int j); // prot�tipo da fun��o auxiliar do algoritmo 'trocar'

int main()
{
    srand(0);               // semente para gera��o de n�meros aleat�rios (seed rand�mica)
    int n = 20;             // tamanho do vetor de n�meros aleat�rios
    int iVetor[n];          // defini��o do vetor
    montVetor(iVetor,n);    // montar iVetor com n�meros aletat�rios
    cout << "VETOR ORIGINAL" << endl;
    showVetor(iVetor,n);    // mostrar iVetor montado com n�meros aleat�rios
    bubbleSort(iVetor,n-1); // aplica��o do algoritmo de ordena��o Bubble Sort
    cout << "VETOR ORDENADO" << endl;
    showVetor(iVetor,n);    // mostrar vetor ordenado
    return 0;
}

// corpo da fun��o que monta um vetor com n�meros aletat�rios(rand�micos)
void montVetor(int *v, int n){
    for (int i = 0; i < n; i++){
        v[i] = rand()%100;  // rand(): fun��o para gera��o de n�meros aleat�rios
                            /* %: operador que garante que o n�mero seja menor que o limite estabelecido,
                            serve para obter o resto da divis�o pelo limite */
    }
}

// corpo da fun��o que mostra o vetor montado de tamanho n
void showVetor(int *v, int n){
    cout << "Indices:   ";
    for (int i = 0; i < n; i++){
        cout << setw(3) << i << " ";  // setw: define a quantidade de caracteres que ser�o mostrados
    }
    cout << endl;
    cout << "Elementos: ";
    for (int i = 0; i < n; i++){
        cout << setw(3) << v[i] << " ";
    }
    cout << endl << endl;
}

// implementa��o do algoritmo Bubble Sort de forma recursiva
void bubbleSort(int *v, int n){
    if (n > 1){
        for (int i = 0; i < n ; i++){
            if (v[i] > v[i + 1])
                trocar(v, i, i +1);
        }
        bubbleSort(v, n-1);
    }
}

// corpo da fun��o auxiliar do algoritmo para troca de valores entre duas posi��es em um vetor
void trocar(int *v, int i, int j){
    int iAux;
    iAux = v[i];
    v[i] = v[j];
    v[j] = iAux;
}
