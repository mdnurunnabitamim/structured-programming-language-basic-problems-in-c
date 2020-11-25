/*Write a C program to take input of an integer 'n'. Then determine whether the number is a
"Perfect number" or not. Also determine whether the number is a "Prime number or not.*/

# include <stdio.h>
main()
{
    int i, n, sum = 0, loop, isprime=1;

    printf("Please Enter Any Number: ");

    scanf("%d", &n);

    for(i = 1 ; i < n ; i++)
     {
        if(n % i == 0)
            sum = sum + i;
     for(loop = 2; loop < n; loop++)
         {
             if((n % loop) == 0)
                isprime = 0;
         }
     }
    if (sum == n)
        printf("\n%d Is a Perfect Number\n",n);
    else if (sum != n)
        printf("\n%d Is Not A Perfect Number\n",n);
    if (isprime ==1)
        printf("\n%d Is A Prime Number\n",n);
    else if (isprime == 0)
        printf("\n%d Is Not A Prime Number\n",n);
}
