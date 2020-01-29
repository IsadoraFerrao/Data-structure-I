#include<stdio.h>
#include<math.h>
int main () {
	int Primos();
	Primos();
}
int Primos () {
	int num, cont, acum=0;
	printf("OS NUMEROS PRIMOS ATE 1000 SAO:\n\n");
	for(num=2;num<1000;num++) {
		for (cont=1;cont<=num;cont++) {
			if(num%cont==0){
				acum++;
			}	
		}
		if(acum==2) {
			printf("%d ", num);
		}
		cont=1;
		acum=0;
	}
}
