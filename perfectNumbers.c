// Printing Perfect Number in given interval

#include <stdio.h>

int isPerfect(int num);

int main()
{
    int start, end;
    printf("Enter the STARTING and ENDING point: ");
    scanf("%d %d", &start, &end);

    printf("Perfect Numbers in given Interval are:\n");
    
    while (start <= end)
    {
        if (isPerfect(start))
        {
            printf("%d\n", start);
        }

        start++;
    }   
}

int isPerfect(int num)
{
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if ( num % i == 0)
        {
            sum += i;
        }
    }
    return sum == num;
}