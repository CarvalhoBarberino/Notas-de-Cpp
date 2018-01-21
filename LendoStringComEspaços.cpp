#include <iostream>
#include <string>
using namespace std;
int main()
{
   string nome, fruta;

   cout << "Qual seu nome? \n";
   getline(cin, nome);

   cout << "Você gosta de qual fruta? \n";
   getline(cin, fruta);

   cout << nome << " gosta de " << fruta;
   return 0;
}
