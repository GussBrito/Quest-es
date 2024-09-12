#include<stdio.h>
#include<conio.h>
void main(){
	int m;
	int n;
	printf("Informe dois numeros inteiros:");
	scanf("%d %d",&n,&m);
	if(n%m==0){
		printf("O numero %d eh multiplo de %d",n,m);
	}
	else{
		printf("O numero %d não eh multiplo de %d",n,m);
	}
	getch();
}
