#include<stdio.h>
int main()
{
    int i,n,flag=0;
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("it is a prime no");
    }
    else
    {
        printf("is not a prime no");
    }
}
