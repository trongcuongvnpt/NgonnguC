#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {    
 
    int num1, num2, sum;
     
    printf("Nhap 2 so tu nhien: ");
    scanf("%d %d", &num1, &num2);
 
    // tinh tong 2 so
    sum = num1 + num2;      
     
    printf("Tong cua 2 so %d va %d la %d", num1, num2, sum);
    printf("\n-------------------------\n");
    printf("Chuong trinh nay duoc dang tai Freetuts.net");
    return 0;
}
