#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mark1;
	int mark2;
    float avgGPA;
    printf("\nNhap diem 1: ");
    scanf("%d", &mark1);
    printf("\nNhap diem 2: ");
    scanf("%d", &mark2);
    avgGPA = (float)(mark1 + mark2)/2;
    printf("%.1f", avgGPA);
    
	return 0;
}

