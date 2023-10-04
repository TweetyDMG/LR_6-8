#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");

    int var_shar;
    int amount;

    printf("я вычисл€ю твой вариант! \n\n");

    printf("¬веди свой номер с общем списке: ");
    scanf("%d", &var_shar);

    printf("¬веди количество вариантов в задании: ");
    scanf("%d", &amount);

    int variant = var_shar % amount + 1;

    printf("¬аш вариант: %d", variant);

}