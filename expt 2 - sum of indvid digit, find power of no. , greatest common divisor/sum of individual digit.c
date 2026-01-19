#include <stdio.h>

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 10) + sum(n / 10);
    }
}

int main() {
    int a;
    printf("enter number: ");
    scanf("%d", &a);

    int result = sum(a);
    printf("\nans= %d", result);

    return 0;
}
