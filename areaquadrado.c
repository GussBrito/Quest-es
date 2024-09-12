#include<stdio.h>
void main(){
	float lado;
	printf("Informe o valor do lado do quadrado:");
	scanf("%f", &lado);
	float area = lado * lado;
	float perimetro = 4 * lado;
	printf("O valor area eh %f \n O valor do predimetro eh %f" ,area,perimetro);
	getch();
}

