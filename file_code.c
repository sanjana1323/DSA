#include<stdio.h>
#define MAXSIZE 20



int main()
{
    FILE *input,*output;

    input=fopen("input.txt","r");
    output=("output.txt","w");
     int a[MAXSIZE];
    int i=0;

    if(input==NULL)
    {
        perror("Error:");
        return 1;
    }
    while(!feof(input))
    {
        fscanf(input,"%d",&a[i]);
        printf("\n%d\n",a[i]);
        i++;
    }
    return 0;
}
