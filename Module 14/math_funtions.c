#include <stdio.h>
#include <math.h>
#include<stdlib.h> // abs() function use korar jonno ei header file use kora hoy;
int main()
{
    //  double a;
    //  scanf("%lf",&a);
    //  int b= ceil(a);
    // int b=floor(a);
    // int b=round(a);

    // int a;
    // scanf("%d",&a);
    // float b=sqrt(a); // value er root over maan ber kore;
    //  printf("%0.1f",b);

    // int a,b;
    // scanf("%d %d",&a,&b);
    // int c=pow(a,b); // a to the power b,eta floating value niye kaj kore;
    // printf("%d",c);

    int a;
    scanf("%d",&a);
    int b=abs(a); // postive funtion ke positive dibe,negetive function keo positive dibe;  
     printf("%d",b);
    return 0;
}