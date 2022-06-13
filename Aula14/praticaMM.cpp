#include<stdio.h>
#include<stdlib.h>

mm(int *v,int *max, int *min){
	for(int i=0;i<sizeof(v);i++){
		printf("%d",v[i]);
	}
}
main(){
	int *v=(int*)malloc(sizeof(int)*10);
	v[0]=0;
	v[1]=1;
	v[2]=2;
	v[3]=3;
	v[4]=4;
	v[5]=5;
	v[6]=6;
	v[7]=7;
	v[8]=8;
	v[9]=9;
	printf("%d\n",sizeof(v));
	int max,min;
	mm(v,&max,&min);
	printf("Max: %d\nMin: %d",max,min);
}
