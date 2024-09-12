#include <stdio.h>
#include <conio.h>
#include <math.h>

void main (){
	float num;
	printf ("Informe um numero inteiro positivo:");
	scanf ("%f",&num);
	float dobro= num*2;
	float triplo= num*3;
	float quadrado= pow(num,2);
	float cubo= pow(num,3);
	float raiz= sqrt(num);
	printf ("o dobro eh %.2f, o triplo eh %.2f, o quadrado eh %.2f, o cubo eh %.2f e a raiz eh %.2f \n",dobro,triplo,quadrado,cubo,raiz);
	getch();
}
 
