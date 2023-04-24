#include<stdio.h>
#include<string.h>

void my_strupr(char x[100]){
	int i;
	for( i = 0 ; i < strlen(x) ; i++){
		if(x[i]>=97 && x[i]<=122) x[i] = x[i] - 32;
	}
}
void my_strlwr(char x[100]){
	int i;
	for( i = 0 ; i < strlen(x) ; i++){
		if(x[i]>=65 && x[i]<=90) x[i] = x[i] + 32;
	}
}

int main()
{
	char s[100];
	printf("Nhap chuoi:");
	fgets(s,sizeof(s),stdin);
	//strupr(s);
	my_strupr(s);
	printf("Chuoi sau khi viet hoa: %s",s);
	//strlwr(s);
	my_strlwr(s);
	printf("Chuoi sau khi viet thuong: %s",s);
}
