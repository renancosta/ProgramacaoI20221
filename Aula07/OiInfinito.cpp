#include<stdio.h>
main(){
	int i=0, notas[100],continuar=0;
	char nome[100];
	
	printf("Informe o seu nome: ");
	scanf("%s", &nome);
	
	do{
		printf("Informe a nota %d: ",i+1);
		scanf("%d",&notas[i]);
		printf("Deseja continuar? 0-Nao/1-Sim: ");
		scanf("%d",&continuar);
		i++;
	}while(continuar);

	printf("Notas: ");
	for(int j=0;j<i;j++){
		printf("%d ",notas[j]);
	}
	
	/*while(1){
		printf("Oi %d\n",i);
		i++;
	}*/
}
