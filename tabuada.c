#include<stdio.h>
#include<conio.h>
void main(){
	int num;
	printf("Informe um numero:");
	scanf("%d",&num);
	int n1= num+1;
	int n2= n1+1;
	int n3= n2+1;
	int n4= n3+1;
	// soma das variaveis//
	int mn1= num*2;
	int mn2= n1*2;
	int mn3= n2*2;
	int mn4= n3*2;
	int mn5= n4*2;
	// multiplicação das variaveis por 2//
	printf("%d x 2 = %d\n",num,mn1);
	printf("%d x 2 = %d\n",n1,mn2);
	printf("%d x 2 = %d\n",n2,mn3);
	printf("%d x 2 = %d\n",n3,mn4);
	printf("%d x 2 = %d\n",n4,mn5);
	getch();
}
