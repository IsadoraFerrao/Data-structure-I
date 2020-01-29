#include<stdio.h>
#include<math.h>
int main () {
	int sexo[25], idade[25], experiencia[25], cont;
	int homens=0, mulheres=0;
	float idade_media_homens=0, idade_media_mulheres=0;
	int cont_idade_homens=0, cont_idade_mulheres=0;
	int menor_idade, cont2, cont_porcento=0, numero_homens_30=0;
	float porcentagem;
	for(cont=0;cont<25;cont++) {
		printf("DIGITE OS DADOS DO CANDIDATO %d:\n",cont+1);
		printf("Sexo: (1)Masculino ou (2)Feminino: ");
		scanf("%d",&sexo[cont]);
		while((sexo[cont]!=1)&&(sexo[cont]!=2)) {
			printf("Invalido, digite novamente! ");
			scanf("%d",&sexo[cont]);
		}
			switch (sexo[cont]) {
				case 1:
					homens++;
					break;
				case 2:
					mulheres++;
					break;
		}
		printf("Insira sua idade: ");
		scanf("%d", &idade[cont]);
		printf("Experiencia: (1) Sim ou (2) Nao: ");
		scanf("%d",&experiencia[cont]);
		while((experiencia[cont]!=1)&&(experiencia[cont]!=2)){
			printf("Invalido, digite novamente! ");
			scanf("%d",&experiencia[cont]);
		}
		switch (experiencia[cont]) {
			case 1:
				if (sexo[cont]==1) {
					idade_media_homens=idade_media_homens+idade[cont];
					cont_idade_homens++;
				}
				else if (sexo[cont]==2) {
					idade_media_mulheres=idade_media_mulheres+idade[cont];
					cont_idade_mulheres++;
				}
				break;
			case 2:
				break;
		}
		printf("\n");
	}
	for(cont=0;cont<25;cont++) {
		for (cont2=0;cont2<25;cont2++) {
			if((idade[cont]<idade[cont2])&&(sexo[cont]==2)&&(experiencia[cont]==1)) {
				menor_idade=idade[cont];
			}
		}
	}
	for(cont=0;cont<25;cont++) {
		if((idade[cont]>45)&&(sexo[cont]==1)) {
			cont_porcento++;
		}	
	}
	for(cont=0;cont<25;cont++) {
		if((idade[cont]<30)&&(sexo[cont]==1)&&(experiencia[cont]==2)) {
			numero_homens_30++;
		}	
	}	
	porcentagem=cont_porcento*100/homens;
	idade_media_homens=idade_media_homens/cont_idade_homens;
	idade_media_mulheres=idade_media_mulheres/cont_idade_mulheres;
	printf("Entre os 25 canditados %d sao homens e %d sao mulheres!\n", homens, mulheres);
	printf("A idade media das mulheres com experiencia e: %.2f anos.\n", idade_media_mulheres);
	printf("A idade media dos homens com experiencia e: %.2f anos.\n", idade_media_homens);
	printf("A menor idade das mulheres com experiencia e: %d anos.\n", menor_idade);
	printf("A porcentagem de homens a partir de 45 anos e: %.2f.\n", porcentagem);
	printf("Existem %d candidatos homens com idade inferior a 30 anos e sem experiencia.\n", numero_homens_30);
}
