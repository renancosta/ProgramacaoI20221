#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct{
	int matricula;
	double n1,n2,n3;
} Aluno;

imprimeAluno(Aluno a){
	printf("\nMatricula: %d",a.matricula);
	printf("\nNota 1: %lf",a.n1);
	printf("\nNota 2: %lf",a.n2);
	printf("\nNota 3: %lf",a.n3);
}

double calculaMedia(double nota1,double nota2, double nota3,char tipoMedia){
	double media=0;
	switch(tipoMedia){
		case 'A':
			media = (nota1+nota2+nota3)/3;
			break;
		case 'P':
			media = (nota1*5+nota2*3+nota3*2)/10;
			break;
		default:
			printf("Tipo informado invalido\n");
			break;
	}
	return media;
}

main(){
	Aluno alunos[3];
	
	for(int i=0;i<3;i++){
		printf("Informe a matricula do aluno %d: ",i+1);
		scanf("%d",&alunos[i].matricula);		
		printf("Informe a nota 1: ");
		scanf("%lf",&alunos[i].n1);
		printf("Informe a nota 2: ");
		scanf("%lf",&alunos[i].n2);
		printf("Informe a nota 3: ");
		scanf("%lf",&alunos[i].n3);
	}
	
	for(int i=0;i<3;i++){
		imprimeAluno(alunos[i]);
		printf("%lf",calculaMedia(alunos[i].n1,alunos[i].n2,alunos[i].n3,'A'));
	}
}
