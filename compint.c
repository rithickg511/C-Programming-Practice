#include <stdio.h>

int main()
{
    int pr, y, r;
    float sim;
    printf("Enter the principle: ");
    scanf("%d", &pr);
    printf("Enter the year: ");
    scanf("%d", &y);
    printf("Enter the rate: ");
    scanf("%d", &r);
    sim = (pr * y * r) / 100;
    printf("The simple interest is %.2f", sim);
    return 0;
}