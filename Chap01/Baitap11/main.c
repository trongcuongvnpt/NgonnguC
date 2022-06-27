#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num1;
	int num2;
	int sum;
	printf("Enter num1\n");
	scanf("%d", &num1);
	printf("Enter num2\n");
	scanf("%d", &num2);
	sum = num1 + num2;
	printf("%d + %d = %d", num1, num2, sum);
	
		return 0;
}
