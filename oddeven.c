#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number to be checked: ");
    scanf("%d", &n);

    if(n%2==0)
    {
        printf("%d is EVEN\n",n);
    }
    else
    {
        printf("%d is ODD\n",n);
    }
    return 0;

}