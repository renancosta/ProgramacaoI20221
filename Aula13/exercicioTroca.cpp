#include <stdio.h>
#include<stdlib.h>

/*Fa�a uma fun��o que troque os valores de duas vari�veis inteiras
A fun��o ir� receber duas vari�veis inteiras e realiza a 
troca de valores entre ela. Exemplo x=10 e y=20 ficaria x=20 e y=10
Ir� imprimir os valores das vari�veis na fun��o principal main() 
antes da troca e depois da troca
*/

troca(int *p1, int *p2){
	int z;
	z = *p1;
	*p1=*p2;
	*p2=z;
}

main (){
	int x=10,y=20;
	
	printf("%d %d",x,y);
	troca(&x,&y);
	printf("\n%d %d",x,y);
}
