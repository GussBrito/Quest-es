#include<stdio.h>
#include<conio.h>
void main(){
	int n1,n2,n3,n4;
	printf("informe quatro numeros inteiros:\n");
	scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
	if(n1+n2==n3 && n3+n1==n4){
		printf("PA");
	}
	else if(n1*n1==n2 && n2*n1==n3 && n3*n1==n4){
		printf("PG");
	}
	else{
		printf("Nao eh PA nem PG");
	}
	getch();
}
