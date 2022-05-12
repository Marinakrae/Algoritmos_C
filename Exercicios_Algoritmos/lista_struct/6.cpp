#include <stdio.h>
#include <string.h>

struct gastos {
	float agua;
	float luz;
	float telefone;
};

int main (void){
	
	struct gastos g[12]; 
	int maior_a=0, maior_l=0, maior_t=0;
	float m_agua=0, m_luz=0, m_tel=0;
	
	printf("Informe os gastos de cada mes: \n");
	
	for(int i=0; i<12; i++){
		printf("\nMes %d: \n", i+1);
		
		printf("Agua: ");
		scanf("%f", &g[i].agua);
		
		printf("Luz: ");
		scanf("%f", &g[i].luz);
		
		printf("Telefone: ");
		scanf("%f", &g[i].telefone);
		
		if(g[i].agua > maior_a){
			maior_a = i;
		}	
		if(g[i].luz > maior_l){
			maior_l = i;
		}		
		if(g[i].telefone > maior_t){
			maior_t = i;
		}
		
		m_agua = m_agua + g[i].agua;
		m_luz = m_luz + g[i].luz;
		m_tel = m_tel + g[i].telefone;
	}
	
	printf("\nMes de maior gasto com agua: %d\n", maior_a);
	printf("Mes de maior gasto com luz: %d\n", maior_l);
	printf("Mes de maior gasto com telefone: %d\n", maior_t);
	
	printf("\nMedia de gasto de cada categoria: \n");
	printf("Agua: %.2f\n", m_agua/12);
	printf("Luz: %.2f\n", m_luz/12);
	printf("Telefone: %.2f\n", m_tel/12);
	
}
