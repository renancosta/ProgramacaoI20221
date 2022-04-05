#include<stdio.h>
#include<locale.h>

main (){
	setlocale(LC_ALL, "Portuguese"); 
	int idade;
	
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
}
