#include<stdio.h>
#include<conio.h>
void main(){
	int n,k;
	int fatorial=1;
	printf("informe um numero:");
	scanf("%d",&n);
	for(k=n;k>=1;k--){
		fatorial=fatorial*k;
		printf("%d\n  ",fatorial);
	}
	getch();
}

