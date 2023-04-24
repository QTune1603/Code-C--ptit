#include<stdio.h>
#include<string.h>

int my_strlen(char x[50]){
	int count=0;
	while(x[count] != '\0'){
		count++;
	}
	return count;
}
int main()
{
	//char ten[50]="Tran Quang Tung";
	char ten[50];
	printf("Nhap vao ten cua ban: ");
	fgets(ten,sizeof(ten),stdin);
	
	printf("\nTen cua ban la: %s",ten);
	printf("\nDo dai chuoi la: %d ",strlen(ten));
	
	printf("\nmy_strlen()");
	printf("\nTen cua ban la: %s",ten);
	printf("\nDo dai chuoi la: %d ",my_strlen(ten));
}
