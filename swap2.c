#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the numbers: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Before: a=%d, b=%d\n",a,b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("After: a=%d, b=%d\n",a,b);
    return 0;
}