#include<stdio.h>
int main()
{
    char * message="hello";
     char *ptr =message;
    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    return ;
}
