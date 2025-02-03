// Menu Driven Calculator

#include <stdio.h>

int add();
int sub ();
int div();
int multy();

int main()
{
    int input;
    printf("Hello!\n");
    printf("1. Addition\n2. Subtraction\n3. Division\n4. Multiplication\n");
    printf("Select any option below: ");
    scanf("%d",&input);

    switch (input)
    {
        case 1:
        add();
        break;

        case 2:
        sub();
        break;

        case 3:
        div();
        break;

        case 4:
        multy();
        break;
        
        default:
        printf("Invalid Input!\n");
    }
}

int add()
{
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("%d + %d = %d\n",num1,num2,num1+num2);
}

int sub()
{
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("%d - %d = %d\n",num1,num2,num1-num2);
}

int div()
{
    double num1, num2;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("%.0lf / %.0lf = %.2lf\n",num1,num2,num1/num2);
}

int multy()
{
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("%d x %d = %d\n",num1,num2,num1*num2);
}