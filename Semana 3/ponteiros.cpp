#include <iostream>

using namespace std;

int main()
{
    int *ipNum;  // definição de um ponteiro do tipo inteiro
    int iQuant; // definição de uma variável do tipo inteiro
    iQuant = 123;  // a variável recebe um valor inteiro
    ipNum = &iQuant; // inicialização do ponteiro da variável
    cout << "Quantidade = " << iQuant << endl;
    cout << "Local de armazenamento da quantidade: " << ipNum << endl;
    cout << "Conteudo armazenado em " << ipNum << " = " << *ipNum << endl;
    iQuant = 2*iQuant;  // modificação do valor da variável
    ipNum = &iQuant;  // nova inicialização do ponteiro da variável
    cout << "Quantidade = " << iQuant << endl;
    cout << "Conteudo armazenado em " << ipNum << " = " << *ipNum << endl;
    return 0;
}
