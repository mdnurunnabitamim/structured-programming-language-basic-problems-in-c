/*An electric power distribution company charges its domestic consumers as follows
Consumption Rate of Units Charge (in taka)
********************************************************************
* 0 -200 taka  		                0.50 per unit				   *
********************************************************************
* 201 -400 taka 	     100 plus taka 0.65 per unit excess 200	   *
********************************************************************
* 401 - 600 taka 	    250 plus taka 0.80 per unit excess of 400. *
********************************************************************
* 601 and above taka 	250 plus taka 1.80 per unit excess of 600. *
********************************************************************
Write a C program that reads the customer number and power consumed and prints the
amount to be paid by the customer.*/

#include<stdio.h>
main()
{
 int customerno, powercon;
 float amount;
 printf("Enter Customer Number: ");
 scanf("%d", &customerno);
 printf("Enter The power Consumed: ");
 scanf("%d", &powercon);
 if (powercon >= 0 && powercon <= 200)
 amount = powercon * 0.50;
 else if (powercon > 200 && powercon < 400)
 amount = 100 + ((powercon - 200) * 0.65);
 else if (powercon > 400 && powercon <= 600)
 amount = 250 + ((powercon - 400) * 0.80);
 else if (powercon >600)
 amount = 250 + ((powercon - 600) * 1.80);
 printf("Amount To Be Paid By Customer No %d is = %5.2f Taka", customerno, amount);
}
