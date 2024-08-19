#include <stdio.h>

int main()
{
    
    int a,b,c,d,e,f,hap,i;
    int arr[1];
    scanf("%d", &i);
    printf("8진수:%d\n",i);
    arr[0] = i;
    a = arr[0] / 1000;
    b = arr[0] % 1000;
    c = b / 100;
    d = b % 100;
    e = d / 10;
    f = d % 10;
    hap =  (a * 512) + (c * 64) + (e * 8) + f;
    printf("10진수: %d\n", hap);
}