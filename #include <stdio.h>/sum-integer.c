#include <stdio.h>

// Write a program that accepts two integers from the user and calculate the sum of the two integers.

int main()
{

    int num1, num2, sum;

    printf("Hello, please add your first number!\n");
    scanf("%i", &num1);

    printf("Please enter your second number!\n");
    scanf("%i", &num2);

    sum = (num1 + num2);
    printf("\nThe sum of your two numbers is: %i", sum);
    printf("\nKeep on coding!!");

    return 0;

}
