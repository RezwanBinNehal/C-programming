#include <stdio.h>
int main()
{
     int t;
     scanf("%d",&t);
     for(int x=1;x<=t;x++)
     {
        int a;
        scanf("%d",&a);
        do
        {
            printf("%d ",a%10);
            a=a/10;
        }
        while(a!=0);
        printf("\n");
     }
    return 0;
}