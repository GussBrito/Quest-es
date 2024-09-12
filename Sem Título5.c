#include <stdio.h>
#include <conio.h>
#include <math.h>

void main (){
	float C, F, K;
	printf ("informe a temperatura em celsius:\n");
	scanf ("%f",&C);
	//C = a celsius//
	float converter_F = (C * 9/5 +32);
	float converter_K = (C + 273.15);
	//F = Fahrenheit, K = Kelvin//
	printf ("Fahrenheit = %.2f\n Kelvin = %.2f",converter_F, converter_K);
	getch();
	
	
}
