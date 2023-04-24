#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    scanf("%d",&x);
    int arr[30];
    int chuDau = 97;
    for(int i=0; i<30; i++)
    {
        arr[i] = chuDau;
        chuDau++;
    }
    //phan than tren
    for(int hang=(x-1); hang>0; hang--)
    {
        for(int kiTu=(x-1); kiTu > 0; kiTu--)
        {
            if(kiTu>=hang)
            {
                printf("%c",arr[hang]);
            }
            if(kiTu<hang)
            {
                printf("%c",arr[kiTu]);
            }
        }
        printf("%c",arr[0]);
        for(int kiTu=1; kiTu<x; kiTu++)
        {
            if(kiTu>=hang)
            {
                printf("%c",arr[hang]);
            }
            else
            {
                printf("%c",arr[kiTu]);
            }
        }
        printf("\n");
    }
    for(int i=1; i<=x*2-1; i++)
        {
            printf("%c",arr[0]);
        }
        printf("\n");
    for(int hang=1; hang<x; hang++)
    {
        for(int kiTu=(x-1); kiTu > 0; kiTu--)
        {
            if(kiTu>=hang)
            {
                printf("%c",arr[hang]);
            }
            if(kiTu<hang)
            {
                printf("%c",arr[kiTu]);
            }
        }
        printf("%c",arr[0]);
        for(int kiTu=1; kiTu<x; kiTu++)
        {
            if(kiTu<hang)
            {
                printf("%c",arr[kiTu]);
            }
            else
            {
                printf("%c",arr[hang]);
            }
        }
        printf("\n");
    } 
    return 0;
}
