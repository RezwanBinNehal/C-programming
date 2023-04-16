#include <stdio.h>
int main()
{
     char a[7]="rezwan";
     printf("%s",a);
     //array teh input neyar jonne '' er moddhe ekta ekta kore charecter neya lageni,
     //ekhane a array ta print korar jonno loop chalate hoy nai;
     // string print korar jonne printf(er moddhe "%s"use kore,diye array er nam dilei hobe);
     // strings e jodi evabe print korte chai tahole jotogula charecter input nite chai tar
     // ek beshi kore input nite hobe karon \n ba null er ekta value ache seta nite hobe;
    return 0;
}