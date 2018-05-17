#include <iostream>
using namespace std;
int fat(int i)
{
    if(i == 1)
    {
        return 1;
    }
    if(i == 0)
    {
        return 1;
    }
    return i * fat(i - 1);
}
int main()
{
    int i = 0;
    cout << "Digite um numero inteiro:" << endl;
    cin >> i;
    i = fat(i);
    cout << i << endl;
    cin.ignore(1024, '\n');
    cout << "Press enter to continue...";
    cin.get();
    return 0;
}
