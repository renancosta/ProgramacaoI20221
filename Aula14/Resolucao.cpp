#include<stdio.h>

mm(int *v,int x,int *mi,int *ma){
	*mi=v[0];
	*ma=v[0];
	for(int i=1;i<x;i++){
		if(*mi>v[i]){
			*mi=v[i];
		}
		if(*ma<v[i]){
			*ma = v[i];
		}
	}
}

main(){
	int v[6]={-100,99900,-50000,100,4,5},min,max;
	mm(v,(sizeof(v)/sizeof(int)),&min,&max);
	printf("Max: %d\nMin: %d",min,max);
}
