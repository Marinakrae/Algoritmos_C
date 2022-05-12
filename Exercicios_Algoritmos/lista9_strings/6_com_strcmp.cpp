#include<stdio.h>
#include<string.h>

int main(void){

    char palavra1[10], palavra2[10];

    fgets(palavra1, 50, stdin);
    fgets(palavra2, 50, stdin);

    strcmp(palavra1,palavra2) > 1 ? printf("%s\n%s\n", palavra2, palavra1) : printf("%s\n%s\n",palavra1, palavra2);

}
