#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
int a, b, c;

int s;
printf ("/nNhap vao a , b, c: ");
scanf ("%d %d %d", &a, &b, &c);
if ( (a+b)>=c && (a+c) >= b && (b+c) >= a) {

s = dientich (a, b, c);
printf ("\n Dien tich tam giac canh %d, %d, %d = %d", a, b, c, s);
}
else 
printf ("/nGia tri ban nhap khong hop le");
}
int dientich (int x, int y, int z)
{
int dt, cv = 0;
cv = (x+y+z)/2;
dt = sqrt (cv*(cv-x)*(cv-y)*(cv-z));
return (dt);
}
