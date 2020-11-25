/*Write a program to convert poisa to taka.*/

#include<stdio.h>
main()
{
 int a,b,c;
 printf("Enter Amount In Poisa: ");
 scanf("%d",&a);
 b = a/100;
 c = a%100;
 if(a%100==0)
 {
 printf("%d Poisa Is = %d Taka",a,b);
 }
 else
 printf("%d Poisa Is = %d Taka %d Poisa",a,b,c);
}
