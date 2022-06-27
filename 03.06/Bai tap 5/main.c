#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  	float x, z;
  	int n;
  	printf("Nhap vao co so x: ");
  	scanf("%f", &x);
  	printf("Nhap vao so mu n: ");
  	scanf("%d", &n);
   	z = pow(x, n);
  	printf("%.1f^%d = %.1f",x,n, z);
   	  	
	return 0;
}
