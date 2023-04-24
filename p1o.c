#include<stdio.h>

int main()
{
	long long a,b,c;
	scanf("%lld %lld %lld",&a,&b,&c);
	long long x,y;
	if(b%c==0){
		x=b; 
	} 
	else {
		x=(long long)(b/c)*c; 
	} 
	if(a%c==0){
		y=a; 
	} 
	else {
		y=(long long)((a/c)+1)*c; 
	} 
	long long n;
	n=(x-y)/c+1;
	printf("%lld",n); 
 } 
