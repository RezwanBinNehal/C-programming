#include <stdio.h>
int main() {
    int a,N;
    scanf("%d",&N);
    for(a=1;a<=N;a++)
    {
        if(a%5==0)
        {
            printf("%d Yes",a);
        }
        else {
            printf("%d No",a);
        }
    }
    return 0;
}