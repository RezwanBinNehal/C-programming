#include <stdio.h>
int main()
{
     int n,k;
     scanf("%d %d",&n,&k);
     int a[n];
     for(int i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }
    
     int cnt[100000]={0};

     for (int i=0;i<n;i++)
     {
        cnt[a[i]-1]++;
     }
     for (int i=0;i<k;i++)
     {
        printf("%d\n",cnt[i]);
     }
    return 0;
}
