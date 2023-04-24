#include<stdio.h>
#include<string.h>
void chuyenDoi(char x[50]){
	//Lap trinh C => Lap Trinh C
	//x[0] => viet hoa
	//x[i-1] la khoang trang (32) => x[i] => viet hoa
	int i;
	for( i = 0 ; i < strlen(x) ; i++){
		if(i==0||(i>0 && x[i-1] == 32)){
			if(x[i] >= 97 && x[i] <= 122){
				x[i] = x[i]-32;
			}
		}
		else {
			if(x[i] >= 65 && x[i] <= 90){
				x[i] = x[i] + 32;
			}
		}
	}
}
int main()
{
	char s[50] = "";
	printf("Nhap chuoi: ");
	fgets(s,sizeof(s),stdin);
	printf("Chuoi la: %s",s);
	chuyenDoi(s);
	printf("Chuoi sau khi doi: %s",s);
	
}
