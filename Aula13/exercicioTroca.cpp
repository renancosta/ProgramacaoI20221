#include <stdio.h>
#include<stdlib.h>

/*Faça uma função que troque os valores de duas variáveis inteiras
A função irá receber duas variáveis inteiras e realiza a 
troca de valores entre ela. Exemplo x=10 e y=20 ficaria x=20 e y=10
Irá imprimir os valores das variáveis na função principal main() 
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
