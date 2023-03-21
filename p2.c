
//. Write a program to print a given number without its last digit.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    n=n/10;
    printf("Unit digit  is %d",n);
    return 0;
}

/*
Output:

Enter any number
12345
Unit digit  is 1234
*/