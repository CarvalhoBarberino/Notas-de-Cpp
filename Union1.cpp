#include <iostream>
using namespace std;
union test{//union é compartilhar memoria.
    int i;
    double f;//O tamanho da union sempre será o tamanho da maior variavel que a contem. Neste caso: sizeof(test) vale o tamanho do double pois double ocupa maior espaço na memoria
    char l;
};
int main(){
    test u;
    cout << sizeof(u) << endl << endl;
    u.i = 25;
    cout << u.i << endl;
    cout << u.f << endl;
    cout << u.l << endl << endl;
    u.f = 25.7;
    cout << u.i << endl;
    cout << u.f << endl;
    cout << u.l << endl << endl;
    u.l = 'x';
    cout << u.i << endl;
    cout << u.f << endl;
    cout << u.l << endl << endl;
}
