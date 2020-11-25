/*Take a character input from the user and check if it is a digit or not*/

#include <stdio.h>
main()
{
 char ch;
 printf("Enter Any character: ");
 scanf("%c", &ch);
 if(ch >= '0' && ch <= '9')
 {
 printf("%c Is A digit.", ch);
 }
 else
 {
 printf("%c Is Not A Digit", ch);
 }
}
