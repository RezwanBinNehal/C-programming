#include <stdio.h>
#include <string.h>
int main()
{
     char a[17];
     //gets(a); ei ta sob jayga teh supported na tai ei ta athical way na;
    fgets(a,17,stdin);//ei way ta standerd tai eta use kora jabe;
    a[9]='\0';//ekhane jeta deya hobe sei porjonto giyei null count korbe!;
    // eta use korle input neyar jonno alada kore ar scanf(); nite hobe nah;
     printf("%s",a);

    return 0;
}