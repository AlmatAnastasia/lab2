//Задание 2
#include <stdio.h>
#include <math.h>

 double fun(double x)
{
     double f;
     x <= 3 ? (f=pow(x, 2) - 3 * x + 9):  (f=1/(pow(x, 3) + 6));  
     return(f);
}
