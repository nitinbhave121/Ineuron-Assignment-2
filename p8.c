

// . Write a program to print size of an int, a float, a char and a double type variable

#include<stdio.h>
int main()
{
    printf("The size of integer is %d , the size of char is %d , The size of float is %d and the size of double is %d",sizeof(int),sizeof(char),sizeof(float),sizeof(double));
    return 0;
}
/*
Output: The size of integer is 4 , the size of char is 1 , The size of float is 4 and the size of double is 8
*/