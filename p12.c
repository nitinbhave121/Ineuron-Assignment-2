
//  Write a program to take a three digit number from the user and rotate its digits by
//one position towards the right.

#include <stdio.h>

int main() {
    int num, digit1, digit2, digit3;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    digit1 = num / 100;
    digit2 = (num / 10) % 10;
    digit3 = num % 10;
    int temp = digit1;
    digit1 = digit3;
    digit3 = digit2;
    digit2 = temp;
    printf("The rotated number is: %d%d%d\n", digit1, digit2, digit3);

    return 0;
}

/*
Output : Enter a three-digit number: 123
The rotated number is: 312

*/