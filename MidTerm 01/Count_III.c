#include <stdio.h>
#include<string.h>
int main()
{
     char a[1001];
     scanf("%s",a);
     int cnt [26];
     int i;
     for(i=0;i<26;i++)
     {
        cnt[i]=0;
     }
     i=0;
     while(a[i]!='\0')
     {
       int k=a[i]-'a';
       cnt[k]++;
       i++;
     }
     for(i=0;i<26;i++)
     {
        printf("%c - %d\n",i+'a',cnt[i]);
     }
    return 0;
}