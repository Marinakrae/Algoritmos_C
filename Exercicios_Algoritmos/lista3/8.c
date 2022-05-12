//Escreva um programa que ir� fazer o cadastro de um torcedor da S�rie A do CampeonatoBrasileiro de 2019
//este programa ir� receber nome do torcedor e sua idade. O programa deveperguntar de qual estado seu time pertence
//e (1 - S�O PAULO, 2 - RIO DE JANEIRO, 3 � RIOGRANDE DO SUL, 4 - MINAS GERAIS, 5 � CEAR�, 6 - SANTA CATARINA, 7 � PARAN�, 8� BAHIA, 9 � GOI�S, 10 � ALAGOAS) e
//quando o programa receber a informa��o, deve mostraros times do estado selecionado e perguntar para o usu�rio qual o seu time
// Ao final do cadastro oprograma deve mostras as informa��es do cadastro na tela

#include <stdio.h>
#include <stdlib.h>

int main (void) {

	char nome[50];
	int idade, estado, time;

	printf("Cadastro de torcedor da Serie A do Campeonato Brasileiro de 2019 \n \n");

	printf("Nome: "); //nao consigo pegar o nome completo pq ele n pega o nome completo
	scanf("%s", &nome);
	printf("\n");

	printf("Idade: ");
	scanf("%d", &idade);

	printf("\n 1 - SAO PAULO \n 2 - RIO DE JANEIRO \n 3 - RIO GRANDE DO SUL \n
	 4 - MINAS GERAIS \n 5 - CEARA \n 6 - SANTA CATARINA \n 7 - PARANA \n 8 - BAHIA \n 9 - GOIAS \n 10 - ALAGOAS \n \n");

	printf("Digite o numero correspondente ao estado ao qual seu time pertence: ");
	scanf("%d", &estado);

	switch(estado) {
		case 1: {
			printf("\n 1 - Palmeiras \n 2 - Sao Paulo \n 3 - Santos \n 4 - Corinthians \n");
			printf(" \n Qual o seu time? ");
			scanf("%d", &time);

			switch(time) {
				case 1: {
					printf("------------------------------------------ \n");
					printf("Informacoes do cadastrado \n \n");
					printf(" Nome: %s \n Idade: %d \n Estado: Sao Paulo \n Time: Palmeiras \n \n", nome, idade, estado);
					break;
				}
				case 2: {
					printf("------------------------------------------ \n");
					printf("Informacoes do cadastrado \n \n");
					printf(" Nome: %s \n Idade: %d \n Estado: Sao Paulo \n Time: Sao Paulo \n \n", nome, idade, estado);
					break;
				}
				case 3: {
					printf("------------------------------------------ \n");
					printf("Informacoes do cadastrado \n \n");
					printf(" Nome: %s \n Idade: %d \n Estado: Sao Paulo \n Time: Santos \n \n", nome, idade, estado);
					break;
				}
				case 4: {
					printf("------------------------------------------ \n");
					printf("Informacoes do cadastrado \n \n");
					printf(" Nome: %s \n Idade: %d \n Estado: Sao Paulo \n Time: Corinthians \n \n", nome, idade, estado);
					break;
				}
				default: {
					printf("Valor inv�lido!");
					break;
				}
			}
			break;
		}
		case 2: {
			printf("\n 1 - Flamengo \n 2 - Botafogo \n 3 - Fluminense \n 4 - Vasco \n");
			printf(" \n Qual o seu time? ");
			scanf("%d", &time);

			switch(time) {
				case 1: {
					printf("------------------------------------------ \n");
					printf("Informacoes do cadastrado \n \n");
					printf(" Nome: %s \n Idade: %d \n Estado: Rio de Janeiro \n Time: Flamengo \n \n", nome, idade, estado);
					break;
				}
				case 2: {
					printf("------------------------------------------ \n");
					printf("Informacoes do cadastrado \n \n");
					printf(" Nome: %s \n Idade: %d \n Estado: Rio de Janeiro \n Time: Botafogo \n \n", nome, idade, estado);
					break;
				}
				case 3: {
					printf("------------------------------------------ \n");
					printf("Informacoes do cadastrado \n \n");
					printf(" Nome: %s \n Idade: %d \n Estado: Rio de Janeiro \n Time: Fluminense \n \n", nome, idade, estado);
					break;
				}
				case 4: {
					printf("------------------------------------------ \n");
					printf("Informacoes do cadastrado \n \n");
					printf(" Nome: %s \n Idade: %d \n Estado: Rio de Janeiro \n Time: Vasco \n \n", nome, idade, estado);
					break;
				}
				default: {
					printf("Valor inv�lido!");
					break;
				}
			}

			break;
		}
		case 3: {
			printf("\n 1 - Internacional \n 2 - Gremio \n");
			printf(" \n Qual o seu time? ");
			scanf("%d", &time);





			switch(time) {

				case 1: {
					printf("------------------------------------------ \n");
					printf("Informacoes do cadastrado \n \n");
					printf(" Nome: %s \n Idade: %d \n Estado: Rio Grande do Sul \n Time: Internacional \n \n", nome, idade, estado);
					break;
				}
				case 2: {
					printf("------------------------------------------ \n");
					printf("Informacoes do cadastrado \n \n");
					printf(" Nome: %s \n Idade: %d \n Estado: Rio Grande do Sul \n Time: Gremio \n \n", nome, idade, estado);
					break;
				}
				default: {
					printf("Valor inv�lido!");
					break;
				}
			}
			break;
		}




		
		case 4: {
			printf("\n 1 - Atletico/MG \n 2 - Cruzeiro \n");
			printf(" \n Qual o seu time? ");
			scanf("%d", &time);

			switch(time) {
				case 1: {
					printf("------------------------------------------ \n");
					printf("Informacoes do cadastrado \n \n");
					printf(" Nome: %s \n Idade: %d \n Estado: Minas Gerais \n Time: Atletico/MG \n \n", nome, idade, estado);
					break;
				}
				case 2: {
					printf("------------------------------------------ \n");
					printf("Informacoes do cadastrado \n \n");
					printf(" Nome: %s \n Idade: %d \n Estado: Minas Gerais \n Time: Cruzeiro \n \n", nome, idade, estado);
					break;
				}
				default: {
					printf("Valor inv�lido!");
					break;
				}
			}

			break;
		}
		case 5: {
			printf("\n 1 - Ceara \n 2 - Fortaleza \n");
			printf(" \n Qual o seu time? ");
			scanf("%d", &time);

			switch(time) {
				case 1: {
					printf("------------------------------------------ \n");
					printf("Informacoes do cadastrado \n \n");
					printf(" Nome: %s \n Idade: %d \n Estado: Ceara \n Time: Ceara \n \n", nome, idade, estado);
					break;
				}
				case 2: {
					printf("------------------------------------------ \n");
					printf("Informacoes do cadastrado \n \n");
					printf(" Nome: %s \n Idade: %d \n Estado: Ceara \n Time: Fortaleza \n \n", nome, idade, estado);
					break;
				}
				default: {
					printf("Valor inv�lido!");
					break;
				}
			}
			break;
		}
		case 6: {
			printf("\n 1 - Chapecoense \n 2 - Avai \n");
			printf(" \n Qual o seu time? ");
			scanf("%d", &time);

			switch(time) {
				case 1: {
					printf("------------------------------------------ \n");
					printf("Informacoes do cadastrado \n \n");
					printf(" Nome: %s \n Idade: %d \n Estado: Santa Catarina \n Time: Chapecoense \n \n", nome, idade, estado);
					break;
				}
				case 2: {
					printf("------------------------------------------ \n");
					printf("Informacoes do cadastrado \n \n");
					printf(" Nome: %s \n Idade: %d \n Estado: Santa Catarina \n Time: Avai \n \n", nome, idade, estado);
					break;
				}
				default: {
					printf("Valor inv�lido!");
					break;
				}
			}

			break;
		}
		case 7: {
			printf("\n 1 - Atletico-PR \n");
			printf(" \n Qual o seu time? ");
			scanf("%d", &time);

			switch(time) {
				case 1: {
					printf("------------------------------------------ \n");
					printf("Informacoes do cadastrado \n \n");
					printf(" Nome: %s \n Idade: %d \n Estado: Parana \n Time: Atletico-PR \n \n", nome, idade, estado);
					break;
				}
				default: {
					printf("Valor inv�lido!");
					break;
				}
			}

			break;
		}
		case 8: {
			printf("\n 1 - Bahia \n");
			printf(" \n Qual o seu time? ");
			scanf("%d", &time);

			switch(time) {
				case 1: {
					printf("------------------------------------------ \n");
					printf("Informacoes do cadastrado \n \n");
					printf(" Nome: %s \n Idade: %d \n Estado: Bahia \n Time: Bahia \n \n", nome, idade, estado);
					break;
				}
				default: {
					printf("Valor inv�lido!");
					break;
				}
			}

			break;
		}
		case 9: {
			printf("\n 1 - Goias \n");
			printf(" \n Qual o seu time? ");
			scanf("%d", &time);

			switch(time) {
				case 1: {
					printf("------------------------------------------ \n");
					printf("Informacoes do cadastrado \n \n");
					printf(" Nome: %s \n Idade: %d \n Estado: Goias \n Time: Goias \n \n", nome, idade, estado);
					break;
				}
				default: {
					printf("Valor invalido!");
					break;
				}
			}

			break;
		}
		case 10: {
			printf("\n 1 - CSA \n");
			printf(" \n Qual o seu time? ");
			scanf("%d", &time);

			switch(time) {
				case 1: {
					printf("------------------------------------------ \n");
					printf("Informacoes do cadastrado \n \n");
					printf(" Nome: %s \n Idade: %d \n Estado: Alagoas \n Time: CSA \n \n", nome, idade, estado);
					break;
				}
				default: {
					printf("Valor invalido!");
					break;
				}
			}

			break;
		}
		default: {
			printf("Estado invalido! \n");
			break;
		}
	}

  printf("\n");

	system("pause");

}
