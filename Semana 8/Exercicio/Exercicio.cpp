#include <iostream>
#include "Curso.h"
#include <vector>

using namespace std;

int main()
{
    int numAluno;
    string sAlunos, sAlunos2, sNomeCurso;
    char cOp, cOp2;
    cout << "Entre com o numero do curso: ";
    cin >> cOp;
    cout << endl;
    switch (cOp){
        case '1':
            cout << "INSCRICAO CURSO 1: " << endl;
            do{
                cout << "Digite o numero do aluno (0 a 19): ";
                cin >> numAluno;
                cin.ignore();
                if (numAluno > 19 || numAluno < 0){
                    cout << "O numero nao pode ser cadastrado!" << endl;
                    break;
                }else{
                    cout << "Entre com o nome do aluno: ";
                    getline(cin, sAlunos);
                    cout << endl;
                    cout << "Deseja continuar? ('s' para SIM / 'n' para NAO): ";
                    cin >> cOp2;
                    cin.ignore();
                    cout << endl;
                }
                }while(cOp2 == 's' || cOp2 == 'S');
        case '2':
            cout << "INSCRICAO CURSO 2: " << endl;
            do{
                cout << "Digite o numero do aluno (0 a 19): ";
                cin >> numAluno;
                cin.ignore();
                if (numAluno > 19 || numAluno < 0){
                    cout << "O numero nao pode ser cadastrado!" << endl;
                    break;
                }else{
                    cout << "Entre com o nome do aluno: ";
                    getline(cin, sAlunos2);
                    cout << endl;
                    cout << "Deseja continuar? ('s' para SIM / 'n' para NAO): ";
                    cin >> cOp2;
                    cin.ignore();
                    cout << endl;
                }
                }while(cOp2 == 's' || cOp2 == 'S');
            break;
        default:
            cout << "Nao existe esse curso" << endl;
            break;
    }

    Curso *curso1 = new Curso(sNomeCurso,sAlunos,numAluno);
    Curso *curso2 = new Curso(sNomeCurso,sAlunos2,numAluno);

    curso1->setNome("Curso 1");
    curso2->setNome("Curso 2");

    curso1->setAluno(numAluno, sAlunos);
    curso2->setAluno(numAluno, sAlunos2);

    curso1->consultar();
    curso2->consultar();

    curso1->~Curso();
    curso2->~Curso();

    return 0;
}
