/*Write a program in C that takes minutes as input and displays the total number of hours
and minutes.*/

#include<stdio.h>
main()
{
 int a,b,c;
 printf("Enter Minutes: ");
 scanf("%d",&a);
 b = a/60;
 c = a%60;
 if(a%60==0)
 {
 printf("%d Minutes Is = %d Hours",a,b);
 }
 else
 printf("%d Minutes Is = %d Hours %d Minutes",a,b,c);
}
