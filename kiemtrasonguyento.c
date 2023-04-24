#include<stdio.h>
#include<math.h>
int kiemtra_SNT(long long x)
{
	long long i;
	if(x<2){
		return 0;
	}
	for(i=2;i<x;i++){
		if(x%i==0){
			return 0;
		}
	}
	return 1;
}
int main()
{
   long long n;
   scanf("%lld",&n);
   long long dem=0;
   long long i;
   for(i=2;i<=n;i++){
		if(n%i==0 ){
			if(kiemtraNST)
			dem++;
		}
   }
   printf("%lld",dem);

}
