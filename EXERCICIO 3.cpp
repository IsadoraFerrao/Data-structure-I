#include<stdio.h>
int main () {
	float vetor[30], media;
	int cont, totalacima=0, totalabaixo=30;
	for (cont=0;cont<30;cont++) {
		printf("Digite um valor para o vetor[%d]: ", cont+1);
		scanf("%f", &vetor[cont]);
		media=media+vetor[cont];
	}
	media=media/30;
	printf("A Media Aritmetica e: %.2f \n",media);
	for(cont=0;cont<30;cont++) {
		if (vetor[cont] > media) {
			printf("O vetor[%d]=%f esta acima da media!\n", cont,vetor[cont]);
			totalacima++;
		}
	}
	printf("O total de vetores acima da media foi de: %d \n", totalacima);
	totalabaixo=totalabaixo-totalacima;
	printf("O total de vetores abaixo da media foi de: %d \n", totalabaixo);
}
