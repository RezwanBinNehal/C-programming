#include <stdio.h>
int main()
{
     char a[100],b[100];
     scanf("%s %s",a,b);
     int i=0;
     while (1) // 1 diye infinity loop chalano hoise;
     {
        if (a[i]=='\0' && b[i]=='\0') // Laxicogaphoical comparision e sob somoy age soman soman 
        // ta compare krte hoy;
        {    
            printf("A=B");
            break;                    // infinty loop break korar jonno break condition use hobe
                                     // tachara infinty loop cholte thakbe kono output ashbe na;
        }
        else if (b[i]=='\0')
        {
            printf("B choto");
            break;
        }
        else if (a[i]=='\0')
        {
            printf("A choto");
            break;
        }
        else if(a[i]==b[i])
        {
            i++;
        }
        else if (a[i]<b[i])
        {
            printf("A choto");
            break;
        }
        else 
        {
            printf("B choto");
            break;
        }
     }
    return 0;
}