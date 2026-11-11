#include <stdio.h>

int area(int a)
{
    return 3.14 * a * a;
}

int circumference(int a)
{
    return 2 * 3.14 * a;
}

int main()
{
    int r;
    float ar, cir;
    printf("Enter the radius: ");
    scanf("%d", &r);
    ar = area(r);
    cir = circumference(r);
    printf("The area is %.2f\n", ar);
    printf("The circumference is %.2f", cir);
    return 0;
}