#include<stdio.h>

int ler(int a){
	printf("\n%i",&a);
	return a;
}

main(){
	int a,c,*p;
	char b;
	
	a=10;
	c=a;
	p=&a;
	
	printf("%d %d %d %i",a,c,*p,p);
	a=20;
	printf("\n%d %d %d",a,c,*p);
	printf("\n%i %i",&a,&b);
	a = ler(a);
	printf("\n%i",&a);
}
