/*#include<stdio.h>

int main()
{
	int xa,ya,xb,yb,xc,yc,xd,yd;
	scanf("%d %d %d %d",&xa,&ya,&xb,&yb);
	scanf("%d %d %d %d",&xc,&yc,&xd,&yd);
	int hoanhdomax=xa;
	int hoanhdomin=xb;
	if(xb>=xa&&xb>=xc&&xb>=xd){
		hoanhdomax=xb; 
	} 
	else if(xc>=xa&&xc>=xb&&xc>=xd){
		hoanhdomax=xc;
	} 
	else(xd>=xa&&xd>=xb&&xd>=xc);{
		hoanhdomax=xd;
	}
	if(xa<=xb&&xa<=xc&&xa<=xd){
		hoanhdomin=xa; 
	} 
	else if(xc<=xb&&xc<=xa&&xc<=xd){
		hoanhdomin=xc;
	} 
	else(xd<=xb&&xd<=xa&&xd<=xc);{
		hoanhdomin=xd;
	}
	int tungdomax=ya;
	int tungdomin=yb;
	if(yb>=ya&&yb>=yc&&yb>=yd){
		tungdomax=yb; 
	} 
	else if(yc>=xa&&yc>=yb&&yc>=yd){
		tungdomax=yc;
	} 
	else(yd>=ya&&yd>=yb&&yd>=yc);{
		tungdomax=yd;
	}
	if(ya<=yb&&ya<=yc&&ya<=yd){
		tungdomin=ya; 
	} 
	else if(yc<=yb&&yc<=ya&&yc<=yd){
		tungdomin=yc;
	} 
	else(yd<=yb&&yd<=ya&&yd<=yc);{
		tungdomin=yd;
	}
	if((hoanhdomax-hoanhdomin)>(tungdomax-tungdomin)){
		printf("%d",(hoanhdomax-hoanhdomin)*(hoanhdomax-hoanhdomin));
	}
	else if((tungdomax-tungdomin)>(hoanhdomax-hoanhdomin)){
		printf("%d",(tungdomax-tungdomin)*(tungdomax-tungdomin));
	}
	else {
		printf("%d",(xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
	}
	
	
 } */
 #include <stdio.h>
int main()
{
    int a[5];
    int b[5];
    int maxy, miny, maxx, minx, i, x_length, y_length;
    for (i = 1; i <= 4; i++) scanf("%d",&a[i]);
    for (i = 1; i <= 4; i++) scanf("%d",&b[i]);
    maxx = a[1]; minx = a[1];
    maxy = a[2]; miny = a[2];
    for (i = 5; i <= 8; i++) a[i] = b[i-4];
    for (i = 1; i <= 7; i+=2){
        if (a[i] > maxx) maxx = a[i];
        else if (a[i] < minx) minx = a[i];
    }
    for (i = 2; i <= 8; i+=2){
        if (a[i] > maxy) maxy = a[i];
        else if (a[i] < miny) miny = a[i];
    }
    x_length = maxx - minx;
    y_length = maxy - miny;
    if (x_length == y_length){
        printf ("%d",x_length * x_length);
    }
    else if (x_length < y_length) printf ("%d",y_length * y_length);
    else printf("%d",x_length * x_length);
}
