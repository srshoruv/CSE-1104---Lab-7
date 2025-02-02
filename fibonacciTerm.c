#include <stdio.h>

int genFib(int n);

int main() 
{
    int n;
    printf("Enter the Nth position: ");
    scanf("%d", &n);

    printf("%dth Fibonacci Term is: %d\n", n, genFib(n));
    return 0;
}

int genFib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1) 
    {
        return 1;
    }

    return genFib(n - 1) + genFib(n - 2);
}