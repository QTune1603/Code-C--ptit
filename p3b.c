#include<stdio.h>

int main()
{
	char c;
	int n,res=1,max=0;
	int danhdau[300]={};
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){
		scanf("%c",&c);
		danhdau[(int)c]++;
		if(max<danhdau[(int)c]) max=danhdau[(int)c];
	}
	if(max<=(n+1)/2) printf("So beautiful");
	else printf ("So ugly");
}
