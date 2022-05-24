#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct hm { 
	int horas; 
	int minutos; 
};

hm converteTempo(int minutos){
	hm tempo;
	tempo.horas = minutos/60;
	tempo.minutos = minutos%60;
	return tempo;
}

main(){
	hm converte;
	int min;
	printf("Informe um tempo em minutos a ser convertido: ");
	scanf("%d",&min);
	converte = converteTempo(min);
	printf("\nHora: %d - Minutos: %d",converte.horas,converte.minutos);
}
