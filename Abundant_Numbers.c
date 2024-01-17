#include<stdio.h>
int main()
{
    int n,i=1,t,sum=0;
    scanf("%d",&n);
    for(t=n;i<n;i++)
    {
        if((n%i)!=0)
        {
            continue;
        }
        else
        {
            sum=sum+i;
        }
    }
    if(sum>t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}