/*
    Credits: www.valehismayilov.com
    Repo: https://github.com/vlhsmylv/e-olymp-solutions
*/

#include <stdio.h>

long long n, totalLeaves;

int main(void)
{
    scanf("%lld", &n);

    for (long long i = 1; i <= n; i++)
    {
        totalLeaves += (i * 2);
    }

    totalLeaves += 1;

    printf("%lld\n", totalLeaves);

    return 0;
}