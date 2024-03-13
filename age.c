#include<stdio.h>
main()
{
float bus_fare;
int age;
scanf("%f%d",&bus_fare,&age);
if(age>60)
{
    bus_fare=bus_fare-(20.0/100*bus_fare);

}
printf("bus_fare=%f",&bus_fare);
}
