#include<stdio.h>
int main()
{
    int a[5]={28,66,37,97,37};
    int i=0,j=0,min=0,t=0;
    int n=5;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])

        min=j;
        }
    }
    t=a[i];
    a[i]=a[min];
    a[min]=t;
    printf("\n");
    for(i=0;i<=5;i++)
    {
        printf("%d",a[i]);
    }

}
