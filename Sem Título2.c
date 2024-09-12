#include <stdio.h>
#include <conio.h>
#include <math.h>

void main (){
	float lado;
	printf ("Informe o valor do lado:");
	scanf ("%f", &lado);
	float area = pow(lado,2);
	float perimetro = lado*4;
	printf ("Sua area eh %.2f e o seu perimetro eh %.2f",area, perimetro);
	getch();
}
