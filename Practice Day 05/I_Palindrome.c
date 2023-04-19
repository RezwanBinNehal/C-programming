#include <stdio.h>
#include<string.h>
int main()
{
     char a [1001];
     scanf ("%s",a);
     int l=strlen(a);
     int i=0,j=l-1;
     while (i<j)
     {
        if(a[i]!=a[j])
        {
            printf("NO");
            return 0;
        }
        i++;
        j--;
     } 
       
       printf("YES");
    
     
    return 0;
}