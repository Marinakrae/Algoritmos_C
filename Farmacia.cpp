#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int contmed = 0, contcli = 0;

typedef struct medicamento{
	int id;
	char nome[50];
	int quantidade;
	float preco;
	char laboratorio[100];
	int dosagem; //em mg
	char tarja[20];
	char data_de_validade[10];
	int clientes_compraram[10]; //ids dos clientes que compraram
} Medicamento;

typedef struct cliente{
	int id;
	char nome[50];
	char cpf[11]; 
	char telefone[11];
	char tipo_sanguineo;
	char email[30];
	int medicamentos_comprados[10];
} Cliente;

typedef struct nodeMed {
	Medicamento data;
	struct nodeMed* next;
} NodeMed;

typedef struct nodeCli {
	Cliente data;
	struct nodeCli* next;
} NodeCli;

typedef struct listMed{
	int size;
	NodeMed* head;
} ListMed;

typedef struct listCli{
	int size;
	NodeCli* head;
} ListCli;

ListMed* createListMed(){
	ListMed* listMed = (ListMed*) malloc(sizeof(ListMed));
	
	listMed->size = 0;
	listMed->head = NULL;
	
	return listMed;
}

ListCli* createListCli(){
	ListCli* listCli = (ListCli*) malloc(sizeof(ListCli));
	
	listCli->size = 0;
	listCli->head = NULL;
	
	return listCli;
}

int Mostra_menu () {

	int opcao;

	system("cls");
	printf ("---Farmacia---\n");
	printf("\nMenu:\n");
	printf("\nMedicamento\n");
	printf("1 - Cadastro de medicamento\n");//ok
	printf("2 - Exclusao de medicamento\n"); //ok
	printf("3 - Listagem de medicamento\n");//ok
	printf("\nCliente\n");
	printf("4 - Cadastro de cliente\n");//ok 
	printf("5 - Exclusao de cliente\n");//ok
	printf("6 - Listagem de cliente\n");//ok
	printf("\nBusca\n");
	printf("7 - Busca de medicamento\n"); //ok
	printf("8 - Busca de cliente\n"); //ok
	printf("\n9 - Sair\n"); //ok
	printf("\n\nOpcao: ");
	scanf("%d", &opcao);
	
	return opcao;
}

void cadastroMed(ListMed* list, Medicamento data){
	
	NodeMed* nodem = (NodeMed*) malloc(sizeof(NodeMed));
	
	nodem->data = data;
	nodem->next = list->head;
	list->head = nodem;
	list->size++;
}

void cadastroCli(ListCli* list, Cliente data){
	
	NodeCli* node = (NodeCli*) malloc(sizeof(NodeCli));
	
	node->data = data;
	node->next = list->head;
	list->head = node;
	list->size++;
}

bool isEmptyMed(ListMed* list) {
	return (list->size == 0);
}

bool isEmptyCli(ListCli* list) {
	return (list->size == 0);
}

void listarMed(ListMed* list){
	
	if(isEmptyMed(list)){
		printf("Lista vazia");
		return;
	}
		
	NodeMed* pointer = list->head;	
	
	while (pointer != NULL) {
		printf("\nId: %d", pointer->data.id);
		printf("\nNome: %s", pointer->data.nome);
		printf("Quantidade: %d", pointer->data.quantidade);
		printf("\nPreco: %.2f", pointer->data.preco);
		printf("\nLaboratorio: %s", pointer->data.laboratorio);
		printf("Dosagem: %d", pointer->data.dosagem);
		printf("\nTarja: %s", pointer->data.tarja);
		printf("Data de validade: %s", pointer->data.data_de_validade);
		
		pointer = pointer->next;
	}
	
	printf("\n");
	system("PAUSE");
}

void listarCli(ListCli* list){
	
	if(isEmptyCli(list)){
		printf("Lista vazia");
		return;
	}
	
	NodeCli* pointer = list->head;
		
	while (pointer != NULL) {
		printf("\nId: %d", pointer->data.id);
		printf("\nNome: %s", pointer->data.nome);
		printf("CPF: %s", pointer->data.cpf);
		printf("Telefone: %s", pointer->data.telefone);
		printf("Tipo sanguineo: %c", pointer->data.tipo_sanguineo);
		printf("\nEmail: %s", pointer->data.email);
		printf("Medicamentos comprados: ");
		for(int i=0; i < contmed; i++){
			printf("%d", pointer->data.medicamentos_comprados[i]);
		}
		
		pointer = pointer->next;
	}
	
	printf("\n");
	system("PAUSE");
}

void excluirCli (ListCli* list){
	
	if(!isEmptyCli(list)){
		NodeCli* pointer = list->head;
		list->head  = pointer->next;
		free(pointer);
		list->size--;
	}
	
}

NodeMed* buscaNoMed(ListMed* list, int id){
	
	NodeMed* index; //vai salvar a posicao da memoria em que esta o no do index informado
	
	NodeMed* pointer = list->head;	
	
	while (pointer != NULL) {
		
		if(pointer->data.id == id){
			index = pointer;
			return pointer;
			
		} else{
			pointer = pointer->next;
		}
		
	}
		
	return NULL;
			 
}

void excluirMed (ListMed* list, int id){
	
	NodeMed* index; //vai salvar a posicao da memoria em que esta o no do index informado
	
	NodeMed* pointer = list->head;	
	
	while (pointer != NULL) {
		
		if(pointer->data.id == id){
			index = pointer;
			break;
			
		} else{
			pointer = pointer->next;
		}
		
	}
	
	if(index==0){
		
		if(!isEmptyMed(list)){
			
			list->head  = pointer->next;
			free(pointer);
			list->size--;
		}
		
	} else {
		
		NodeMed* nodeAtual = buscaNoMed(list, id);
		
		if(nodeAtual != NULL){
			
			NodeMed* nodeAnterior = nodeAtual; 
			
			nodeAtual = nodeAtual->next;
					
			free(nodeAtual);
			list->size--;
			
			printf("Medicamento excluido com sucesso\n\n");
			
			system("PAUSE");
			
		} else {
			
			printf("No inexistente");
		} 
		
	}
	
} 

NodeCli* buscaNoCli(ListCli* list, int id){
	
	NodeCli* index; //vai salvar a posicao da memoria em que esta o no do index informado
	
	NodeCli* pointer = list->head;	
	
	while (pointer != NULL) {
		
		if(pointer->data.id == id){
			index = pointer;
			return pointer;
			
		} else{
			pointer = pointer->next;
		}
		
	}
		
	return NULL;
			 
}

void excluirCli (ListCli* list, int id){
	
	NodeCli* index; //vai salvar a posicao da memoria em que esta o no do index informado
	
	NodeCli* pointer = list->head;	
	
	while (pointer != NULL) {
		
		if(pointer->data.id == id){
			index = pointer;
			break;
			
		} else{
			pointer = pointer->next;
		}
		
	}
	
	if(index==0){
		
		if(!isEmptyCli(list)){
			
			list->head  = pointer->next;
			free(pointer);
			list->size--;
		}
		
	} else {
		
		NodeCli* nodeAtual = buscaNoCli(list, id);
		
		if(nodeAtual != NULL){
			
			NodeCli* nodeAnterior = nodeAtual; 
			
			nodeAtual = nodeAtual->next;
					
			free(nodeAtual);
			list->size--;
			
			printf("Cliente excluido com sucesso\n\n");
			
			system("PAUSE");
			
		} else {
			
			printf("No inexistente");
		} 
		
	}
	
} 

int PercorreCli (ListCli* list, NodeCli* node){
    if(node != NULL){
        NodeCli* pointer = list->head;

        int index = 0;

        while(pointer != node && pointer != NULL){
            pointer = pointer->next;
            index++;

        }
        if (pointer != NULL){
            return index;
        }
    }
    return -1;
}

int PercorreMed (ListMed* list, NodeMed* node){
    if(node != NULL){
        NodeMed* pointer = list->head;

        int index = 0;

        while(pointer != node && pointer != NULL){
            pointer = pointer->next;
            index++;

        }
        if (pointer != NULL){
            return index;
        }
    }
    return -1;
}

void TrocaListaMed(ListMed* list, NodeMed* nodeA, NodeMed* nodeB ){
    
    if(nodeA == nodeB){
        return;
    }
    int indexA = PercorreMed(list, nodeA);
    int indexB = PercorreMed(list, nodeB);
    
    if(indexA > indexB){
        nodeA = nodeB;
        nodeB = buscaNoMed(list, indexA);
        
        indexA = indexB;
        indexB = PercorreMed(list, nodeB);
    }
    
    NodeMed* pb = buscaNoMed(list, indexB-1);
    
    if(nodeA == list->head){
        list->head = nodeB;
    }
    
    else{
        //NodeMed pa = buscaNoMed(list, indexA-1);
        //pa->next = nodeB;
    }
    
    pb->next = nodeA;
    
    //node* pointer = nodeA->next;
    nodeA->next = nodeB->next;
    //nodeB->next = pointer;
    
}

void ordenaMed(ListMed* list){
	int i=0;
	
	for(i=0; i<list->size; i++){
		//TrocaListaMed(list, buscaNoMed(list, i));
	}
}

void ordenaCli(ListCli* list){
	int i=0;
	
	for(i=0; i<list->size; i++){
		//TrocaListaCli(list, buscaNoCli(list, i));
	}
}

void TrocaListaCli(ListCli* list, NodeCli* nodeA, NodeCli* nodeB ){
    
    if(nodeA == nodeB){
        return;
    }
    int indexA = PercorreCli(list, nodeA);
    int indexB = PercorreCli(list, nodeB);
    
    if(indexA > indexB){
        nodeA = nodeB;
        nodeB = buscaNoCli(list, indexA);
        
        indexA = indexB;
        indexB = PercorreCli(list, nodeB);
    }
    
    NodeCli* pb = buscaNoCli(list, indexB-1);
    
    if(nodeA == list->head){
        list->head = nodeB;
    }
    
    else{
        //NodeCli pa = buscaNoCli(list, indexA-1);
        //pa->next = nodeB;
    }
    
    pb->next = nodeA;
    
    //node* pointer = nodeA->next;
    nodeA->next = nodeB->next;
    //nodeB->next = pointer;
    
}

int main() {
	ListMed* lm = createListMed();
	ListCli* lc = createListCli();
	
	Medicamento dataMed;
	Cliente dataCli;
	
	int opcao, id_med=0, id_cli=0;
	
	do {
		
	    opcao = Mostra_menu();
		
		switch (opcao) {
			
			case 1: { //cadastro de medicamento
			
				setbuf(stdin, NULL);
				printf("\nInsira o ID do medicamento:");
                scanf("%d", &dataMed.id);
                setbuf(stdin, NULL);       
                printf("Insira o nome do medicamento:");
                fgets(dataMed.nome, 50, stdin);
                setbuf(stdin, NULL);
				printf("Insira a quantidade desse medicamento:");
                scanf("%d", &dataMed.quantidade);
                setbuf(stdin, NULL);
				printf("Insira o preco do medicamento:");
                scanf("%f", &dataMed.preco);
                setbuf(stdin, NULL);       
                printf("Insira o laboratorio do medicamento:");
                fgets(dataMed.laboratorio, 100, stdin);
                setbuf(stdin, NULL);
				printf("Insira a dosagem desse medicamento:");
                scanf("%d", &dataMed.dosagem);
                setbuf(stdin, NULL);       
                printf("Insira a tarja do medicamento:");
                fgets(dataMed.tarja, 20, stdin);
				setbuf(stdin, NULL);       
                printf("Insira a data de validade do medicamento:");
                fgets(dataMed.data_de_validade, 10, stdin);
                
                cadastroMed(lm, dataMed);
                
				break;
			}
			
			case 2: { //exclusao de medicamento
			
				printf("\nInforme o id do medicamento: ");
				scanf("\n%d", &id_med);
				
				excluirMed(lm, id_med); 
				
				break;
			}
			
			case 3: { //listagem de medicamento
			
				listarMed(lm);
				
				break;
			}
			
			case 4: { //cadastro de cliente
				setbuf(stdin, NULL);
				printf("\nInsira o ID do cliente:");
                scanf("%d", &dataCli.id);
                setbuf(stdin, NULL);       
                printf("Insira o nome do cliente:");
                fgets(dataCli.nome, 50, stdin);
                setbuf(stdin, NULL);       
                printf("Insira o CPF do cliente:");
                fgets(dataCli.cpf, 11, stdin);
				setbuf(stdin, NULL);       
                printf("Insira o telefone do cliente:");
                fgets(dataCli.telefone, 11, stdin);
				setbuf(stdin, NULL);       
                printf("Insira o tipo sanguineo do cliente:");
                scanf("%c", &dataCli.tipo_sanguineo);
                setbuf(stdin, NULL);       
                printf("Insira o email do cliente:");
                fgets(dataCli.email, 30, stdin);
                setbuf(stdin, NULL);
                
				int op;
	
				do{
					printf("\nDeseja cadastrar algum medicamento? 1-Sim | 2-Nao \n");
					scanf("%d", &op);
					if(op == 1){
						printf("\nDigite o id do medicamento:");
						scanf("%d", &dataCli.medicamentos_comprados[contmed]);
						contmed++;
						
						//vamos salvar no campo clientes compraram do no do medicamento do id informado o id do cliente
						for (int i=0; i<contmed; i++){						
													
							if(dataCli.medicamentos_comprados[i] == dataMed.id){
								dataMed.clientes_compraram[contcli] = dataCli.id;
								dataMed.quantidade--;
								contcli++;
							}
						}
						
					}
					
				}while(op != 2);
				    
                cadastroCli(lc, dataCli);
                
				break;
			}
			
			case 5: { //exclusao de cliente
			
				printf("\nInforme o id do cliente: ");
				scanf("\n%d", &id_cli);
				
				excluirCli(lc, id_cli); 
				
				break;
			}
			
			case 6: { //listagem de cliente
			
				listarCli(lc);
				
				break;
			}
			
			case 7: { //busca de medicamento
				
				printf("\nInforme o id do medicamento: ");
				scanf("\n%d", &id_med);
								
				printf("\nId: %d\n", buscaNoMed(lm, id_med)->data.id);
				printf("Nome: %s", buscaNoMed(lm, id_med)->data.nome);
				printf("Quantidade: %d\n", buscaNoMed(lm, id_med)->data.quantidade);
				printf("Preco: %.2f", buscaNoMed(lm, id_med)->data.preco);
				printf("\nLaboratorio: %s", buscaNoMed(lm, id_med)->data.laboratorio);
				printf("Dosagem: %d\n", buscaNoMed(lm, id_med)->data.dosagem);
				printf("Tarja: %s", buscaNoMed(lm, id_med)->data.tarja);
				printf("Validade: %s\n", buscaNoMed(lm, id_med)->data.data_de_validade);
				
				//lista os clientes que compraram esse medicamento
				printf("Ids dos clientes que compraram esse medicamento: \n");
				
				for(int i=0; i<contcli; i++){
					//printf("|%d|\n", buscaNoMed(lm, id_med)->data.clientes_compraram[i]);
					printf("|%d|\n", dataMed.clientes_compraram[i]);
				}
								
				system("PAUSE");
				
				break;
			}
			
			case 8: { //busca de cliente
			
				printf("\nInforme o id do cliente: ");
				scanf("%d", &id_cli);
								
				printf("\nId: %d\n", buscaNoCli(lc, id_cli)->data.id);
				printf("Nome: %s", buscaNoCli(lc, id_cli)->data.nome);
				printf("CPF: %s", buscaNoCli(lc, id_cli)->data.cpf);
				printf("Telefone: %s", buscaNoCli(lc, id_cli)->data.telefone);
				printf("Tipo Sanguineo: %c \n", buscaNoCli(lc, id_cli)->data.tipo_sanguineo);
				printf("E-mail: %s", buscaNoCli(lc, id_cli)->data.email);
				printf("Medicamentos comprados: ");
				for(int i=0; i < contmed; i++){
					printf("| %d |", buscaNoCli(lc, id_cli)->data.medicamentos_comprados[i]);
				}
				printf("\n\n");
								
				system("PAUSE");				
				
				break;
			}
			
			case 9: { //sair
				
				break;
			}
			
			default: {
                printf("\n\nOpcao invalida!\n");
                break;
            } 
		}
		
	} while (opcao != 9);
}
