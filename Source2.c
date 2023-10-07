#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");

    int var_shar;
    int amount;

    printf("Я вычитаю твой вариант \n\n");

    printf("Введи свой вариант в общем списке: ");
    scanf("%d", &var_shar);

    printf("Введи количество вариантов в задании: ");
    scanf("%d", &amount);

    int variant = var_shar % amount + 1;

    printf("Твой вариант: %d", variant);

}
