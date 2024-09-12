#include<stdio.h>
#include<conio.h>
void main(){
	float cateto_1, cateto_2, hipotenuza;
	printf("Informe o valor dos catetos:");
	scanf("%f %f",&cateto_1,&cateto_2);
	float multiplicacao = cateto_1*cateto_2;
	hipotenuza = multiplicacao/2;
	printf("O valor da hipotenuza eh %.2f\n",hipotenuza);
	getch();
}
