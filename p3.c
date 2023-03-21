

// . Write a program to swap values of two int variables

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter numbers to swap  numbers\n");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("values after swapping is a=%d and b=%d",a,b);
    return 0;
}

/*
Enter numbers to swap  numbers
10 20
values after swapping is a=20 and b=10
*/