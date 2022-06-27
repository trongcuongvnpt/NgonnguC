#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sobuoihoc, sobuoinghihoc;
	float dieukienthi, lythuyet, thuchanh, baitaplon;
	
	printf("Nhap vao so buoi hoc: \n");
	scanf("%f", &sobuoihoc);
	
	printf("Nhap vao so buoi nghi hoc: \n");
	scanf("%f", &sobuoinghihoc);
	
	printf("Nhap vao dieu kien thi: \n");
	scanf("%f", &dieukienthi);
	
	printf("Nhap vao so buoi ly thuyet: \n");
	scanf("%f", &lythuyet);
	
	printf("Nhap vao so buoi thuc hanh: \n");
	scanf("%f", &thuchanh);
	
	printf("Nhap vao bai tap lon: ");
	scanf("%f", &baitaplon);
	
	dieukienthi = sobuoihoc/sobuoinghihoc*100;
	
	if (dieukienthi >= 40)
	{
	
	printf("du dieu kien \n");
	}
	else{
	printf("khong du dieu kien \n");
	}
	
	if (lythuyet >= 8){
	printf("du dieu kien \n");
	}
	else
	{
	printf("khong du dieu kien \n");
	}
	if (thuchanh >= 6){
	printf("du dieu kien \n");
	}
	else
	{
	printf("khong du dieu kien \n");
	}
	
	if (baitaplon >= 4){
	printf("du dieu kien \n");
	}
	else
	{
	printf("khong du dieu kien \n");
	}

	return 0;
	}
	
