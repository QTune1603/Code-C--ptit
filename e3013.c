#include<stdio.h>
#include<math.h>
int thoaDK(int n){
	int x=0;
	while(n>0){
		int y=n%10; 
		x=x*10+n%10;
		if(y==9) return 0;
		n/=10;
	}
	return x;
}
int kiemTra(int n){
	int flag=0;
	if(thoaDK(n)==n) flag=1;
	return flag;
}   

int main()
{
	int i,j,n,count = 0;
	scanf("%d",&n);
	for(j=2;j<n;j++){
		if(kiemTra(j)==1){
			printf("%d ",j); 
			count++; 
		}  
	}
    printf("\n%d",count);     
}
