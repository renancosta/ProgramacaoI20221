#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() { 
	setlocale(LC_ALL, "Portuguese"); 
	float idade, peso, altura; 
	printf("Introduza o valores de idade,peso e altura separando por espaço: "); 
	scanf("%f %f %f",&idade,&peso,&altura); 
	printf("Idade: %f\nPeso: %f\nAltura: %f",idade,peso,altura); 
	//lei da cadeirinha 
	if(idade<1 && peso<13) { 
		printf("\nBebê conforto"); 
	} else if (idade>1 && idade<4 && peso>9 && peso<18){
		printf("\nCadeirinha"); 
	} else if (idade>4 && idade<7.5 && altura<1.45 && peso>15 && peso<36){
		printf("\nAssento de elevação"); 
	} else if (idade>7.5 && idade<10 && altura<1.45){ 
		printf("\nBanco traseiro com cinto de segurança"); 
	} else { 
		printf("\nPode ocupar qualquer assento"); 
	} 
}

