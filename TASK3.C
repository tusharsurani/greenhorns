#include<stdio.h>
#include<conio.h>
void main()
{
    float c,f;
    clrscr();
    printf("enter the tampature in celsius:");
    scanf("%f",&c);
    f=1.8*c+32;
    printf("tamparature in fahrenheit:%f",f);
    getch();

}