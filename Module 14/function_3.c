#include <stdio.h>
//No return_type + parameter;
void fun(int x,int y)
{
    int s = x*y;
    printf("%d",s);//jehetu ei funtion er kono return_type
    // nai tai ekhane return keyword use hobe na;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    fun(a,b); // er kono return nai tai eke kono variable er moddhe
    //rakha lagbe na;
    return 0;
}