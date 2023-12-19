#include<stdio.h>
int main()
{
    int n,sum_odd=0,sum_even=0;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            sum_odd+=a[i];
        }
        else
        {
            sum_even+=a[i];
        }
    }
    if(sum_odd>sum_even)
    {
        printf("%d",sum_odd-sum_even);
    }
    else
    {
        printf("%d",sum_even-sum_odd);
    }
}