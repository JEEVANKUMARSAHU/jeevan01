#include <stdio.h>
int main()
{
    int a, b;
    printf("enter 1st number a :");
    scanf("%d", &a);
    printf("enter 2nd number b :");
    scanf("%d", &b);
    printf("Before swapping: \n a=%d \n b=%d", a, b);
    /*using arithmetic operators '+' and '-' the numbers can be swapped as follows */
    a = a + b; // The sum becomes 30
    b = a - b; // Subtracting original b value from the sum we get required b value
    a = a - b; // Subtracting the above b value from the sum we get required a value
    printf("\nAfter swapping: \n a=%d \n b=%d", a, b);
    return 0;
}
