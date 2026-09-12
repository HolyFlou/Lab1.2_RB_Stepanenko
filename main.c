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
    
    N = (x2 - x1) / delta + 1;

    for (int i = 1; i <= N; i++)
    {
        char temp[100];
        
        double func = (x1*x1*x1)/20 - 5*(x1*x1) + 1000;

        strcat(result, "\n+----------+----------+----------+");
        sprintf(temp, "\n|%10u|%10.2lf|%10.2lf|", i, x1, func); 
        strcat(result, temp);
        
        x1 += delta; 
    }

    return 0;
}