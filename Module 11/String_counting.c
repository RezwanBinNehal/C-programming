#include <stdio.h>
#include<string.h>
int main()
{
     char a [100];
     scanf("%s",a);
     int cnt[26]={0}; // ekhane cnt teh 26 ta alphabet er input neya hob jonne 26 ta index banaite hobe!;
     for(int i=0;i<strlen(a);i++)
     {
        int k=a[i]-'a'; // index gulo 0 theke 1,2,3 evabe cholte thake kintu a,b,c egular ascii hoilo 97
        // theke shuru tai sob gula theke 97 orthat 'a' minus korle 0,1,2,3 ultimately evabei cholte thake
        //tai a[i] index gulor protiti theke a minus kora hoyeche!;
        cnt[k]++;  // counting 26 ta letter porjonto cholbe;
     }
     for(int i=0;i<strlen(a);i++)
     {
        int k=a[i]-'a';
        printf("%c - %d\n",k+'a',cnt[k]);

        // if (cnt[i]!=0) // jodi ami dkhte chai je je charecter er maan 0 noy segula tahole ei vabe dekha lagbe!
        // {
        //     printf("%c - %d\n",i+'a',cnt[i]);
        // }
        // printf("%c - %d\n",i+'a',cnt[i]); ar na hoile evabe print diye dile shob gula dekhabe koyta kore ache!;
         // ekhane %c na diye %d deya hoto tahole int maan paoa jeto orthat
        // ascii code paoa jeto!;abar i er sathe 'a' jog kore deya hoyeche karon jate ager 1,2,3 ogula abr
        // tader ascii code fire pay ebong convert korle jeno charecter tai paoa jay!;
     }
    return 0;
}