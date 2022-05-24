/*Elabore uma função que receba três notas de um aluno 
como parâmetro e uma letra. Se a letra for ‘A’, 
a função deve calcular a média aritmética das notas do aluno; 
se a letra for ‘P’, deverá calcular a média ponderada, 
com pesos 5, 3 e 2. Retorne a média calculada para o programa principal.
*/
#include<stdio.h>
#include<stdlib.h>

double calculaMedia2(double nota1,double nota2, double nota3,char tipoMedia){
	double media=0;
	switch(tipoMedia){
		case 'A':
			media = (nota1+nota2+nota3)/3;
			return media;
		case 'P':
			media = (nota1*5+nota2*3+nota3*2)/10;
			return media;
		default:
			printf("Tipo informado invalido\n");
			return 0;
	}
}

double calculaMedia(double nota1,double nota2, double nota3,char tipoMedia){
	double media=0;
	switch(tipoMedia){
		case 'A':
			media = (nota1+nota2+nota3)/3;
			break;
		case 'P':
			media = (nota1*5+nota2*3+nota3*2)/10;
			break;
		default:
			printf("Tipo informado invalido\n");
			break;
	}
	return media;
}

main(){
	double n1,n2,n3;
	char opcao;
	
	printf("Informe a nota 1: ");
	scanf("%lf",&n1);
	printf("\nInforme a nota 2: ");
	scanf("%lf",&n2);
	printf("\nInforme a nota 3: ");
	scanf("%lf",&n3);
	printf("\nEscolha uma das opcoes para calcula da media:");
	printf("\nA - Aritmetica");
	printf("\nP - Ponderada");
	scanf(" %c",&opcao);
	printf("\nResultado: %lf",calculaMedia(n1,n2,n3,opcao));
	printf("\nResultado: %lf",calculaMedia2(n1,n2,n3,opcao));
}
