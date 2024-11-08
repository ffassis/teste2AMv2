#include <stdio.h>
int main(void) {
	int i=0, maior=0, soma=0, v[10];
	
	for(i=0; i<10; i++){
		printf("Digite o %dº valor: ", i+1);
		scanf("%d", &v[i]);
		soma = soma + v[i];
	}
	
	maior = v[0];
	for(i=0; i<10; i++) //imprimindo o vetor
		printf("| %d ", v[i]);
	//imprimindo os pares
	printf("|\n\n");
	for(i=0; i<10; i++)
		if(v[i]%2 == 0 && v[i]!=0)
			printf("| %d ", v[i]);
		
	for(i=0; i<10; i++)
		if(v[i]>maior)
			maior = v[i];
		
	printf("|\nSoma: %d\nMaior: %d", soma, maior);
	return 0;
}
