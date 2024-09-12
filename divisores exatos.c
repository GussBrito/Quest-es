#include<stdio.h>
#include<conio.h>

void main(){
    int num, k;
    printf("Informe um número: ");
    scanf("%d", &num);
    int contador = 0;
    for(k = 1; k <= num; k++) {  
        contador = contador + k;
        int div = num % k;
        if(div == 0){
            printf("%d ", k);  
        }
    }
    getch();
}

