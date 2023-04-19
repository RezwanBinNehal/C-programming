#include <stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     int a[n]; // ei a array teh n songkha porjonto input nibe;
     for (int i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }
     int cnt[100]={0}; // counting er jonno cnt array nei ebong thik kore dite hobe kon porjonto cnt count 
     // korbe,cnt er proti index er maan 0;
     for(int i=0;i<n;i++)
     {
        cnt[a[i]]++;  // cnt ebong a[i] er index same 0-infinity porjontoi cholte pare,tai a[i] er index
        // barle ta cnt er index er increment hisebe detect korbe!; 
     }
     for(int i=0;i<=5;i++)
     {
        printf("%d - %d\n",i,cnt[i]); // prothome i kototomo songkha ta print korbe tarpor cnt[i]dara
        // mean korbe i kotobar ache ta;
     }
    return 0;
}