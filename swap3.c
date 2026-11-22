#include <stdio.h>

int main()
{
    int a,b,c,temp;
    printf("Enter the numbers: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("Before: a=%d, b=%d, c=%d\n",a,b,c);

    temp=a;
    a=b;
    b=c;
    c=temp;

    printf("After: a=%d, b=%d, c=%d\n",a,b,c);
    return 0;
}