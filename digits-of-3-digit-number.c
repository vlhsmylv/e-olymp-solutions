// Problem 

#include <stdio.h>

long long a;

int main(void)
{
    scanf("%lld", &a);

    printf("%lld %lld %lld", (a / 100), ((a % 100) / 10), ((a % 100) % 10));

    return 0;
}