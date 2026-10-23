#include <stdio.h>

int main()
{
    int a, b;
    l: printf("Enter two number: ");
    scanf("%d %d", &a, &b);
    if(b == 0)
    {
        printf("Your Input is wrong, value of B should not be zero ");
        goto l;
    }
    printf("a/b = %d\n", a/b);
    return 0;
}
