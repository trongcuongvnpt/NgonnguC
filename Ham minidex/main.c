#include <stdio.h>
#include <stdlib.h>
void nhap(int a[], int n)
{
	int i; 
	for(i=0; i<n; i++)
	{
	printf("Nhap vao so phan tu cua mang a[%d]: ", i);
	scanf("%d", &a[i]);
	}
}
	
int max(int a[], int n)
{

	int i, index=0;
	int max = a[0];
	for(i=0; i<n; i++)
	{
		if(max<a[i]){
			max = a[i];
			index = i;
		}
	}
	return index;
}
int min(int a[], int n)
{ 
	int i, index=0;
	int min =a[0];
	for (i = 1; i < n; i++){
		if (min > a[i]){
			min = a[i];
			index = i;
		}
	}
	return index;
	}
int main()
{
	int a[1000];
	int n;
	printf("\nNhap n = ");
	scanf("%d", &n);
	nhap(a,n);
	printf("\nVi tri lon nhat la %d", max(a, n));
	printf("\nVi tri nho nhat la %d", min(a, n));
	return 0;
}
	

