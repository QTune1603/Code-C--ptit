#include<stdio.h>

int main()
{
	char ten[50];
	printf("Nhap vao ten cua ban: ");
	//scanf("%s",ten); //Nhap chuoi khong co khoang trang
	fgets(ten,sizeof(ten),stdin); 
	//printf("\nTen da nhap la: %s",ten);  //Xuat chuoi khong xuong dong
	printf("\nTen da nhap la: ");
	puts(ten);
 } 
