/*Convert a temperature reading in degrees Fahrenheit to degrees Celsius, using the formula C =
(5/9)* (F- 32).*/

#include<stdio.h>
main()
{
 float f,c;
 printf("Enter Temperature In Fahrenheit: ");
 scanf("%f",&f);
 c = (5/9) * (f - 32);
 printf("%.2f Fahrenheit Is = %.2f Celsius", f,c);
}
