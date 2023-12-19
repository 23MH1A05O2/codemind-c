#include<stdio.h>
int main()
{
    int n,dg,ld=0;
    scanf("%d",&n);
    while(n>0)
    {
        dg=n%10;
        if(dg>ld)
        {
            ld=dg;
        }
      n=n/10;
    }
    printf("%d",ld);
}