#include<string.h>
#include<stdio.h>
#include<stdlib.h>

main(){
	char palavra[100],pInvertida[100];
	gets(palavra);
	strcpy(pInvertida,palavra);
	int tamanhoS = strlen(palavra); 
	for(int i=0;i<tamanhoS;i++){
		if((palavra[i]>64 and palavra[i]<91) || (palavra[i]>96 and palavra[i]<123)){
			palavra[i] += 3;
		}
	}
	
	printf("%s",palavra);
	
	for(int i=0;i<tamanhoS;i++){
		pInvertida[i]=palavra[(tamanhoS-i)-1];
	}
	
	printf("\n%s",pInvertida);
	
	for(int i=(tamanhoS/2);i<tamanhoS;i++){
		pInvertida[i] -= 1;
	}
	
	printf("\n%s",pInvertida);
}
