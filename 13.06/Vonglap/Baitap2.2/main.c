#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int num;
	int min;
	int max;
	printf("\nNhap vao gia tri min: ");
	scanf("%d", &min);
	printf("\nNhap vao gia tri max: ");
	scanf("%d", &max);
	for(num = min; num <= max; num++){
		if(num%7==0){
		printf("%d\n", num);
		}
		}
	
	return 0;
}
