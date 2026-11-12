#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("Before: a=%d, b=%d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After: a=%d, b=%d", a, b);
    return 0;
}
