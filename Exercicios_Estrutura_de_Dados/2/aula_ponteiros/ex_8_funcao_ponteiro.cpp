#include <stdio.h>

void soma(int *a){
	*a = *a + 10;
}

int main(void) {
	int var = 14;
	
	soma(&var);
	
	printf("%d\n", var);
}
