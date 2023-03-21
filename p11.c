
/*
 Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR
and convert it into USD.
*/

#include<stdio.h>
int main()
{
    float inr,usd;
    printf("Enter Rupees\n");
    scanf("%f",&inr);
    usd=inr/76.23;
    printf("%f  in USD is %f",inr ,usd);
    return 0;
}

/*
Output :

Enter Rupees
76.23
76.230003  in USD is 1.000000
*/