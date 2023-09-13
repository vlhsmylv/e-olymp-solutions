/*
    Credits: www.valehismayilov.com
    Repo: https://github.com/vlhsmylv/e-olymp-solutions
*/

#include <stdio.h>

long long a;

int main(void)
{
    scanf("%lld", &a);

    printf("%lld", ((a % 10) * 1000) + (((a / 100) % 10) * 100) + (((a % 100) / 10) * 10) + a / 1000);

    return 0;
}