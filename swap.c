#include<stdio.h>
main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("a=%d b=%d",a,b);

}
