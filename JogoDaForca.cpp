#include <iostream>
using namespace std;

void limpaTela(int linhas){
	for(int i = 0; i<linhas; i++){
		cout << endl;
	}
}

void imprimeVecChar(char *vec){
	int i = 0;
	while(vec[i] != '\0'){
		cout << vec[i];
		i++;
	}
}

int main(){
	int tamanhoDaPalavraSecreta = 0, i = 0, chances = 6;
	char palavra[30], palavraOculta[30];
	cout << "Digite a palavra secreta" << endl;
	cin >> palavra;

	while(palavra[i] != '\0'){
		tamanhoDaPalavraSecreta++;
		i++;
	}
	limpaTela(40);
	cout << "Tamanho da palavra secreta: " << tamanhoDaPalavraSecreta << endl;

	for(i = 0; i <= tamanhoDaPalavraSecreta; i++){
		if(i == tamanhoDaPalavraSecreta){palavraOculta[i] = '\0'; break;}
		palavraOculta[i] = '-';
	}
	imprimeVecChar(palavraOculta);
	limpaTela(5);
	return 0;

}
