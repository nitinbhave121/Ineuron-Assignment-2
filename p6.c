

// Write a program which takes a character as an input and displays its ASCII code

#include<stdio.h>
int main()
{
    char c;
    printf("Enter any character\n");
    scanf("%c",&c);
    printf("The ASCII Value of %c is = %d",c,c);
    return 0;
}

/*
Output: Enter any character
B
The ASCII Value of B is = 66
*/