#include <conio.h>
#include <stdio.h>
#include <string.h>

int main() {

	puts("########## ANAGRAMA ##########");

	//Declaração de variáveis inteiras (inicializadas)
	int cont = 0, i = 0, j = 0, tam1 = 0, tam2 = 0;
	//declaração dos vetores de 4 posicoes - char (strings)
	char palavra1[4], palavra2[4], palavra2invert[4];

	printf("\nDigite a primeira palavra (max 4 chars): ");
	gets(palavra1); //Lendo a primeira palavra

	printf("\nDigite a segunda palavra (max 4 chars): ");
	gets(palavra2); //Lendo a segunda palavra

	tam1 = strlen(palavra1); //Passando o tamanho da palavra1 para tam1
	tam2 = strlen(palavra2); //Passando o tamanho de palavra2 para tam2

	printf("\npalavra1: %s - tam1: %d", palavra1, tam1);
	printf("\npalavra2: %s - tam2: %d", palavra2, tam2);

	if (tam1 > 4) {
		puts("\nERRO: palavra1 possui tamanho maior que 4");
	}
	if (tam2 > 4) {
		puts("\nERRO: palavra2 possui tamanho maior que 4");
	}

	//Verificando se o tamanho das palavras são iguais, senão elas não são anagramas
	if (tam1 == tam2) {

		// Um anagrama consiste em uma palava invertida, ou seja ROMA<==>AMOR
		for (j = tam2; j > 0; j--) { // percorre o vetor de tras para frente p/ inverter
			palavra2invert[i] = palavra2[j - 1];
			i++;
		}

		int tam3 = strlen(palavra2invert);
		//Passando o tamanho da palavra1 para tam1
		printf("\npalavra2invert: %s - tam: %d", palavra2invert, tam3);

		/* Para o anagrama inverto a segunda palavra, esta deve ser igual a primeira */

		//Verificando os caracteres da primeira string
		for (i = 0; i < tam1; i++) {
			//Comparando se o caracter da palavra1 contém em palavra2invert
			if (palavra1[i] == palavra2invert[i]) {
				cont++;
			}
		}

		printf("\ncont:%d - tam1:%d", cont, tam1);
		if (cont == tam1) { //Se o cont for do tamanho da palavra1, sao anagramas
			printf("\n\n==> Sao anagramas.");
		} else {
			printf("\n\n==> Nao sao anagramas.(1)");
		}
	} else {
		printf("\n\n==> Nao sao anagramas.(2)");
	}

	printf("\n\nPRESSIONE QUALQUER TECLA PARA ENCERRAR.");
	getch();
	return 0;
}
