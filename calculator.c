#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    int a,b;
    scanf("%d%d",&a,&b);
    switch(ch)
    {
        case'+':printf("sum=%d",a+b);
                 break;
         case'-':printf("diff=%d",a-b);
                 break;
         case'*':printf("mul=%d",a*b);
                 break;
          case'/':printf("div=%d",a/b);
                 break;

    }
    return 0;
}
