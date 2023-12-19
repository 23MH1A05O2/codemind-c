#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int se;
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
        if(se==a[i])
        {
            c++;
        }
    }
    printf("%d",c);
}