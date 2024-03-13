#include<stdio.h>
#include<string.h>
int main()
{
    char str[9];
    int i,c=0;
    printf("enter the string");
    gets(str);
    for(i=0;str!='\0';i++)
    {
        if(str[i]==' ')
        {
            c++;
        }
    }
    printf("spaces=%d",c);
}
