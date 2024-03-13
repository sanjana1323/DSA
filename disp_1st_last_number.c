#include<stdio.h>
int main()
{
    int n,f,l;
    printf("enter the number");
    scanf("%d",&n);
    l=n%10;
    f=n/1000;
    printf("ld=%d\nfd=%d\n",l,f);
}
