// checking EVEN or ODD using function

#include <stdio.h>

void evenOrOdd (int num);

int main()
{
    int num;
    printf("Enter a number to check: ");
    scanf("%d", &num);
    evenOrOdd(num);

    return 0;
}

void evenOrOdd (int num)
{
    if (num % 2 == 0)
    {
        printf("%d is an EVEN number.\n", num);
    }
    else
    {
        printf("%d is an ODD number.\n", num);
    }
}