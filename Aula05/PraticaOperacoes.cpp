#include<stdio.h>
#include<locale.h>

main (){
	setlocale(LC_ALL, "Portuguese");
	float num1,num2;
	int opcao;
	
	printf("Informe um número: ")
	scanf("%f",&num1);	
	printf("Informe um número: ")
	scanf("%f",&num1);
	
	scanf("%d",&opcao);
	switch(opcao){
		case 1:
			printf("%f",num1+num2);
			break;
		case 2:
			printf("%f",num1-num2);
			break;
		case 3:
			printf("%f",num1*num2);
			break;
		case 4:
			printf("%f",num1/num2);
			break;
	}
	
}
