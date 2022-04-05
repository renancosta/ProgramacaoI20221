#include<stdio.h>
#include<locale.h>

main (){
	setlocale(LC_ALL, "Portuguese"); 
	int num, idade, altura, peso;
	char opcao;
	
	printf("Programas auxiliares");
	printf("\na- Programa Cadeirinha");
	printf("\nb- Programa Posso Dirigir?");
	printf("\nc- Programa de Par ou Impar");
	scanf("\n%c",&opcao);
	
	switch(opcao){
		case 'a':
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
			break;
		case 'b':
			printf("Informe sua idade: ");
			scanf("%d",&idade);
			
			if(idade>=16){
				if(idade>=21){
					printf("Você pode comprar bebidas e dirigir");
				} else {
					printf("Você pode dirigir, mas não pode comprar bebidas");
				}
			} else {
				printf("Você ainda não pode comprar bedidas e nem dirigir");
			}
			break;
		case 'c':
			printf("Informe um número: ");
			scanf("%d",&num);
			num%2==0?printf("par"):printf("impar");
			break;
		default:
			printf("Opção inválida!");
	}

}
