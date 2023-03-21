
//. Write a program to print unit digit of a given number

#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    n=n%10;
    printf("Unit digit  is %d",n);
    return 0;
}

/*
output : Enter any number
12345
Unit digit  is 5
*/