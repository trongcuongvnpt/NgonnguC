#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	x = 0;
	printf ("Enter choice (1 - 3) : ");
	scanf ("%d", &x);
	switch (x){
		case 1:
			printf("n\The choice is 1");
			break;
		case 2:
			printf("n\The choice is 2");
			break;
		case 3:
			printf("n\The choice is 3");
			break;
		default:
			printf("\nNot value");
			break;
	}
	return 0;
}
