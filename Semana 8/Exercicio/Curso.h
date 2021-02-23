#ifndef CURSO_H_INCLUDED
#define CURSO_H_INCLUDED

using namespace std;

class Curso{
public:
    Curso (string sNomeCurso, string sAlunos, int numAlunos);
    ~Curso();
    void setNome(string sNomeCurso);
    void setAluno(int numAlunos, string sAlunos);
    void consultar();

private:
    string sNomeCurso;
    string sAlunos;
    int numAlunos;
};

// método construtor
Curso::Curso(string sNomeCurso, string sAlunos, int numAlunos){
    this->sNomeCurso=sNomeCurso;
}

// setNome
void Curso::setNome(string sNomeCurso){
    this->sNomeCurso=sNomeCurso;
}

// setAluno
void Curso::setAluno(int numAlunos, string sAlunos){
    this->numAlunos=numAlunos;
    this->sAlunos=sAlunos;
}

Curso::~Curso(){}

void Curso::consultar(){
    cout << "NOME CURSO: " << this->sNomeCurso << endl;
    cout << "ALUNOS CURSO: " << this->sAlunos << endl;
    cout << endl;
}

#endif // CURSO_H_INCLUDED
