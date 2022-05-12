#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void mensagens_erro(int n) {
	switch (n)

 {
		case 1: {
			printf("Erro 1: cabeca\n");
			break;
		}
		case 2: {
			printf("Erro 1: cabeca\n");
			printf("Erro 2: tronco\n");
			break;
		}
		case 3: {
			printf("Erro 1: cabeca\n");
			printf("Erro 2: tronco\n");
			printf("Erro 3: perna direita\n");
			break;
		}
		case 4: {
			printf("Erro 1: cabeca\n");
			printf("Erro 2: tronco\n");
			printf("Erro 3: perna direita\n");
			printf("Erro 4: perna esquerda\n");
			break;
		}
		case 5: {
			printf("Erro 1: cabeca\n");
			printf("Erro 2: tronco\n");
			printf("Erro 3: perna direita\n");
			printf("Erro 4: perna esquerda\n");
			printf("Erro 5: braco direito\n");
			break;
		}
		case 6: {
			printf("Erro 1: cabeca\n");
			printf("Erro 2: tronco\n");
			printf("Erro 3: perna direita\n");
			printf("Erro 4: perna esquerda\n");
			printf("Erro 5: braco direito\n");
			printf("Erro 6: braco esquerdo\n");
			break;
		}
		default: {
			break;
		}
	}
}

int main (void) {
	char palavra[11], letra;
	int tamanho, acertos=0, erros=0, ao_menos_uma=0;

	printf("Informe a palavra: ");
	fgets(palavra, 11, stdin);

	system ("cls");

	tamanho = strlen(palavra);

	char vazia[tamanho]; //criacao da string de   _   / cuida com isso, pois não é recomentado /

	tamanho--;

	for(int i=0; i<tamanho; i++) {
		vazia[i] = '_';
	}

	for(int i=0; i<tamanho; i++) {
		printf("%c ", vazia[i]);
	}

	while (acertos <= tamanho) {

		if (erros <= 6) {

			printf("\n\n\nInsira uma letra: ");
			scanf("%c", &letra);
			getchar();//vai capturar new line


			ao_menos_uma = 0;
			for(int i=0; i<tamanho; i++) {
				if(letra == palavra[i]) {
					vazia[i] = letra;
                    acertos++;
					ao_menos_uma++;
				}
			}

			system("cls");

			for(int i=0; i<tamanho; i++) {
				printf("%c ", vazia[i]);
			}


			if(ao_menos_uma == 0) {
				erros++;
				printf("\n \n \n");
				mensagens_erro(erros);
			} else {
				printf("\n \n \n");
				mensagens_erro(erros);
			}

			if(acertos == tamanho) {
				printf(" \n \nParabens! Voce venceu \n");
				break;
			}
		} else {
			printf("Fim de jogo!");
			break;
		}
	}
}
