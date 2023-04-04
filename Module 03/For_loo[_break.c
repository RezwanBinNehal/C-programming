#include<stdio.h>
int main()
{
int a,n;
scanf("%d",&n);
for(a=1;a<=n;a++)
{
    if (a==39)
    {
        break;
    }
    printf("%d\n",a);
}
    return 0;
}