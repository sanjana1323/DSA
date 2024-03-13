#include<stdio.h>
void fibo(int);
int main()
{
    int n;
    printf("enter the values of n");
    scanf("%d",&n);
    if(n>2)
    {
        fibo(n);
    }
    else
    {
        printf("invalid data");
    }
}
    void fibo(int n)
    {
        int i,t1=0,t2=1,t3;
        printf("%d",t1);
        printf("%d",t2);
        for(i=3;i<=n;i++)
    {
    t3=t1+t2;
    printf("%d",t3);
    t1=t2;
    t2=t3;
    }
}
