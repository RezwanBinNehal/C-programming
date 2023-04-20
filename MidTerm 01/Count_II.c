#include <stdio.h>
#include<string.h>
int main()
{
     char a[1001];
     scanf("%s",a);
     int m=0;
     for(int i=0;i<strlen(a);i++)
     {
        if (a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        m++;
     }
     printf("%d",m);
    return 0;
}