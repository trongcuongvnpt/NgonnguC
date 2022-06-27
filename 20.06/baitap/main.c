#include <stdio.h>
#include <stdlib.h>

/*run this program using the console pauser or add your own getch, system("pause") or input loop*/
int add(int a , int b){
	return (a+b);
}
int sub(int a, int b){
	return (a-b);
}

int mul(int a, int b){
	return (a*b);
}

float chia (int a, int b){
	return (float)a/b;
}


int main()
{

int a, b;
char op;
printf("Enter a, b:\n");
scanf("%d %d", &a, &b);
printf("Enter op:\n");
fflush(stdin);
scanf("%c", &op);

switch(op)
{

case '+' :
	
	printf("Tong la %d", add(a,b));
	break;

case '-':
 	sub(a,b);
	printf("Hieu la %d", sub(a,b));
	break;
	
case '*':
	mul(a,b);
	printf("Tich la %d",mul(a,b));
	break;
	
case '/':
//	chia(a,b);
	printf("Thuong la %f",chia(a,b));
	break;	
}
}
