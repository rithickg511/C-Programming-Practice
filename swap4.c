#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the numbers: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("Before: a=%d, b=%d, c=%d\n",a,b,c);
    
    c=a+b+c;
    b=c-a-b;
    a=c-a-b;
    c=c-a-b;

    printf("After: a=%d,b=%d,c=%d\n",a,b,c);
    return 0;


    
}