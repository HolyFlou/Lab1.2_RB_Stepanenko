#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    double x1, x2, delta;
    unsigned int N;

    char result[4000] = "*********************************\n*      N   *     X   *   F(X)   *\n*********************************";

    printf("Введіть початковий аргумент: ");
    scanf("%lf", &x1);

    printf("Введіть кінцевий аргумент: ");
    scanf("%lf", &x2);

    printf("Введіть крок зміни аргументу: ");
    scanf("%lf", &delta);
    
    return 0;
}