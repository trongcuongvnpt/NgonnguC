#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int ary[10];
	int i, total, min, max, average;
	for(i=0; i<10; i++)
	{
	printf("n Nhap vao phan tu mang: %d : ", i+1);
	scanf("%d", &ary[i]);
	}
	min = ary[0];
	for (i=1; i<10; i++)
	{
	if(ary[i] < min)
	min = ary[i];
	}
	max = ary[0];
	for (i=1; i<10; i++)
	{
	if(ary[i] > max)
	max = ary[i];
}
	for(i=0; i<10; i++)
	{
	
	total = total + ary[i];
	
	}
	printf("nGia tri nho nhat %d: ", min);
	printf("nGia tri lon nhat %d: ", max);
	printf("nTong %d: ", total);
	printf("nTrung binh cong %.2f: ", (float)total/10);
}
