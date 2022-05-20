#include<stdio.h>

#include<stdlib.h>

#include<math.h>

int main()

{

    int N,soma,cont,aux;

    printf("Digite um numero?\n");

    scanf("%d",&aux);

    N = pow(2,aux);//potência

    if(N >= 3)

    {    

        soma=0;

        for(cont=1;cont<=N;cont++)

            soma = soma+(cont-2);

        printf("Salvador2\n");

    }

    else

    {

        soma=0;

        for(cont=1;cont<=N;cont++)

            soma = soma+(cont+2);   

        printf("Melo\n");

    }

    system("pause");

    return 0;
}

