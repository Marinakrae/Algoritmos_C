#include <stdio.h>

int main (){
    int vA[999999], j=-1, i;
    int *pA;
    pA = vA;

    do{
        j++;
        printf("Digite um numero: ");
        scanf("%d", &vA[j]);


    }while(vA[j--] != -1);

    for(i=0; i<j; i++){
        printf("Pos %d = %d", i, *(pA+i));
    }

}
