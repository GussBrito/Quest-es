#include<stdio.h>
#include<conio.h>
void main(){
	int num,k;
	printf("Informe um num:");
	scanf("%d",&num);
	for(k=1;k<=num;k++){
		int impar = (k*2)-1;
		printf("%d ",impar);
		}
	getch();
}
