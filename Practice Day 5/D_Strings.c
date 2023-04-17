#include <stdio.h>
#include <string.h>
int main()
{
     char a[11],b[11];
     scanf("%s%s",a,b);
     int l=strlen(a);
     int lm=strlen(b);
     printf("%d %d\n",l,lm);
     for (int i=0;i<l;i++)
     {
        printf("%c",a[i]);
     }
      for (int i=0;i<lm;i++)
     {
        printf("%c",b[i]);
     }
     printf("\n");
     int tmp=a[0];
     a[0]=b[0];
     b[0]=tmp;
     printf("%s %s",a,b);
    return 0;
}