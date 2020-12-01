#include <stdio.h>
int main()
{
    int a,b;
    float s;
    printf("Nhap a: ");
    scanf("%d",&a);
    printf("Nhap b: ");
    scanf("%d",&b);
    if(a<b)
    {s=b*(b+1)/2.0-a*(a+1)/2.0+a;};
    else s=a*(a+1)/2.0-b*(b+1)/2.0+b;
    printf("%f",s);
    return 0;
}