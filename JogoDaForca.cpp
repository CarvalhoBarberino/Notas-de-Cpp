#include <iostream>
#include <stdlib.h>
#define CEM 100
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

bool comparaVecChar(int tam, int *acertos, char letra, char *vecSecreto, char *vecPublico){
	bool retornar = false;
	for(int i = 0; i < tam; i++){
	//cout << "i = " << i << " " << vecSecreto[i] << " " << letra<<endl;
		if(vecSecreto[i] == letra){
			vecPublico[i] = letra;
			(*acertos)++;
			//cout << "*acertos " << *acertos << endl;
			retornar = true;
		}
	}
	//cout << "Voce acertou " << *acertos << " letras ate agora" << endl;
	return retornar;
}

int main(){
	bool vitoria;
	int tamanhoDaPalavraSecreta = 0, i = 0, chances = 6, acertos = 0;
	char letra;
	char resposta[30], palavraOculta[30];
	limpaTela(CEM);
	cout << "*****Jogo da Forca*****" << endl << endl;
	cout << "Digite a palavra secreta em letras minusculas sem que o participante veja e ao final aperte ENTER: " << endl;
	cin >> resposta;
	while(resposta[tamanhoDaPalavraSecreta] != '\0'){// Calcula o tamanho da palavra
		tamanhoDaPalavraSecreta++;
	}
	limpaTela(CEM);
	cout << "Tamanho da palavra secreta: " << tamanhoDaPalavraSecreta << endl;
	for(i = 0; i <= tamanhoDaPalavraSecreta; i++){//Cria a palavra oculta, a palavra escrita apenas com tracinhos
		if(i == tamanhoDaPalavraSecreta){palavraOculta[i] = '\0'; break;}
		palavraOculta[i] = '-';
	}
	imprimeVecChar(palavraOculta);
	limpaTela(10);
	i = 0;
	while((chances > 1) && (acertos < tamanhoDaPalavraSecreta)){
		cout << endl << "Digite uma letra: ";
		cin >> letra;
		if(comparaVecChar(tamanhoDaPalavraSecreta, &acertos, letra, resposta, palavraOculta)){chances++;}
		chances--;
		limpaTela(CEM);
		//cout << chances << endl << acertos;
		imprimeVecChar(palavraOculta);
		cout << "\n\nVoce ainda tem " << chances << " chances";
	}
	limpaTela(CEM);
	if(acertos == tamanhoDaPalavraSecreta){
		cout << "Parabens voce acertou";
		limpaTela(5);
		return 0;
	}
	else{
		limpaTela(CEM);
		cout << "Suas chances acabaram e voce perdeu";
		limpaTela(5);
		return 0;
	}
}
