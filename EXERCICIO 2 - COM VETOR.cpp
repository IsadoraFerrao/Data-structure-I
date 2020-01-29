#include<stdio.h>
int main () {
	int num[3],cont=0;
	while(cont<3) {
		printf("Insira 3 valores:");
		scanf("%d", &num[cont]);
		cont++;
	}
	if ((num[0])>(num[1]) && (num[0])>(num[2])) {
		printf("O numero %d e o maior!\n\n",num[0]);
	}
	else if ((num[1])>(num[0]) && (num[1])>(num[2])) {
		printf("O numero %d e o maior!\n\n",num[1]);
	}
	else if ((num[2])>(num[0]) && (num[2])>(num[1])) {
		printf("O numero %d e o maior!\n\n",num[2]);
	}
}
