#include <stdio.h>
#include <conio.h>
#include <math.h>

void main (){
	const float PI =3.14;
	float raio;
	printf ("Informe o raio da circunferencia: \n");
	scanf ("%f",&raio);
	float area = PI * pow(raio,2);
	float comprimento = 2 * PI * raio;
	printf ("A area do circulo eh %.2f e o comprimento eh %.2f \n", area,comprimento);
	getch();
	}
