#include<stdio.h>
#include<locale.h>

main (){
	setlocale(LC_ALL, "Portuguese"); 
	int idade;
	
	printf("Informe sua idade: ");
	scanf("%d",&idade);
	
	if(idade>=16){
		if(idade>=21){
			printf("Voc� pode comprar bebidas e dirigir");
		} else {
			printf("Voc� pode dirigir, mas n�o pode comprar bebidas");
		}
	} else {
		printf("Voc� ainda n�o pode comprar bedidas e nem dirigir");
	}
}
