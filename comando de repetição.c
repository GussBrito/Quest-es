#include<stdio.h>
#include<conio.h>
void main(){
	int m,n,k;
	printf("informe um intervalo:");
	scanf("%d%d",&m,&n);
	int soma=0;
	int media=0;
	for(k=m;k<=n;k++){
		soma= soma + k;
		media= soma/k;
	}
	printf("A media eh %d",media);
	getch();
}
