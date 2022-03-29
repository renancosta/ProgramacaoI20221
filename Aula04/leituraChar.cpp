#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 
#include <conio.h> //biblioteca conio

int main() { 
setlocale(LC_ALL, "Portuguese"); 
char c1, c2, c3; 
printf("Informe o primeiro caractere: "); 
c1 = getchar(); //leitura de char pela biblioteca stdio, necessário apertar enter 

printf("\nInforme o segundo caractere: "); 
c2 = getch(); //leitura de char pela biblioteca conio, não há necessidade de apertar o enter e não mostra o caractere digitado 

printf("\nInforme o terceiro caractere: "); 
c3 = getche(); //leitura de char pela biblioteca conio, não há necessidade de apertar o enter e mostra o caractere digitado 

system("PAUSE"); 
}

