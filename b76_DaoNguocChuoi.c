#include<stdio.h>
#include<string.h>
void xoaXuongDong(char x[50]){
	size_t a = strlen(x);
	if(x[a-1] == '\n'){
		x[a-1] = '\0';
	}
}
void my_strrev(char x[50]){
	size_t len = strlen(x);
	int i;
	for( i = 0 ; i < len/2 ; i++){
		int temp = x[i];
		x[i] = x[len-1-i];
		x[len-1-i] = temp;
	}
}
int main()
{
	char s[50] = "";
	printf("Nhap chuoi: ");
	fgets(s,sizeof(s),stdin);
	xoaXuongDong(s);
	my_strrev(s);
	//strrev(s);
	printf("Chuoi sau khi dao nguoc: %s",s);
}  
