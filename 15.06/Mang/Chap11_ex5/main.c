#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int arr[2][3];
	int row, col;
	for(row=0; row<2; row++)
	{
		for(col=0; col<3; col++)
		{
			printf("nEnter a Number at [%d][%d] : ", row, col);
			scanf("%d", &arr[row][col]);
		}
	}
		for(col=0; col<2; col++)
		{
			for(col=0; col<3; col++)
			{
				printf("\nThe Number at [%d][%d] is %d", row, col, arr[row][col]);
			}
		}
}
