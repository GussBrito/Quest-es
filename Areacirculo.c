#include<stdio.h>
#include<conio.h>
#include<math.h>

const float pi=3.14;
void main(){
	float raio;
	printf("Informe o raio:");
	scanf("%f" ,&raio);
	float area = pi * pow(raio,2);
	float comprimento = 2 * pi * raio;
	printf("A area eh %.2f e o comprimento eh %.2f\n" ,area,comprimento);
	getch();
	
}
