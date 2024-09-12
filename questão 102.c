#include<stdio.h>
#include<conio.h>

void main() {
    int num, k;
    printf("Informe um num:");
    scanf("%d", &num);
    for (k = 1; k <= num; k++) {
        int div = num % k;
        if (div == 0) {
            printf("%d ", k);
        }
    }
    getch();
}

