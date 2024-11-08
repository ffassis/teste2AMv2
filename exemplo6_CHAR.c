#include <stdio.h>

int main(){
	int i,j;
	char nomes[255];
	
	for(i=0; i<300; i++){
		nomes[i]=i;
		printf("%c ", nomes[i]);
		if(i%20==0)
			printf("\n");
	}
	
	return 0;
}
