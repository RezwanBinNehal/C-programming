#include <stdio.h>
#include<string.h>
int main()
{
     char a[100],b[100];
     scanf("%s %s",a,b);
    //  for (int i=0;i<=strlen(b);i++)
    //  {
    //      a[i]=b[i];                 // ekhane for loop diyeo kora jay;
    //  }
    //   printf("%s %s",a,b);
    strcpy(a,b); // eta inbuild function ,ekhane age jeta thakbe setay porer ta copy hobe
    // jemon ekhane age a ache otoeb a teh b er gula copy hobe;
    // kintu jodi ekta array sompurno copy kore arektay rakhte chai taholei ei  function 
    // karjokor hobe tachara jodi different index e different different value rakhte chai,
    // ei function kaj korbe nah; 
     printf("%s %s",a,b);
       return 0;
}