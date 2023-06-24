   #include<stdio.h>
   #include<conio.h>
   void main()
   {
     int a,b;
     printf("enter a value of A=");
     scanf("%d",&a);
     printf("enter a value of B=");
     scanf("%d",&b);
     a=a+b;
     b=a-b;
     a=a-b;
     printf("swiping value of A=%d\n",a);
     printf("swiping value of B=%d",b);
     getch();
   }