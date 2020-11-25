/*Write a C program to calculate the sum of the given series 1^2+2^2+3^2+4^2+...+n^2*/

#include <stdio.h>
main()
{
 int Num, Sum = 0;
 printf("Please Enter Any Integer: ");
 scanf(" %d",&Num);
 Sum = (Num * (Num + 1) * (2 * Num + 1 )) / 6;
 printf("The Sum of Series for %d = %d ",Num, Sum);
}
