#include<stdio.h>
void pat(int);
int main()
{
    int n;
    scanf("%d",&n);
    pat(n);

}
void pat(int n)
{
    int i,j;
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=n;i++)
        {
            printf("*");
        }
        printf("\n");
    }
}
