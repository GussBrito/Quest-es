#include <stdio.h>
#include <conio.h>

void main(){
	float base,altura;
	printf ("informe o valor da base");
	scanf ("%f", &base);
	printf ("informe o valor da altura");
	scanf ("%f", &altura );
	float area = (base*altura)/2;
    printf ("A area eh %f \n",area);
	getch();
	}
