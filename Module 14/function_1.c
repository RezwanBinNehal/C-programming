#include <stdio.h>
//return_type + parameter;
int fun(int x,int y)
{
    int sum=x+y;
    return sum;
}
int main()
{
    int a,c;
    scanf("%d %d",&a,&c);
    int b=fun(a,c);
    printf("%d",b);
    return 0;
}

// int sum(int x,int y);
// int main()
// {
//     int a,c;
//     scanf("%d %d",&a,&c);
//     int b=sum(a,c);
//     printf("%d",b);
//     return 0;
// }
// int sum(int x,int y)
// {
//     int sum=x+y;
//     return sum;
// }