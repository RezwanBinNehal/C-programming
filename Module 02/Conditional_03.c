#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
if (tk>=100)
{
    printf("Ghurte Jabo\n");
    if (tk>= 200)
    {
        printf("Khichuri Khabo");
    }
    else{
        printf("Fire Chole Asbo");
    }
}
else if (tk>=50)
{
    printf("Chocolate Khabo\n");
    if( tk>=70)
    {
        printf("Icecream Khabo");
    }
    else {
        printf("Chocolate Khaite Khaite Chole Jabo");
    }
}
else{
    printf("Kichui korbo na");
}
    return 0;
}