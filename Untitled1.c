#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
	int i;
	float f;
	double d, result;
	printf("Nhap gia tri tu ban phim ch: \n");
	scanf("%c", &ch);
	printf("%d\n", ch);
	printf("Nhap gia tri tu ban phim i: \n");
	scanf("%d", &i);
	printf("Nhap gia tri tu ban phim f: \n");
	scanf("%f", &f);
	printf("Nhap gia tri tu ban phim d: \n");
	scanf("%lf", &d);
	result = (ch/i) + (f*d) -(f+i);
	printf("%lf", result);
	return 0;
}
