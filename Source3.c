#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES 
#include <math.h> 

int main23()
{
    setlocale(LC_CTYPE, "RUS");

    double x1;
    double res1;

    printf("Введите x: ");
    scanf("%lf", &x1);

    if (x1 >= 8) 
        res1 = -pow(x1, 2) + x1 - 9;
    if (x1 < 8)    
        res1 = 1. / (pow(x1, 4) - 6);
    printf("Ответ: %0.1lf", res1);
//Контрольный пример: при x = 9 ответ = -81
//                    при x = 2 Ответ = 0,1
//

}