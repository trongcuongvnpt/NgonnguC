#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
	{
	int a, b, c, d, i;
	float e, f, g;
	printf("Nhap tu ban phim a: \n");
	scanf("%d", &a);
	printf("Nhap tu ban phim b: \n");
	scanf("%d", &b);
	printf("Nhap tu ban phim c: \n");
	scanf("%d", &c);
	printf("Nhap tu ban phim d: \n");
	scanf("%d", &d);
	printf("Nhap tu ban phim i: \n");
	scanf("%d", &i);
	e = (i + 1 / 7);
	f = (5 * (c - 3 + d));
	g = (a * (b + c / d) - 22);
	printf("e = %f", e);
	printf("f = %f", f);
	printf("g = %f", g);
		
	return 0;
}
