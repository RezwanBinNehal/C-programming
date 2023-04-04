#include<stdio.h>
int main()
{
int a,b;
scanf("%d",&b);
for(a=1;a<=b;a++)
{
    if (a%2==0)
    {
        printf("%d-even\n",a);
    }
    else{
        printf("%d-odd\n",a);
    }
}
    return 0;
}