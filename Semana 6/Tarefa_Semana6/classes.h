#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

using namespace std;

class Livros{
public:
    Livros (string sNome, string sAutor, int iQdtPaginas, string sLeitor);
    void setNome(string sNome);
    string getLeitor();
    string getNome();
    void consultar();

private:
    string sNome;
    string sAutor;
    int iQtdPaginas=0;
    string sLeitor;
};

Livros::Livros(string sNome, string sAutor, int iQtdPaginas, string sLeitor){
    this->sNome=sNome;
    this->sAutor=sAutor;
    this->iQtdPaginas=iQtdPaginas;
    this->sLeitor=sLeitor;
}

void Livros::setNome(string sNome){
    this->sNome=sNome;
}

string Livros::getLeitor(){
    return this->sLeitor;
}

string Livros::getNome(){
    return this->sNome;
}

void Livros::consultar(){
    cout << "Nome do livro: " << this->sNome << endl;
    cout << "Nome do autor: " << this->sAutor << endl;
    cout << "Quantidade de paginas: " << this->iQtdPaginas << endl;
    cout << "Leitor(a): " << this->sLeitor << endl;
    cout << endl;
}

#endif // CLASSES_H_INCLUDED
