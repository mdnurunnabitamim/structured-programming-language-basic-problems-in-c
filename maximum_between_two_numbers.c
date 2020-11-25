/*Write a program that will find the maximum between two numbers*/

#include<stdio.h>
main()
{
 int num1,num2;
 printf("Enter Two Numbers(Separate by White Space): ");
 scanf("%d %d",&num1,&num2);
 if(num1>num2)
 {
 printf("%d Is The Maximum Number",num1);
 }
 if(num1<num2)
 {
 printf("%d Is The Maximum Number",num2);
 }
 if(num1==num2)
 {
 printf("All Two Numbers Are Equal");
 }
}
