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
 
    /// T�nh chi vi
    CV = a+b+c;
    /// �ua chu vi ra m�n h�nh
    printf("Chu vi = %f\n",CV);
 
    /// T�nh p
    p = CV/2;
 
    /// T�nh di?n t�ch
    S = sqrt(p*(p-a)*(p-b)*(p-c));
    /// �ua k?t qu? ra m�n h�nh
    printf("Dien tich = %f",S);
 
 
    return 0;
	return 0;
}
