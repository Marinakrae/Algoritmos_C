#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct automovel {
	char placa[8];
	char descricao[50];
	char fabricante[10];
	char cor[10];
	int ano;
	float preco;
};

int main (void) {

	struct automovel a[12];

	int opcao, con_cadastro=0, achou=0;
	char placa[8];

	do {
		//system("cls");

		printf("\nConcessionaria FastCar \n\n");

		printf(" 1. Cadastrar automovel \n 2. Consultar automovel \n 3. Gerar relatorio \n 4. Sair do programa: \n");
		scanf("%d", &opcao);

		switch(opcao) {
			case 1: {
				printf("\nCadastro: \n");

				printf("Informe os dados do automovel: \n");

				setbuf(stdin, NULL);

				printf("Placa: ");
				fgets(a[con_cadastro].placa, 8, stdin);
				setbuf(stdin, NULL);

				printf("Descricao: ");
				fgets(a[con_cadastro].descricao, 50, stdin);
				setbuf(stdin, NULL);

				printf("Fabricante: ");
				fgets(a[con_cadastro].fabricante, 10, stdin);
				setbuf(stdin, NULL);

				printf("Cor: ");
				fgets(a[con_cadastro].cor, 10, stdin);
				setbuf(stdin, NULL);

				printf("Ano: ");
				scanf("%d", &a[con_cadastro].ano);

				printf("Preco: ");
				scanf("%f", &a[con_cadastro].preco);

				con_cadastro++;

				break;
			}
			case 2: {
				printf("\nConsulta: \n");

				setbuf(stdin, NULL);
				printf("Informe uma placa: ");
				fgets(placa, 8, stdin);
				setbuf(stdin, NULL);

				achou=0;

				for(int i=0; i<con_cadastro; i++) {
					if(strcmp(a[i].placa, placa)==0) {

						printf("\nPlaca: %s", a[i].placa);
						printf("Descricao: %s", a[i].descricao);
						printf("Fabricante: %s", a[i].fabricante);
						printf("Cor: %s", a[i].cor);
						printf("Ano: %d\n", a[i].ano);
						printf("Valor: %.2f\n", a[i].preco);

						achou++;

					}
				}

				if(achou==0) {
					printf("\nEste veiculo nao se encontra em nossa database!\n");
				}

				break;
			}
			case 3: {
				printf("\nRelatorio: \n");

				if(con_cadastro != 0) {

					for(int i=0; i<con_cadastro; i++) {

						printf("\nPlaca: %s", a[i].placa);
						printf("\nDescricao: %s", a[i].descricao);
						printf("Fabricante: %s", a[i].fabricante);
						printf("Cor: %s", a[i].cor);
						printf("Ano: %d\n", a[i].ano);
						printf("Valor: %.2f\n", a[i].preco);
					}

				} else {

					printf("Nao ha nenhum carro cadastrado\n");
				}
				break;
			}
			case 4: {
				printf("\nSair \n");
				break;
			}
			default : {
				printf("\nOpcao invalida!");
				break;
			}
		}

	} while (opcao != 4 && con_cadastro <= 10);

}
