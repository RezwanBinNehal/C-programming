#include <stdio.h>
//return_type + No parameter;
int fun()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=a-b;
    return sum;
}
int main()
{
    int a=fun(); //() use kortei hobe;
    printf("%d",a);
    //  printf("%d",fun()); // ekhane () na dile funtion print hobe na:
    return 0;
}