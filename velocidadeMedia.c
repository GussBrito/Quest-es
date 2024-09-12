#include<stdio.h>
#include<conio.h>

void main(){
	float distancia,tempo;
	printf("Informe a distancia em quilometros e o tempo em horas:");
	scanf("%f%f" ,&distancia,&tempo);
	float velocidadekmh = distancia/tempo;
	float velocidadems = velocidadekmh/3.6;
	printf("A velocidade media eh %.2f\n" ,velocidadems);
	getch();
}
