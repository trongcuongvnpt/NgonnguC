#include <stdio.h>
#include <stdlib.h>
int sodu = 10000000;
int user = 123, pass = 456;
int count;
// Dang nhap
int login(int user, int pass){
	
 	printf("Xin moi ban nhap user: ");
	scanf("%d", &user);
	printf("Xin moi ban nhap pass: ");
	scanf("%d", &pass);
	if(user==123 && pass==456){
	/*printf("Dang nhap thanh cong: \n");*/
	return 1;}
	
	else 
	printf("Dang nhap khong thanh cong");
	return 0;
	}
	
// Rut tien	
	int ruttien(int num){
	int tien; 
	printf("Nhap so tien can rut: ");
	scanf("%d", &tien);
	if(tien<=5000000 && tien % 50000==0 && tien<=sodu){
		
		sodu=sodu-tien;
		
	printf("Giao dich thanh cong: \n");
	printf("So tien trong tai khoan: %d\n", sodu);
	}else if(tien>5000000){
	
	    printf("Vuot qua tien cho phep: 5000000\n");
	}else if(tien%50000!=0){	
	     printf("So tien ban rut chia het cho 50000\n");
	}else if(tien>sodu){
		printf("So tien ban rut vuot qua so du: \n");}
	
}
// Chuyen khoan

int chuyenkhoan(int stkchuyen, int tienchuyen)
{
	printf("Moi ban nhap so tai khoan can chuyen: \n");
	scanf("%d", &stkchuyen);
	fflush(stdin);
	printf("Moi ban nhap so tien can chuyen : \n");
	scanf("%d", &tienchuyen);
	if(tienchuyen<=sodu)
	{
	sodu=sodu-tienchuyen;
	printf("Ban da chuyen tien thanh cong: %d cho so tai khoan: %d\n", tienchuyen, stkchuyen);
	printf("So du tai khoan: %d\n", sodu);
	}	
	else {
	printf("So du tai khoan khong the thuc hien: \n");
	}
}
// Kiem tra so du tai khoan

	int kiemtrasodu()
{
	printf("So tien hien co trong tai khoan cua ban: %d\n", sodu);
}
int main()
{
int menu;
int user, pass;
int stkchuyen,tienchuyen;
int num;
char menu1;
if(login(user, pass)==1){
	printf("Dang nhap thanh cong: \n");
	
do {
	printf(" 1. rut tien \t");
	printf(" 2. Chuyen khoan \n");
	printf(" 3. Kiem tra so du \t");
	printf(" 4. Ket thuc \t");
	scanf("%d", &menu);
	
switch (menu)
	{
	case 1:
	ruttien(num);
	break;
	case 2: 
	chuyenkhoan(stkchuyen,tienchuyen);
	break;
	case 3:
	kiemtrasodu(sodu);
	break;
	case 4:
	printf("Ket thuc: ");
	break;
	}		
	printf("Ban co muon tiep tuc khong Y/N \n ");
	fflush(stdin);
	scanf("%c", &menu1);
	}
while (menu1!='N' && menu1!='n');
	}
else
return 0;
}

		


