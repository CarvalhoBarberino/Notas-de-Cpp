//Este exemplo mostra como se comporta sobre carga de funções e parametros defaults
#include <iostream>
using namespace std;
void display(int a, int b, int c = 13){// apenas os ultimos parametros podem ser default. display(int a = 11, int b, int c) gera erro de compilação
    cout << a << " " << b << " " << c << endl;
}
int main()
{
    cout << "Sem especificar o terceiro parametro, ativa o parametro default" << endl;
    display(11, 12);
    cout << endl << endl;
    cout << "Especificando o terceiro parametro, não usa o parametro default" << endl;
    display(65, 66, 67);
    cout << "Press enter to continue ...";
    cin.get();
    return 0;
}
