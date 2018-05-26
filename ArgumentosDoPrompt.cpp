#include <iostream>

using namespace std;

int main(int num, char* arg[]){
	cout << "numero de argumentos = " << num << endl << endl;
	for(int i = 0; i < num; i++){
		cout << "argumento " << i << " " << arg[i] << endl;
	}
}

//No linux: ./ArgumentosDoPrompt um dois tres

//No Windows: ArgumentosDoPrompt.exe um dois tres
