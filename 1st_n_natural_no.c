#include<stdio.h>
int sum(int);
int main()
{
    int n,s;
    scanf("%d",&n);
    s=sum(n);
    printf("sum of n natural numbers:%d",s);
}
int sum(int n)
{
    int i,sum=0;
    for(i=1;i<n;i++)
    {
        sum=sum+i;

    }
    return sum;
}

