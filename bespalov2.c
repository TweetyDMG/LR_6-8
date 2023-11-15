/*Поясню за твою первую функцию:
Проверил её в приложении, x может быть любым. Иными словами пользователь может задать любой интервал. 
Чтобы курипта не придиралась, в курсаче ты должен привести решение первой функции, то есть найти область определения.
У тебя должно получится x принадлежит R(любому числу). А y всегда будет положительным*/

#include <stdio.h>
#include <math.h>

double function(double x) {
    double result = x * atan(x) - log(sqrt(1 + x * x));
    return result;
}

int main() {
    double x_start, x_end, step;

    // Ввод интервала и шага
    printf("Введите начальное значение x: ");
    scanf("%lf", &x_start);
    printf("Введите конечное значение x: ");
    scanf("%lf", &x_end);
    printf("Введите шаг h: ");
    scanf("%lf", &step);

    // Печать заголовка таблицы
    printf("\n%-15s%-15s\n", "x", "F1(x)");

    // Табуляция значений функции для интервала (x_start, x_end)
    double x = x_start + step;
    for (; x < x_end; x += step) {
        double result = function(x);
        printf("%-15.2lf%-15.2lf\n", x, result);
    }
    puts("");
    //Табуляция значений функции для интервала [x_start, x_end)
    printf("\n%-15s%-15s\n", "x", "F1(x)");
    x = x_start;
    for (; x < x_end; x += step) {
    double result = function(x);
    printf("%-15.2lf%-15.2lf\n", x, result);
    }
    puts("");
    
    //Табуляция значений функции для интервала (x_start, x_end]
    printf("\n%-15s%-15s\n", "x", "F1(x)");
    x = x_start + step;
    for (; x <= x_end; x += step) {
        double result = function(x);
        printf("%-15.2lf%-15.2lf\n", x, result);
    }
    puts("");

    //Табуляция значений функции для интервала [x_start, x_end]
    printf("\n%-15s%-15s\n", "x", "F1(x)");
    x = x_start;
    for (; x <= x_end; x += step) {
        double result = function(x);
        printf("%-15.2lf%-15.2lf\n", x, result);
    }
    puts("");
    return 0;
}
