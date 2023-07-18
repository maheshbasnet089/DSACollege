#include <stdio.h>

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sum(n - 1);
    }
}

void main()
{
    int n;
    int result;
    printf("Enter the number ");
    scanf("%d", &n);
    result = sum(n);
    printf("The total sum is /t %d",result);
}