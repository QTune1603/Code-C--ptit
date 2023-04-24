#include<stdio.h>
#include<string.h>

int my_strlen(char x[50]){
	int count=0;
	while(x[count] != '\0'){
		count++;
	}
	return count;
}
void xoaXuongDong(char x[50]){
	size_t a = strlen(x);  //size_t la mot so nguyen tinh do dai cua chuoi
	//Tran Quang Tung\n\0 ==> Tran Quang Tung\0\0
	if(x[a-1]=='\n'){
		x[a-1] = '\0';
	}
}
int main()
{
	//char ten[50]="Tran Quang Tung";
	char ten[50];
	printf("Nhap vao ten cua ban: ");
	fgets(ten,sizeof(ten),stdin);
	xoaXuongDong(ten);
	
	printf("\nTen cua ban la: %s",ten);
	printf("\nDo dai chuoi la: %d ",strlen(ten));
	
	printf("\nmy_strlen()");
	printf("\nTen cua ban la: %s",ten);
	printf("\nDo dai chuoi la: %d ",my_strlen(ten));
}
