#include <stdio.h>
int main()
{
     char X;
     scanf("%c",&X);
     if(X>='0' && X<='9')
     {
        printf("IS DIGIT");
     }
     else
     {
        if(X>='a' && X<='z')
        {
            printf("ALPHA\nIS SMALL");
        }
        else{
            printf("ALPHA\nIS CAPITAL");
        }
     }
    return 0;
}