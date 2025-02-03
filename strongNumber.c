// Strong Numbers between given interval using function

#include <stdio.h>

int factorial(int num);
int sumOfFact(int num);

int main()
{
    int start, end;
    printf("Enter the interval: ");

    scanf("%d %d", &start, &end);

    while (start <= end)
    {
        
        if (sumOfFact(start))
        {
            printf("%d\n", start);
        }

        start++;
    }
}

int factorial(int num)
{
    if(num == 0 || num == 1)
    {
        return 1;
    }

    return num * factorial(num-1);
}

int sumOfFact(int num)
{
    int temp = num, sum = 0;
        while (temp != 0)
        {
            int lastDig = temp % 10;
            sum += factorial(lastDig);
            temp /= 10;    
        }

    return num == sum;
}