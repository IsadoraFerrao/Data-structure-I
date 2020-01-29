#include<stdio.h>
int main () {
	int N1,N2,N3;
	printf("Insira um valor para N1:");
	scanf("%d", &N1);
	printf("Insira um valor para N2:");
	scanf("%d", &N2);
	printf("Insira um valor para N3:");
	scanf("%d", &N3);
	if (N1>N2 && N1>N3) {
		printf("O numero %d e o maior!\n\n",N1);
	}
	else if (N2>N1 && N2>N3) {
		printf("O numero %d e o maior!\n\n",N2);
	}
	else if (N3>N1 && N3>N2) {
		printf("O numero %d e o maior!\n\n",N3);
	}
}
