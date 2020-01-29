#include<stdio.h>
int main (){
	int num, acum=1;
	printf("Para sair pressione 99999.\n\n");
	while(num!=99999) {
		printf("Digite um numero: ");
		scanf("%d",&num);
		while((acum*acum)<num) {
			acum++;
		}
		if((acum*acum)==num) {
			printf("E um quadrado perfeito!\n\n\n");
			acum=0;
		}
		else {
			printf("Nao e um quadrado perfeito!\n\n\n");
			acum=0;
		}
	}
}
