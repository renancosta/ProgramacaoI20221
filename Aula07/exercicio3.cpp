#include<stdio.h>
#include<stdlib.h>

/*Faça um programa que leia 10 valores inteiros. A seguir mostre quantos valores digitados 
foram pares, quantos valores digitados foram ímpares, 
quantos valores digitados foram positivos e 
quantos valores digitados foram negativos.

*/
main(){
	int num,par=0,impar=0,positivo=0,negativo=0,continua=0;
	do{
		printf("Digite um valor inteiro: ");
		scanf("%d",&num);
		if(num>=0){
			positivo++;
		} else{
			negativo++;
		}
		if(num%2==0){
			par++;
		}else{
			impar++;
		}
		printf("Deseja informar mais um número: 0-Não/1-Sim");
		scanf("%d",&continua);
	}while(continua);
	printf("Num par: %d\nNum impar: %d\nNum Negativo: %d\nNum Positivo:%d",par,impar,negativo,positivo);
}
