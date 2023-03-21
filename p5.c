
// Write a program to input a three digit number and display the sum of the digits.

#include<stdio.h>
int main()
{
    int num,a,b,c;
    printf("enter a number\n");
    scanf("%d",&num);
    a=num%10;      
    num=num/10;    
    b=num%10;       
    num=num/10;    
    c=num%10;      
    
    printf("The sum of three digit number is %d ",a+b+c);
}

/*
enter a number
555
The sum of three digit number is 15 
*/