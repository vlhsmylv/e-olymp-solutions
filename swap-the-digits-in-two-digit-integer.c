#include <stdio.h>

long long a;

int main(void)
{
    scanf("%lld", &a);

    printf("%lld", ((a % 10) * 10) + ((a / 10) % 10));

    return 0;
}