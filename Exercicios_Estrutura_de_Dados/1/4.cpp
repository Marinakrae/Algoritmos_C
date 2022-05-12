#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct filme {
	int id;
	char nome[60];
	float duracao;
};

struct serie {
	int id;
	char nome[60];
	int temporadas;
	int episodios;
};

int mostra_menu (){
	
	int op;
	system("cls");
	printf("Menu: \n\n");
	printf("Filme: \n");
	printf("1 - Cadastro\n");
	printf("2 - Exclusao\n");
	printf("3 - Listagem\n");
	printf("4 - Busca\n");
	printf("\nSerie: \n\n");
	printf("5 - Cadastro\n");
	printf("6 - Exclusao\n");
	printf("7 - Listagem\n");
	printf("8 - Busca\n\n");
	printf("9 - Sair\n\n");
	
	scanf("%d", &op);
	
	return op;
}

int main (void){
	
	struct filme f[100];
	struct serie s[100];
	
	int op, cont_f=0, cont_s=0, id_f;
	
	do{

	op = mostra_menu();
	
	switch(op){
		case 1:{ //cadastro de filme
			
			system("cls");
			
			printf("Cadastro de filme: \n");
			
			printf("Id: ");
			scanf("%d", &f[cont_f].id);
			
			printf("Nome: ");
			setbuf(stdin, NULL);
			fgets(f[cont_f].nome, 60, stdin);
			setbuf(stdin, NULL);
			
			printf("Duracao: ");
			scanf("%f", &f[cont_f].duracao);
			
			cont_f++;
			
			printf("Filme cadastrado com sucesso.\n");
			system("PAUSE");
			break;
		}
		
		case 2:{
			
			cont_f--;
			system("cls");
			
			printf("Exclusao de filme: \n");
			
			printf("Informe o id do filme a ser excluido: ");
			scanf("%d", &id_f);
			
			for(int i=0; i<cont_f; i++){
				if(f[i].id == id_f){
					f[i].id = 999;
					
					printf("Filme excluido com sucesso.\n");
				}
			}
			system("PAUSE");
			break;
		}
		
		case 3:{
			
			system("cls");
			
			printf("Listagem de filme: \n");
			
			for(int i=0; i<cont_f; i++){
				
				if(f[i].id != 999){
				
				printf("\nId: %d\n", f[i].id);
				printf("Nome: %s", f[i].nome);
				printf("Duracao: %.2f\n", f[i].duracao);
				}
			}
			system("PAUSE");
			break;
		}
		
		case 4:{
			
			system("cls");
			
			printf("Busca de filme: \n");
			
			printf("Informe o id do filme: ");
			scanf("%d", &id_f);
			
			for(int i=0; i<cont_f; i++){
				if(f[i].id == id_f){
					
					printf("\nId: %d\n", f[i].id);
					printf("Nome: %s", f[i].nome);
					printf("Duracao: %.2f\n", f[i].duracao);
					
				}
			}
			system("PAUSE");
			break;
		}
		
		case 5:{ //cadastro de serie
			
			system("cls");
			
			printf("Cadastro de serie: \n");
			
			printf("\nId: ");
			scanf("%d", &s[cont_s].id);
			
			printf("Nome: ");
			setbuf(stdin, NULL);
			fgets(s[cont_s].nome, 60, stdin);
			setbuf(stdin, NULL);
			
			printf("Temporadas: ");
			scanf("%d", &s[cont_s].temporadas);
			
			printf("Episodios: ");
			scanf("%d", &s[cont_s].episodios);
			
			cont_s++;
			
			printf("Serie cadastrada com sucesso.\n");
			system("PAUSE");
			break;
		}
		
		case 6:{
			
			cont_s--;
			system("cls");
			
			printf("Exclusao de serie: \n");
			
			printf("Informe o id da serie a ser excluida: ");
			scanf("%d", &id_f);
			
			for(int i=0; i<cont_s; i++){
				if(s[i].id == id_f){
					s[i].id = 999;
					
					printf("Serie excluida com sucesso.\n");
				}
			}
			system("PAUSE");
			break;
		}
		
		case 7:{
			
			system("cls");
			
			printf("Listagem de serie: \n");
			
			for(int i=0; i<cont_s; i++){
				
				if(s[i].id != 999){
					
				printf("\nId: %d\n", s[i].id);
				printf("Nome: %s", s[i].nome);
				printf("Temporadas: %d\n", s[i].temporadas);
				printf("Episodios: %d\n", s[i].episodios);
				}
			}
			system("PAUSE");
			break;
		}
		
		case 8: {
			
			system("cls");
			
			printf("Busca de serie: \n");
			
			printf("Informe o id da serie: ");
			scanf("%d", &id_f);
			
			for(int i=0; i<cont_f; i++){
				if(s[i].id == id_f){
					
					printf("\nId: %d\n", s[i].id);
					printf("Nome: %s", s[i].nome);
					printf("Temporadas: %d\n", s[i].temporadas);
					printf("Episodios: %d\n", s[i].episodios);
					
				}
			}
			
			system("PAUSE");
			break;
		}
		
		case 9: {
			break;
		}
				
		default: {
			printf("Escolha invalida!\n");
			break;
		}
		
	}
	
	} while (op != 9);
}
