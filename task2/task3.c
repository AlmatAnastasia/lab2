//Задание 3
#include <stdio.h>
#include <math.h>

_Bool isInArea(double x, double y);
double fun(double x);

int main(void)
{
    double x, y;
    int n;
    printf("    Меню\n 1. Задание 1\n 2. Задание 2\n");
    printf("Выберите 1 или 2\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
    printf("Задание 1\n");
    printf("Введите значение x\n");
    printf("x = ");
    scanf("%lf", &x);
    printf("Введите значение y\n");
    printf("y = ");
    scanf("%lf", &y);
    if (isInArea(x, y) > 0 )
    printf("%d - точка попадает  в заданную область", isInArea(x, y));
    else 
    printf("%d - точка не попадает  в заданную область", isInArea(x, y));
    break;
    case 2:
    printf("Задание 2\n");
    printf("Введите значение x\n");
    printf("x = ");
    scanf("%lf", &x);
    printf("%.4lf",fun(x));
    break;
    default: 
    break;
    }
 return(0);
}
