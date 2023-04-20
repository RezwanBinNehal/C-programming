#include <stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     int a[n];
     for (int i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }
     int x;
     scanf("%d",&x);
     int xcnt=0;
     for(int i=0;i<n;i++)
     {
        if(a[i]==x)
        {
            xcnt++;
        }
     }
     printf("%d",xcnt);
    return 0;
}