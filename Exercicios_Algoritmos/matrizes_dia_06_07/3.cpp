#include <stdio.h>

int main (void) {
	
	int a[4][4], b[4][4], c[4][4];
	int l, c;
	
	printf("A: \n");
	
	for(l=0; l<4; l++){
		for(c=0; c<4; c++){
			scanf("%d", &a[l][c]);
		}
	}
	
	printf("B: \n");
	
	for(l=0; l<4; l++){
		for(c=0; c<4; c++){
			scanf("%d", &b[l][c]);
		}
	}
	
	
}
