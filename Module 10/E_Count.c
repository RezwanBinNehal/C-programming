#include <stdio.h>
#include<string.h>
int main()
{
     char a[1000001];
     scanf("%s",a);
     int sum=0;
     for(int i=0;i<strlen(a);i++) // ekhane jehetu i kon porjonto jabe ta kichu bola nai tai length
     // dhore nite hibe!;
     {
        sum=sum+(a[i]-'0'); //'0' holo charecter 0 ;ekhane sum er maan 0 ekhon ei 0 er sathe array teh 
        //input neya array er maan ami jog kori tahole ultimately tai pai,porer bar abar porer songkha
        //jog korle kromannoye jog hote thakbe ar jodi 5 hoy songkha jar asccii value 53 tar
        //theke jodi ami '0' ba 48 biyog kori tahole toh ultimately 5 e thaktese,evabei kromagoto sum 
        //cholte thakbe;
     }
      printf("%d",sum); // loop er baire print korte hobe karon loop er moddhe print korle ekta ekta
      //songkha loop jog hobe ar dekhabe jate acceptable output paoa jabe na;
    return 0;
}