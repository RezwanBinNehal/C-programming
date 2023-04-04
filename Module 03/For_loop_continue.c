#include<stdio.h>
int main()
{
int a;
for(a=1;a<=20;a++)
{
    if(a==16)
    {
        continue;
    }
    printf("%d\n",a);
}
    return 0;
}