#include<stdio.h>
int fact_no(int);
int main()
{
    int f,n;
    scanf("%d",&n);
    if(n<=0)
    {

     printf("invalid input");
    }
    else
        f=fact_no(n);
        printf("%d!=%d",n,f);

}
int fact_no(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
