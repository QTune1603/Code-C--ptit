#include<stdio.h>
#include<math.h>

int Kiemtra_SNT(int p){
	int j;
	if(p<=1)return 0;
	for(j=2;j<=sqrt(p);j++){
		if(p%j==0)	return 0;
	}
	return 1;
} 
int Kiemtra_So_SieuNT(int n)
{
	while(n>0){
		int x; 
		x=n%10; 
		if(Kiemtra_SNT(x)==0) return 0; 
		n/=10; 
	} 
	return 1;
}
int main()
{       
	int i,t,a,b,k;
	scanf("%d",&t);
	for( i = 0 ; i < t ; i++){
		scanf("%d %d",&a,&b);
		int count=0;
		for( k = a ; k <= b ; k++){
			if(Kiemtra_SNT(k)){
				if(Kiemtra_So_SieuNT(k)) count ++; 
			} 
		}
		printf("%d\n",count);
	}                        
} 
