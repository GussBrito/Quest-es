#include<stdio.h>
#include<conio.h>
void main(){
	int m,n,k;
	printf("informe dois numeros int:");
	scanf("%d %d",&m,&n);
	int cont=0;
	int soma=0;
	for(k=m;k<=n;k++){
		cont=cont+1;
		soma=soma+k;
	}
	float media=soma/cont;
	printf("a media entre esses numeros eh %.1f",media);
	getch();
}
