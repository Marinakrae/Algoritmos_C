#include <stdio.h>

int main (void){
	
	int resp, cont=0;
	
	printf("Digite 1 para 'sim' e 2 para 'nao' \n");
	
	printf("Telefonou para a vitima? ");
	scanf("%d", &resp);
	
	if(resp==1){
		cont++;
	}
	
	printf("Esteve no local do crime? ");
	scanf("%d", &resp);
	
	if(resp==1){
		cont++;
	}
	
	printf("Mora perto da vitima? ");
	scanf("%d", &resp);
	
	if(resp==1){
		cont++;
	}
	
	printf("Devia para a vitima? ");
	scanf("%d", &resp);
	
	if(resp==1){
		cont++;
	}
	
	printf("Já trabalhou com a vitima? ");
	scanf("%d", &resp);
	
	if(resp==1){
		cont++;
	}
	
	if (cont==2){
		printf("Suspeita\n");
		
	} else if (cont==3 || cont==4){
		printf("Cumplice\n");
		
	} else if (cont ==5) {
		printf("Assassino\n");
		
	} else {
		printf("Inocente\n");
	}
}
