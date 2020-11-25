/*Write a C program to calculate surface area A = 2πrh + 2πr2, lateral area AL = 2πrh, and base area AB= πr2*/

#include<stdio.h>
#include<math.h>
#define pi 3.1416
main()
{
 int r, h;
 float sa,ba,la;
 printf("Enter Radius: ");
 scanf("%d",&r);
 printf("Enter Height: ");
 scanf("%d",&h);
 sa = (2*pi*r*h) + (2*pi*(r*r));
 ba = pi*(r*r);
 la = 2*pi*r*h;
 printf("Surface Area: %.2f \nBase Area: %.2f \nlateral Area: %.2f \n",sa,ba,la);
}
