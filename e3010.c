#include<stdio.h>
#include<math.h> 

int kiemtraSNT(int x){
	int i;
	if (x < 2) return 0; //////////// Cho nay og xet neu n < 2 thi se return 0
	for(i=2;i<=sqrt(x);i++){
		if(x%i==0) return 0;
	}
	return 1;
} 

int kiemTraTongChuSoFib(int n){
	long sum1 = 1,sum2 = 0, tg1;
	if (n==0 || n==1) return 0;         /////// Cho nay phai la return 0 nhe og
	while (sum1 < n){
		tg1 = sum1;
		sum1 +=sum2;
		sum2 = tg1;
	}
	if (sum1 > n) return 0;
	else return 1;
}
int main (){
	int i,a,b;
	scanf("%d %d",&a,&b);
	if(a<=b){
		for(i=a;i<=b;i++){
			int k=i, x=0;         /////// Og dung bien trung gian k = i;
			while(k!= 0){  
				x+=k%10;
				k/=10; 
			} 
			if(kiemtraSNT(i)){
				if(kiemTraTongChuSoFib(x)){
					printf("%d ",i); 
				} 
			} 
		} 
	} 
	else {
		for(i=b;i<=a;i++){
			int k=i, x=0; 
			while(k>0){  
				x+=k%10; 
				k/=10; 
			} 
			if(kiemtraSNT(i)){
				if(kiemTraTongChuSoFib(x)){
					printf("%d ",i); 
				} 
			} 
		} 
	} 
}
