#include <iostream>
#include <string>
using namespace std;
struct student{
    int ra = 0;
    string nome;
};
void carregaEstudante(student *p){
    int tamanhoDoNome;
    cout << "Digite o numero de matricula do estudantes: ";
    cin >> p->ra;//cin >> (*p).ra;
    cin.ignore();//Esta linha é responsavel por limpar o buffer que estava sujo com o ENTER digitado anteriormente pelo usuario
    cout << "Digite o nome completo do estudantes: ";
    getline(cin, p->nome);//getline(cin, (p*).nome);
}
void mostraEstudante(student a){
    cout << "Numero de matricula do estudante: " << a.ra << endl;
    cout << "Nome do estudante: " << a.nome << endl;
}
int main()
{
    student aluno1;
    carregaEstudante(&aluno1);// passado por referencia
    mostraEstudante(aluno1);// passado por variavel
    return 0;
}
