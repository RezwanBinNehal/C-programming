#include <stdio.h>
#include<string.h>
int main()
{
     char a[100],b[100];
     scanf("%s %s",a,b);
    int l=strlen(a);
    strcat(a,b); // duiti string ke ek string e print korar jonno ei inbuilt function use kora hoy;
    // ei funtion ekta ekta kore index select kore print korte pare na,sompurno string ke print kore;
    
    //  for(int i=0;i<=strlen(b);i++)
    //  {
    //   a[l]=b[i]; // a teh neya input gular por  theke automatically b er gula print hote thakbe;
    //   l++; // evabe ektar por arekta index cholte thakbe;
    //  }
     printf("%s %s",a,b);
    
    return 0;
}