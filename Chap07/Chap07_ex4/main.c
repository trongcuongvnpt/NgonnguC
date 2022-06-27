#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char c;
	printf("Nhap vao 1 ky tu :");
	scanf("%c", &c);
	if(c >= 'A' && c <= 'Z')
		printf("Chu thuong = %c", c + 'a' - 'A');
		
		
	else
		printf("Ky tu nhap la = %c", c);
	
	return 0;
}
