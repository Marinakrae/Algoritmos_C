#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int n_id;
	float n1, n2, n3, m_exerc, m_aprov;
	char conceito;
	
	printf("Numero de identificacao: ");
	scanf("%d", &n_id);
	printf("Nota 1: ");
	scanf("%f", &n1);
	printf("Nota 2: ");
	scanf("%f", &n2);
	printf("Nota 3: ");
	scanf("%f", &n3);
	printf("Media dos exercicios: ");
	scanf("%f", &m_exerc);
	
	m_aprov = (n1 + (n2*2) + (n3*3) + m_exerc)/7;
	
	if(m_aprov>= 90){
		conceito = 'A';
	} else if(m_aprov >= 75 && m_aprov < 90){
		conceito = 'B';
	} else if(m_aprov >= 60 && m_aprov < 75){
		conceito = 'C';
	} else if(m_aprov >= 40 && m_aprov < 60){
		conceito = 'D';
	} else if(m_aprov < 40){
		conceito = 'E';
	}
	
	system("cls");
	
	printf("Numero do aluno: %d\n", n_id);
	printf("Nota 1 - %.2f \nNota 2 - %.2f \nNota 3 - %.2f\n", n1, n2, n3);
	printf("Media dos exercicios: %.2f\n", m_exerc);
	printf("Media de aproveitamento: %.2f\n", m_aprov);
	printf("Conceito: %c\n", conceito);
	
	if(conceito == 'D' || conceito == 'E'){
		printf("Reprovado");
	} else {
		printf("Aprovado");
	}
}

