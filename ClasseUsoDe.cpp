#include <iostream>
using namespace std;

class minhaClasse{
public://Por defout, classes possuem elementos privados
    int x;
    void incrementar(){
        x++;
    }
};

int main(){
    minhaClasse obj1;
    obj1.x = 23;
    cout << obj1.x << endl;
    obj1.incrementar();
    cout << obj1.x << endl;
}
