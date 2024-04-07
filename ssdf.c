#include <stdio.h>  // Include standard input-output library

int main(void)
{
    long x, y;  // Declare variables x and y of type long

    // Prompt the user to enter a value for x
    printf("Enter a value for x: ");
    scanf("%ld", &x);  // Read the input value for x as a long integer

    // Prompt the user to enter a value for y
    printf("Enter a value for y: ");
    scanf("%ld", &y);  // Read the input value for y as a long integer

    // Compare the values of x and y
    if (x < y)  // If x is less than y
    {
        printf("x is less than y\n");  // Print a message indicating x is less than y
    }
    else if (x > y)  // If x is greater than y
    {
        printf("x is greater than y\n");  // Print a message indicating x is greater than y
    }
    else  // If x is equal to y
    {
        printf("x is equal to y\n");  // Print a message indicating x is equal to y
    }

    return 0;  // Return 0 to indicate successful execution
}
