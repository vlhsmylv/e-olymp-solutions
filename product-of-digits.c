/*
    Credits: www.valehismayilov.com
    Repo: https://github.com/vlhsmylv/e-olymp-solutions
*/

#include <stdio.h>

int main()
{
    int inp;
    int first;
    int second;
    int third;
    scanf("%d", &inp);
    third = inp % 10;
    second = (inp / 10) % 10;
    first = (inp / 10) / 10;

    printf("%d", first * second * third);

    return 0;
}