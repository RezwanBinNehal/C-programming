#include <stdio.h>
#include<string.h>
int main()
{
     char a[100],b[100];
     scanf("%s %s",a,b);
     int k=strcmp(a,b);
     if (k<0)
     {
        printf("A choto");
     }
     else if (k>0)
     {
        printf("B choto");
     }
     else
     {
        printf("A=B");
     }
    return 0;
}