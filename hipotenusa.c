#include <stdio.h>
#include <conio.h>
#include <math.h>

float cateto1,cateto2;
void main(){
	printf("Informe o valor do cateto 1:");
	scanf("%f" ,&cateto1);
	printf("informe o valor do cateto 2");
	scanf("%f" ,&cateto2);
	float soma = pow(cateto1,2)+(cateto2,2);
	float hipotenusa = sqrt(soma);
	printf("O valor da hipotenusa eh %.1f \n" ,hipotenusa);
	getch();
	
	
}
