#include<stdio.h>
#include<stdlib.h>

main(){
	float nota, notaMenor=10, notaMaior=0,soma=0, media;
	int i,limite;
	printf("Informe a quantidade de notas que deseja informar: ");
	scanf("%d",&limite);
	for(i=1;i<=limite;i++){
		printf("Informe a nota %d: ",i);
		scanf("%f",&nota);
		soma+=nota;
		if(nota<notaMenor){
			notaMenor = nota;
		}
		if(nota>notaMaior){
			notaMaior = nota;
		}
	}
	media = soma/limite;
	printf("Nota menor: %f\nNota maior: %f\nMedia: %f",notaMenor,notaMaior,media);
}
