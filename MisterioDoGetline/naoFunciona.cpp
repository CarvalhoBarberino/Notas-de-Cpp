#include <iostream>
#include <string>
using namespace std;

void carregaEstudante(int *numeroDeMatricula, string *nomeDoEstudante){
    cout << "\nDigite o numero do numero de matricula do estudantes: ";
    cin >> *numeroDeMatricula;
    cout << "\nDigite o nome do estudante: ";
    getline(cin, *nomeDoEstudante);
}
void mostraEstudante(int *n, string nome){
    cout << "numero de matricula do estudante: " << *n << endl;
    cout << "Nome do estudante: " << nome << endl;
}
int main()
{
    int numero = 0;
    string nome;
    carregaEstudante(&numero, &nome);
    mostraEstudante(&numero, nome);
    return 0;
}
