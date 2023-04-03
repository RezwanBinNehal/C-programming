#include<stdio.h>
int main()
{
    int a,b;
    char pls = '+',min='-',gun='*',vag='/';

    scanf("%d %d",&a,&b);
       
    int sum=a+b;
    int sub=a-b;
    int mul=a*b;
    float div=a*1.0/b;
    printf("%d%c%d=%d\n",a,pls,b,sum);
    printf("%d%c%d=%d\n",a,min,b,sub);
    printf("%d%c%d=%d\n",a,gun,b,mul);
    printf("%d%c%d=%0.2f",a,vag,b,div);
    return 0;
}