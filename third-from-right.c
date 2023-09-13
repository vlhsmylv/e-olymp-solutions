/*
    Credits: www.valehismayilov.com
    Repo: https://github.com/vlhsmylv/e-olymp-solutions
*/

#include <stdio.h>

long long a;

int main(void)
{
    scanf("%lld", &a);

    printf("%lld", (a % 1000) / 100);

    return 0;
}