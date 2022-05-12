#include <stdio.h>
#include <string.h>

int main(void){
    char palavra[10];
    int tamanho, i, j=0, erro=0;
    fgets(palavra, 50, stdin);
    tamanho = strlen(palavra)-2;

    for(i=tamanho; i>=(tamanho/2); i--){
        if(palavra[i] == palavra[j]){
            j++;
        }else{
            erro++;
        }
    }

    if(erro == 0){
        printf("palindrome");
    } else{
        printf("nao palindrome");
    }

}
