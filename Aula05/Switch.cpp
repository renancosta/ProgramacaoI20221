#include<stdio.h>
#include<locale.h>

main (){
	setlocale(LC_ALL, "Portuguese");
	int dia;
	char opcao;
	
	printf("Dias\n");
	printf("1 - Segunda\n");
	printf("2 - Ter�a\n");
	printf("3 - Quarta\n");
	printf("4 - Quinta\n");
	printf("5 - Sexta\n");
	printf("6 - S�bado\n");
	printf("7 - Domingo\n");
	
	printf("Informe um dia: ");
	scanf("%d",&dia);	
	
	switch(dia){
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("Dia �til");
			break;
		case 6:
		case 7:
			printf("Final de semana!");
			break;
		default:
			printf("Op��o Inv�lida!");
			break;
	}
	
}
