#include <stdio.h>
int main()
{
     int n,a;
     scanf("%d",&n);
     int even_sum=0,odd_sum=0;
     for(int i=0;i<n;i++)
     {
        scanf("%d",&a);
        if (a%2==0)
        {
            even_sum=even_sum+a;
        }
        else{
            odd_sum=odd_sum+a;
        }
     }
     printf("%d %d",even_sum,odd_sum);
    return 0;
}