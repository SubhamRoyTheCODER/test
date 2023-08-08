#include <stdio.h>

int fib(int n);

int main()
{
    printf("Enter the number");
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("%d \t", fib(i));
    }

    return 0;
}

int fib(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 0)
    {
        return 0;
    }

    int fibN = fib(n - 1) + fib(n - 2);
    return fibN;
}