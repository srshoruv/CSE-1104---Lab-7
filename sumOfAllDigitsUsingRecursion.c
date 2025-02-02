// Sum of all digits of a number using recursion

#include <stdio.h>
int sumOfDigits(int num);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum = %d\n", sumOfDigits(num));
}

int sumOfDigits(int num)
{
    if (num == 0)
    {
        return 0;
    }
    return (num % 10) + sumOfDigits(num/10);
}