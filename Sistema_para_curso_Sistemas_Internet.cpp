#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct disciplinas {
	int id;
	char nome[50];
	char professor[50];
	char periodo[10];
	int carga_horaria;
	int id_alunos[5];
	int cont_al;
};

struct alunos {
	int matricula;
	char nome[50];
	char cpf[12]; 
	char rg[12];
	char data_nasc[13];
	char endereco[80];
	char email[50];
	int semestre;
	int id_disciplinas[10];
	int cont_disc;
};

int Mostra_menu () {

	int opcao;

	system("cls");
	printf ("---Curso Sistemas Para Internet---\n");
	printf("\nMenu:\n\n");
	printf("1 - Matricula de aluno em disciplina\n");//
	printf("\nAluno\n");
	printf("2 - Cadastro de aluno\n");//ok
	printf("3 - Exclusao de aluno\n"); //
	printf("4 - Listagem de alunos\n");//ok?
	printf("\nDisciplina\n");
	printf("5 - Cadastro de disciplina\n");//ok
	printf("6 - Exclusao de disciplina\n");//
	printf("7 - Listagem de disciplinas\n");//ok?
	printf("\nBusca\n");
	printf("8 - Busca de aluno\n"); //
	printf("9 - Busca de disciplina\n"); //
	printf("\n10 - Sair\n"); //
	printf("\n\nOpcao: ");
	scanf("%d", &opcao);
	
	return opcao;
}

int main (void){
	
	struct disciplinas d[4];
	struct alunos a[10];
	int opcao, cont_d=-1, cont_a=-1, id_a, id_d, achou, ok;
	int id_disc=0, mat_alun=0; //esses sao os valores que terão autoincremento
	
	do {
		
		opcao = Mostra_menu();
		
		switch (opcao){
			
			case 1:{
				system("cls");
				printf("Matricula de aluno: \n");
								
				printf("\nDigite a matricula do aluno: ");
				scanf("%d", &id_a);
				
				printf("Digite o id da disciplina: ");
				scanf("%d", &id_d);
				
				ok=0;
				achou=0;
				
				for(int i=0; i<(cont_a+1); i++){
					if(a[i].matricula == id_a){ 
					
						if(a[i].cont_disc < 4){
							a[i].id_disciplinas[a[i].cont_disc] = id_d;
							a[i].cont_disc++;
							ok++;
						} else {
							printf("O numero maximo de disciplinas em que o aluno pode se matricular foi atingido!");
						}
					achou++;	
					}
				}
				
				for(int i=0; i<(cont_d+1); i++){
					if(d[i].id == id_d){
						
						if(d[i].cont_al < 5){
							
							d[i].id_alunos[d[i].cont_al] = id_a;
							d[i].cont_al++;
							ok++;
						} else {
							printf("O numero maximo de alunos matriculados na disciplina foi atingido!\n");
						}
					achou++;	
					}
				}
				
				if(ok >= 2){
					printf("Matricula realizada com sucesso!\n");
				}
			
				if(achou <= 1){
					printf("Este aluno ou disciplina nao existe em nossa database!\n");
				}
				
				system("PAUSE");
				
				break;
			}
			
			case 2:{
				system("cls");
				
				if(cont_a < 10){
					
					printf("Cadastro de aluno: \n");
				
					cont_a++;
					
					a[cont_a].matricula = mat_alun++;
					printf("Matricula: %d\n", a[cont_a].matricula);
		
					printf("Nome: ");
					setbuf(stdin, NULL);
					fgets(a[cont_a].nome, 50, stdin);
					setbuf(stdin, NULL);
					
					printf("CPF: ");
					setbuf(stdin, NULL);
					fgets(a[cont_a].cpf, 12, stdin);
					setbuf(stdin, NULL);
					
					printf("RG: ");
					setbuf(stdin, NULL);
					fgets(a[cont_a].rg, 12, stdin);
					setbuf(stdin, NULL);
					
					printf("Data de nascimento: ");
					setbuf(stdin, NULL);
					fgets(a[cont_a].data_nasc, 13, stdin);
					setbuf(stdin, NULL);
					
					printf("Endereco: ");
					setbuf(stdin, NULL);
					fgets(a[cont_a].endereco, 80, stdin);
					setbuf(stdin, NULL);
					
					printf("Email: ");
					setbuf(stdin, NULL);
					fgets(a[cont_a].email, 50, stdin);
					setbuf(stdin, NULL);
					
					printf("Semestre: ");
					scanf("%d", &a[cont_a].semestre);
					
					a[cont_a].cont_disc = 0;
					
				} else {
					
					printf("Numero maximo de alunos cadastrados atingido!");	
				
				}
				
				break;
			}
			
			case 3:{
				system("cls");
				printf("Exclusao de aluno: \n");
	
				printf("Digite a matricula do aluno a ser excluido: ");
				scanf("%d", &id_a);
				
				achou=0;
				
				for(int i=0; i<=cont_a; i++) {
					if(a[i].matricula == id_a) {
						
						for(int j=i; j<cont_a;  j++){
							a[j].matricula = a[j+1].matricula;
							strcpy(a[j].nome, a[j+1].nome);
							strcpy(a[j].cpf, a[j+1].cpf);
							strcpy(a[j].rg, a[j+1].rg);
							strcpy(a[j].data_nasc, a[j+1].data_nasc);
							strcpy(a[j].endereco, a[j+1].endereco);
							strcpy(a[j].email, a[j+1].email);	
							a[j].semestre = a[j+1].semestre;
							
							for(int k=0; k<a[j].cont_disc; k++){
								a[j].id_disciplinas[k] = a[j+1].id_disciplinas[k];
							}
							
							a[j].cont_disc = a[j+1].cont_disc;
						}
						
					achou++;
					
				/*	excluir do vetor de disciplinas
						
						for(int l=0; l<=cont_d; l++){ //percorre as disciplinas
						
							for(int m=0; m<d[l].cont_al; m++){
								
								if(d[l].id_alunos[m] == id_d){
									
									if (d[l].cont_al == 0){
										d[l].id_alunos[m] = 0;
									} else {
																		
										for(int n=m; n<d[l].cont_al; n++){ 
											d[l].id_alunos[m] = d[l].id_alunos[m+1];
										}
									}
								}
							}
							
							
						}
						*/
					}
				}
							
				if(achou == 0){
					printf("Este aluno nao existe em nossa database!");
				} else {
					printf("Aluno excluido com sucesso!\n");
					cont_a--;
				}
				
				system("PAUSE");
	
				break;
			}
			
			case 4:{
				system("cls");
				printf("Listagem de alunos: \n");
	
				for(int i=0; i<=cont_a; i++) {
					printf("\nMatricula: %d \n", a[i].matricula);
					printf("Nome: %s", a[i].nome);
					printf("CPF: %s", a[i].cpf);
					printf("RG: %s", a[i].rg);
					printf("Data de nascimento: %s", a[i].data_nasc);
					printf("Endereco: %s", a[i].endereco);
					printf("Email: %s", a[i].email);
					printf("Semestre: %d \n", a[i].semestre);
					
					printf("Disciplinas em que esta matriculado: \n");
										
					for(int h=0; h<(a[i].cont_disc); h++){
						printf("%s", d[a[i].id_disciplinas[h]].nome); //verificar
					}
					
					printf("\n\n");
				}
				
				system("PAUSE");
	
				break;
			}
			
			case 5:{
				system("cls");
				
				if(cont_d < 4) {
									
					printf("Cadastro de disciplina: \n");
					
					cont_d++;
					
					d[cont_d].id = id_disc++;
					printf("Id: %d\n", d[cont_d].id);
		
					printf("Nome: ");
					setbuf(stdin, NULL);
					fgets(d[cont_d].nome, 50, stdin);
					setbuf(stdin, NULL);
					
					printf("Professor: ");
					setbuf(stdin, NULL);
					fgets(d[cont_d].professor, 50, stdin);
					setbuf(stdin, NULL);
									
					printf("Periodo: ");
					setbuf(stdin, NULL);
					fgets(d[cont_d].periodo, 10, stdin);
					setbuf(stdin, NULL);
					
					printf("Carga horaria (em horas): ");
					scanf("%d", &d[cont_d].carga_horaria);
					
					d[cont_d].cont_al = 0;
				
				} else {
					printf("Numero maximo de disciplinas cadastradas atingido!");
				}
				
				break;
			}
			
			case 6:{
				system("cls");
				printf("Exclusao de disciplina: \n");
	
				printf("Digite o id da disciplina a ser excluida: ");
				scanf("%d", &id_d);
				
				achou=0;
				
				for(int i=0; i<=cont_d; i++) {
					if(d[i].id == id_d) {
						
						for(int j=i; j<cont_d;  j++){
							d[j].id = d[j+1].id;
							strcpy(d[j].nome, d[j+1].nome);
							strcpy(d[j].professor, d[j+1].professor);
							strcpy(d[j].periodo, d[j+1].periodo);
							d[j].carga_horaria = d[j+1].carga_horaria;	
							
							for(int k=0; k<d[j].cont_al; k++){
								d[j].id_alunos[k] = d[j+1].id_alunos[k];
							}
							
							d[j].cont_al = d[j+1].cont_al;
						}			
						
						
					achou++;
					}
				}
							
				if(achou == 0){
					printf("Esta disciplina nao existe em nossa database!\n");
				} else {
					printf("Disciplina excluida com sucesso!\n");
					cont_d--;
				}
				
				system("PAUSE");
	
				break;
			}
			
			case 7:{
				system("cls");
				printf("Listagem de disciplinas: \n");
	
				for(int i=0; i<=cont_d; i++) {
					printf("\nId: %d \n", d[i].id);
					printf("Nome: %s", d[i].nome);
					printf("Professor: %s", d[i].professor);
					printf("Periodo: %s", d[i].periodo);
					printf("Carga horaria: %d \n", d[i].carga_horaria);
					
					printf("Alunos matriculados: \n");
					
					for(int h=0; h<d[i].cont_al; h++){
						printf("%s\n", a[d[i].id_alunos[h]].nome); //verificar
					}
					
					printf("\n\n");
				}
				
				system("PAUSE");
	
				break;
			}
			
			case 8:{
				system("cls");
				printf("Busca de aluno: \n");
	
				printf("\nDigite a matricula do aluno: ");
				scanf("%d", &id_a);
				
				achou=0;
	
				for(int i=0; i<=cont_a; i++) {
					if(a[i].matricula == id_a) {
						printf("\nMatricula: %d \n", a[i].matricula);
						printf("Nome: %s", a[i].nome);
						printf("CPF: %s", a[i].cpf);
						printf("RG: %s", a[i].rg);
						printf("Data de nascimento: %s", a[i].data_nasc);
						printf("Endereco: %s", a[i].endereco);
						printf("Email: %s", a[i].email);
						printf("Semestre: %d \n", a[i].semestre);
						
						printf("Disciplinas em que esta matriculado: ");
						
						for(int h=0; h<a[i].cont_disc; h++){
							printf("%s\n", d[a[i].id_disciplinas[h]].nome); //verificar
						}
						
						printf("\n\n");
						achou++;
					}
				}
				
				if(achou == 0){
					printf("Aluno nao encontrado!\n");
				}
				
				system("PAUSE");
	
				break;
			}
			
			case 9:{
				system("cls");
				printf("Busca de disciplina: \n");
	
				printf("\nDigite o id da disciplina: ");
				scanf("%d", &id_d);
				
				achou=0;
	
				for(int i=0; i<(cont_d+1); i++) {
					if(d[i].id == id_d) {
						printf("\nId: %d \n", d[i].id);
						printf("Nome: %s", d[i].nome);
						printf("Professor: %s", d[i].professor);
						printf("Periodo: %s", d[i].periodo);
						printf("Carga horaria: %d \n", d[i].carga_horaria);
						
						printf("Alunos: \n");
						
						for(int h=0; h<d[i].cont_al; h++){
							printf("%s\n", a[d[i].id_alunos[h]].nome); //verificar
						}
						
						printf("\n\n");
						achou++;
					}
				}
				
				if(achou == 0){
					printf("Disciplina nao encontrada!\n");
				}
				
				system("PAUSE");
	
				break;
			}
			
			case 10:{
				printf("Sair\n");
				break;
			}
						
			default:{
				printf("Opcao invalida!\n");
				break;
			}
		}
		
	} while (opcao != 10);
	
}
