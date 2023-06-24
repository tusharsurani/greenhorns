#include<stdio.h>
#include<conio.h>
void main()
{
   int bs,hra,da,ta,gs;
   clrscr();
   printf("enter the value of bs=");
   scanf("%d",&bs);
   printf("enter the value of hra=");
   scanf("%d",&hra);
   printf("enter the value of da=");
   scanf("%d",&da);
   printf("enter the value of ta=");
   scanf("%d",&ta);
   hra=(bs*hra)/100;
   da=(bs*da)/100;
   ta=(bs*ta)/100;
   gs=hra+da+ta+bs;
   printf("total salary=%d",gs);
   getch();

}