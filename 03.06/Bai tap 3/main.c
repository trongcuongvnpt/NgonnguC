#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int pi;
	int radius;
	int circum;
	printf("Enter pi\n: ");
	scanf("%d", &pi);
	printf("Enter radius\n: ");
	scanf("5d", &radius);
	circum = 2 * pi * radius;
	
	return 0;
}
