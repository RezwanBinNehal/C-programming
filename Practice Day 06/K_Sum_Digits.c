#include <stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     char a[1000000];
     scanf("%s",a);
     int sum=0;
     int num;
     for(int i=0;i<n;i++)
     {
        num=a[i]-'0';
        sum=sum+num;
     }
     printf("%d",sum);
    return 0;
}