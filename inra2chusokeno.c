#include<stdio.h>
  
int main(){
    float x;
    scanf("%f", &x);
    float y = (float) (int) x;
    if (y<=x){
        printf("%d %d", (int) y, (int) y + 1);
    }
    else{
        printf("%d %d", (int) y - 1, (int) y);
    }
}
