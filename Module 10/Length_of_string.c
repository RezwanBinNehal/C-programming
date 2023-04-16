#include <stdio.h>
#include <string.h> //string er function gula use korar jonn ei header use korte hobe!;
int main()
{
     char a[100];
     scanf("%s",a);
     int l= strlen(a); // shorashori string er length ber korar jonne ei function use kora jay!;
    //  int count =0;
    //  int i;
    //  while(a[i]!='\0')
    //  {
    //     count++;
    //     i++;
    //  }
    //  for (int i=0;a[i]!='\0';i++)
    //  {
    //     count++;
    //  }
     printf("%d",l);//loop nile count neya lagbe!;
    return 0;
}