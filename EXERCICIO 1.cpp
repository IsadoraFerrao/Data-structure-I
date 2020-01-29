#include<stdio.h>
int main () {
	float nota=0, media;
	int cont=0;
	while(nota!=(-1)) {
		printf("Digite a nota: ");
		scanf("%f",&nota);
		if(nota!=(-1)) {
			media=media+nota;
			cont++;
		}
	}
	media=media/cont;
	printf("A media aritmetica é: %.2f ", media);
}
