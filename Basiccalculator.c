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

int main()
{
    int x, y, sum = 0, difference = 0, product = 0, quotient = 0;
    printf("Enter the numbers: \n");
    scanf("%d", &x);
    scanf("%d", &y);
    sum = add(x, y);
    difference = sub(x, y);
    product = mul(x, y);
    quotient = div(x, y);
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Produce = %d\n", product);
    printf("Quotient = %d", quotient);

    return 0;
}