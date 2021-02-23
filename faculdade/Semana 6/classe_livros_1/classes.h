// arquivo de cabeçalho da classe com os métodos e atributos

#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

using namespace std;

class Livros{  // iniciar nome da classe com letra maiúscula
public:  // visibilidade externa à classe

    Livros (string sNome, string sAutor, int iQdtPaginas); // protótipo de método (função)
    ~Livros();  // método destrutor
    void setNome(string sNome);
    string getNome();
    void consultar();

private:  // visibilidade exclusiva dentro da classe (encapsulamento)

    string sNome;  // nomes dos atributos (substantivos) seguindo regras de variáveis
    string sAutor;
    int iQtdPaginas=0;

};

Livros::Livros(string sNome, string sAutor, int iQtdPaginas){  // corpo do método construtor
    this->sNome=sNome;
    this->sAutor=sAutor;
    this->iQtdPaginas=iQtdPaginas;
}

void Livros::setNome(string sNome){  // corpo do método setter
    this->sNome=sNome;
}

string Livros::getNome(){  // corpo do método getter
    return this->sNome;
}

Livros::~Livros(){  // corpo do método destrutor
    cout << "Objeto destruido!" << endl;
}

void Livros::consultar(){  // corpo do método 'consultar'
    cout << "Nome do livro: " << this->sNome << endl;
    cout << "Nome do autor: " << this->sAutor << endl;
    cout << "Quantidade de paginas: " << this->iQtdPaginas << endl;
    cout << endl;
}

#endif // CLASSES_H_INCLUDED
