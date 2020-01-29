#include<stdio.h>
#include<math.h>
int main () {
	float salario, desconto;
	int filhos;
	printf("Insira o valor de seu salario: \n");
	scanf("%f",&salario);
	printf("Insira quantos filhos voce tem: \n");
	scanf("%d",&filhos);
	printf("Seu salario e RS%.2f.\n",salario);
	if(salario<500) {
		desconto=salario*4/100;
		salario=salario-desconto;
		salario=salario+(filhos*50);
	}
	else if(salario>500 && salario<=1500) {
		desconto=salario*8/100;
		salario=salario-desconto;
		salario=salario+(filhos*50);
	}
	else if(salario>1500 && salario <=3750) {
		desconto=salario*12/100;
		salario=salario-desconto;
		salario=salario+(filhos*50);
	}
	else if(salario>3750) {
		desconto=salario*15/100;
		salario=salario-desconto;
		salario=salario+(filhos*50);
	}
	printf("O desconto foi de RS%.2f\n",desconto);
	printf("O salario ajustado e: %.2f, incluindo RS%d sendo RS50,00 por filho.\n ", salario, filhos*50);
}
