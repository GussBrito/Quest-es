#include <stdio.h>
#include <conio.h>
#include <math.h>
const float pi=3.14;
float raio;
void main(){
	printf("Informe o valor do raio:");
	scanf("%f" ,&raio);
	float area = pi*pow(raio,2);
	float comprimento = 2*pi*raio;
	printf("A area eh: %.1f \n" ,area);
	printf("\n O raio eh: %.1f" ,comprimento);
	getch();
	
}
