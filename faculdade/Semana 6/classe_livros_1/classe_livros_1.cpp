// arquivo principal com os objetos e instruções

#include <iostream>
#include "classes.h"  // diretiva de pré-compilador

using namespace std;

int main()
{
    // dois objetos instanciados (criados) na classe Livros
    Livros *livro1 = new Livros("Pesquisa Operacional","Wagner",851);  // chamada do método construtor
    Livros *livro2 = new Livros("Probabilidade e Estatistica","Spiegel",517);

    livro1->consultar();  // cansultar conteúdo dos obejtos
    livro2->consultar();

    livro1->setNome("Operation Research");
    livro1->consultar();
    cout << "Nome do livro 2: " << livro2->getNome() << endl;
    livro1->~Livros();

    return 0;
}
