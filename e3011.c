#include<stdio.h>
#include<math.h>
int thoaDKPanlindromic(int n){
	int x=0;
	while(n>0){
		x=x*10+n%10;
		n/=10;
	}
	return x;
}
int kiemTra(int n){
	int flag=0;
	if(thoaDKPanlindromic(n)==n) flag=1;
	return flag;
}
int thoaDkChiaHet(int n){
	int x=0;
	while(n>0){
		x+=n%10;
		n/=10;
	}
	if(x%10==0) return 1;
	return 0;
}
int main()
{
	int i,j,n,t;
	scanf("%d",&t);
	for(j=0;j<t;j++){
		scanf("%d",&n);
		int count = 0;
		int p=pow(10,n-1),k=pow(10,n);
		for(i=p;i<k;i++){
			if(kiemTra(i)==1) {
				if(thoaDkChiaHet(i)) count++; 
			}
		}
		printf("%d\n",count);	
	}

}
