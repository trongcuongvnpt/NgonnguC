#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
 {
	int integer1;
	int integer2;
	int sum;
	printf("Enter first integer1 \n");
	printf("Enter second integer2 \n");
	scanf("%d", &integer1);
	scanf("%d", &integer2);
	//Tinh tong
	sum = integer1 + integer2;
	printf("sum = %d", sum);
	return 0;
}
