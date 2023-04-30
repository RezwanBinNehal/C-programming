#include <stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     int s=n-1;
     int k=1;
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<s;j++)
        {
            printf(" ");
        }
        for(int j=0;j<k;j++)
        {
            printf("*");
        }
        s--; //s space contain kore,ebong proti line ei s n er theke 1 bar kom kore decrease
        // hote thakbe;
        k=k+2; // k protibar 2 kore increase hocche;
        printf("\n");
     }
    return 0;
}