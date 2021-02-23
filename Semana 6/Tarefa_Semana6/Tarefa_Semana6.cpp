/*
1. Crie mais um atributo na classe livros para controlar o leitor que retirar
um livro para leitura;
2. Crie 5 objetos de livros;
3. Crie um método para colocar o nome do leitor no novo atributo;
4. Altere o método consultar para mostrar o nome do leitor;
5. No programa principal, peça para o leitor digitar o número do livro que
deseja ler;
6. Peça o nome do leitor;
7. Grave o nome do leitor no livro referente ao número digitado em 5;
8. Execute o método consultar para o livro assinalado;
*/

#include <iostream>
#include "classes.h"
#include <vector>

using namespace std;

int main()
{
    string sLeitor;
    cout << "Digite seu nome: ";
    getline(cin,sLeitor);

    vector <Livros> biblioteca {
        Livros("Um Curso de Calculo - Volume 1","Guidorizzi",580,sLeitor),
        Livros("Os elementos","Euclides",600,sLeitor),
        Livros("Principia","Newton",328,sLeitor),
        Livros("Introduction to Quantum Mechanics","Griffiths",508,sLeitor),
        Livros("Licoes de Fisica","Feynman",1604,sLeitor)
    };

    int iLivro;
    cout << "Digite o numero do livro que deseja ler: ";
    cin >> iLivro;
    cout << endl;

    if(iLivro <= biblioteca.size()){
        biblioteca.at(iLivro-1).consultar();
    }else{
        cout << "A biblioteca nao possui esse livro" << endl;
    }
    return 0;
}
