//Задание 1
#include <stdio.h>
#include <math.h>

_Bool isInArea(double x, double y)
{
    //Квадрат x∈[-1;1]; y∈[-1;1] и y > x
    if (-1 <= x && x <= 1 && -1 <= y && y <= 1 && y > x)
    return(1);
    else
    return(0);
}
