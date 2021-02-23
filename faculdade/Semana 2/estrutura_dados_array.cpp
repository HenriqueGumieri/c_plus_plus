#include <iostream>
using namespace std;

int main()
{
    const int TAM = 3;  // Tamanho do array previamente definido pela constante 3. Sempre começa no índice 0, então [0,1,2]
    string sProdutos[TAM];  // vetor de PRODUTOS
    float fValor[TAM];  // vetor de VALOR
    for (int iN = 0; iN < TAM; iN++){  // laço de repetição para coleta de dados | iN - Variável na forma de vetor ou matriz
        cout << "Entre com o produto ["<<iN<<"]: ";
        getline(cin, sProdutos[iN]);
        cout << "Valor unitario: ";
        cin >> fValor[iN];
        cin.ignore();  // ignorar o último ENTER para não forçar a getline
        cout << endl;
    }
    for (int iN = 0; iN < TAM; iN++){  // mostrar na tela aquilo que foi armazernado (índice, nome e valor do produto)
        cout << "Produto ["<<iN<<"]: " << sProdutos[iN] << " - Valor: R$" << fValor[iN] << endl;
    }
    return 0;
}
