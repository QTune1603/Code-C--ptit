#include<stdio.h>
#include<string.h>

void my_strcpy(char x1[50],char x2[50]){
	size_t len2 = strlen(x2);
	int i;
	for( i = 0 ; i < len2 ; i++){
		x1[i] = x2[i];
	}
	x1[len2] = '\0';
}

int main()
{
	char s1[50] = "Tung dep trai";
	char s2[50] = "";
	printf("\ns1 = %s",s1);
	printf("\ns2 = %s",s2);
	printf("\n----------");
//	strcpy(s2,s1);
	my_strcpy(s2,s1);
	printf("\ns1 = %s",s1);
	printf("\ns2 = %s",s2);
}
