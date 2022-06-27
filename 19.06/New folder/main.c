#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    float a, b, c, S, CV, p;
    printf("Nhap a = ");
    scanf("%f",&a);
    printf("Nhap b = ");
    scanf("%f",&b);
 
    printf("Nhap c = ");
    scanf("%f",&c);
 
    /// Tính chi vi
    CV = a+b+c;
    /// Ðua chu vi ra màn hình
    printf("Chu vi = %f\n",CV);
 
    /// Tính p
    p = CV/2;
 
    /// Tính di?n tích
    S = sqrt(p*(p-a)*(p-b)*(p-c));
    /// Ðua k?t qu? ra màn hình
    printf("Dien tich = %f",S);
 
 
    return 0;
	return 0;
}
