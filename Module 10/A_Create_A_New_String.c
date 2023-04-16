#include <stdio.h>
#include <string.h>
int main()
{
     char a[1001];
     scanf("%s",a);
     char b[1001];
     scanf("%s",b);
     int l = strlen(a);
     int lm = strlen(b);
     printf("%d %d\n",l,lm);
     printf("%s %s",a,b);

    return 0;
}