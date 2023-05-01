#include <stdio.h>
//No return_type + No parameter;
void fun ()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int s=a+b;
    printf("%d",s);
}
int main()
{
    fun();    
    return 0;
}