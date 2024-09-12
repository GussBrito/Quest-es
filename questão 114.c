#include<stdio.h>
#include<conio.h>
void main(){
	int k,m,n;
	int potencia=1;
	printf("informe um numero:");
	scanf("%d",&m);
	printf("informe outro numero:");
	scanf("%d",&n);
	for(k=1;k<=n;k++){
		potencia=potencia*m;
		printf("%d ", potencia);
	}
	getch();
}
