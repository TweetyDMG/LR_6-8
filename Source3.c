#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES 
#include <math.h> 

int main23()
{
    setlocale(LC_CTYPE, "RUS");

    double x1;
    double res1;

    printf("������� x: ");
    scanf("%lf", &x1);

    if (x1 >= 8) 
        res1 = -pow(x1, 2) + x1 - 9;
    if (x1 < 8)    
        res1 = 1. / (pow(x1, 4) - 6);
    printf("�����: %0.1lf", res1);
//����������� ������: ��� x = 9 ����� = -81
//                    ��� x = 2 ����� = 0,1
//

}