// arquivo de cabe�alho da classe com os m�todos e atributos

#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

using namespace std;

class Livros{  // iniciar nome da classe com letra mai�scula
public:  // visibilidade externa � classe

    Livros (string sNome, string sAutor, int iQdtPaginas); // prot�tipo de m�todo (fun��o)
    ~Livros();  // m�todo destrutor
    void setNome(string sNome);
    string getNome();
    void consultar();

private:  // visibilidade exclusiva dentro da classe (encapsulamento)

    string sNome;  // nomes dos atributos (substantivos) seguindo regras de vari�veis
    string sAutor;
    int iQtdPaginas=0;

};

Livros::Livros(string sNome, string sAutor, int iQtdPaginas){  // corpo do m�todo construtor
    this->sNome=sNome;
    this->sAutor=sAutor;
    this->iQtdPaginas=iQtdPaginas;
}

void Livros::setNome(string sNome){  // corpo do m�todo setter
    this->sNome=sNome;
}

string Livros::getNome(){  // corpo do m�todo getter
    return this->sNome;
}

Livros::~Livros(){  // corpo do m�todo destrutor
    cout << "Objeto destruido!" << endl;
}

void Livros::consultar(){  // corpo do m�todo 'consultar'
    cout << "Nome do livro: " << this->sNome << endl;
    cout << "Nome do autor: " << this->sAutor << endl;
    cout << "Quantidade de paginas: " << this->iQtdPaginas << endl;
    cout << endl;
}

#endif // CLASSES_H_INCLUDED
