// Program to convert kilometer into meter and centimeter

#include<stdio.h>

int main()
{
    float km, meter, cm;

    printf("Enter the distance in KM : ");

    scanf("%f",&km);

    meter = km*1000;
    cm = km*100000;

    printf("The distance in meter is %.2fm, and in centimeter is %.2fcm ", meter, cm);

    return 0;

}

