#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

int rem(int a, int b)
{
    return a % b;
}

int main()
{
    int x, y, sum = 0, difference = 0, product = 0, quotient = 0, remainder = 0;
    float avg;
    printf("Enter the numbers: \n");
    scanf("%d", &x);
    scanf("%d", &y);
    sum = add(x, y);
    difference = sub(x, y);
    product = mul(x, y);
    quotient = div(x, y);
    remainder = rem(x, y);
    avg = (x + y) / 2;

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Produce = %d\n", product);
    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);
    printf("Average = %.2f\n", avg);

    return 0;
}