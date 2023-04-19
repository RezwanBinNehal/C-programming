#include <stdio.h>
#include<string.h>
int main()
{
     char a[100001];
     fgets(a,100001,stdin);
     int l=strlen(a);
     for(int i=0;i<l;i++)
     {
        if (a[i]==',')
        {
            printf("%c",' ');
        }
        else if (a[i]>='a'&&a[i]<='z')
        {
        printf("%c",a[i]=a[i]-'a'+'A');
        }
        else if(a[i]>='A'&&a[i]<='Z')
        {
            printf("%c",a[i]=a[i]-'A'+'a');
        }
     }
    return 0;
}