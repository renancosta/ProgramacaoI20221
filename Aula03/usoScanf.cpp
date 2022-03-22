#include<stdlib.h>
#include<stdio.h>

main(){
	int idade1,idade2;
	float altura1,altura2;
	printf("Pessoa 1\n");
	printf("Informe sua idade: ");
	scanf("%d",&idade1);
	printf("Informe sua altura: ");
	scanf("%f",&altura1);
	printf("\nPessoa 2\n");
	printf("Informe sua idade: ");
	scanf("%d",&idade2);
	printf("Informe sua altura: ");
	scanf("%f",&altura2);
	printf("Pessoa 1\nIdade: %d\nAltura %.2f",idade1,altura1);
	printf("\nPessoa 2\nIdade: %d\nAltura %.2f",idade2,altura2);
}
