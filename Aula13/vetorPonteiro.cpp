#include <stdlib.h> 
#include <stdio.h>
#include <conio.h>

imprimeNome(char *nome){
	printf("%s",nome);
}

int main() { 
int i; 
int *v;
char *nome;
nome = (char*)malloc(sizeof(char)*100); 

 gets(nome);
 imprimeNome(nome);
 
// 'v' � um ponteiro para uma �rea que tem 10 inteiros
v = (int*)malloc(sizeof(int)*10); // 'v' funciona exatamente como um vetor 
v[0] = 10; 
v[1] = 11; 
v[2] = 12; // continua... 
v[9] = 19; 
for(i = 0; i < 10; i++) 
	printf("v[%d]: %d\n", i, v[i]); 
printf("Endere�o de 'v': %p", v); // imprime o endere�o da �rea alocada para 'v� 
free(v); 
}

