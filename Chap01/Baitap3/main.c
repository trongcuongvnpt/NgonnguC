#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int number1, number2, sum;
	
	printf("Enter two integers: ");
	scanf("%d %d", &number1, &number2);
	// calculating sum
	sum = number1 + number2;
	
	prinf("%d + %d = %d", number1, number2, sum);
	return 0;
}
