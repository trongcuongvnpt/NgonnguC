#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i, j, k;
	i  = 1;
	printf("Enter no. of rows :");
	scanf("%d", &i);
	printf("\n");
	for(j = 1; j < i; j++)
	{
		printf("\n");
		for (k = 1; k <= j; k++)
		{
			printf("%d\t", k);
			
		}
	}
	return 0;
}
