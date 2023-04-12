#include <stdio.h>
int main()
{
     int a,vf,vs;
     //vf=vag fol,vs=vag sesh
     scanf("%d",&a);
     vf=a/10;
     vs=a%10;
     if (vs%vf==0||vf%vs==0)
     {
        printf("YES");
     }
     else{
        printf("NO");
     }
    return 0;
}