#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

main(){
	char texto[100],textoM[100];
	
	printf("Informe um texto: ");
	gets(texto);
	
	for(int i=0;i<strlen(texto);i++){
		textoM[i] = texto[i]-32;
	}
	
	printf("%s",textoM);
}
