#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");

    int var_shar;
    int amount;

    printf("� �������� ���� �������! \n\n");

    printf("����� ���� ����� � ����� ������: ");
    scanf("%d", &var_shar);

    printf("����� ���������� ��������� � �������: ");
    scanf("%d", &amount);

    int variant = var_shar % amount + 1;

    printf("��� �������: %d", variant);

}