
// Write a program to swap values of two int variables without using a third variable.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter numbers to swap\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The values after swapping are a=%d and b=%d",a,b);
    return 0;

}

/*
Output: Enter numbers to swap
10 20
The values after swapping are a=20 and b=10
*/