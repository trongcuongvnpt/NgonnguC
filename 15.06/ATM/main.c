#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i, cardid, pin;
	char ans;

	printf("\nnhap vao so cardid: ");
	scanf("%d",&cardid);
	printf("\nNhap vao ma pin : ");
	scanf("%d",&pin);
	if(cardid==123 && pin ==456)
	{
	do{
		printf("Chon 1 de rut tien: \n");
		printf("Chon 2 de chuyen khoan: \n");
		printf("Chon 3 de xem so du: \n");
		fflush(stdin);
		scanf("&d",&i);
	    switch (i)
		{
		case 1:
			printf("Rut tiem: \n");
			break;
		case 2:
			printf("Chuyen khoan: \n");
			break;
		case 3:
			printf("Xem so du tai khoan: \n");
			break;
			};
		printf("Nhap chuoi (Y/N) ?");
		fflush(stdin);
		ans = getchar();
	
	}while( ans != 'N' && ans != 'n' );


	}else{
	printf("Ivalid");
	}
	return 0;
}
