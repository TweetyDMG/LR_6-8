#include <stdio.h>
#include <locale.h>

int ma2n()
{
	setlocale(LC_CTYPE, "RUS");

	int years;

	printf("������! � �������� ���������� ��� ��� ���.\n\n");

	printf("������� ���: ");
	scanf("%d", &years);

	int result = years % 4;
	int result1 = years % 100;
	int result2 = years % 400;

	if (result == 0 && result1 != 0 || result2 == 0 )
		printf("%d ��� ����������", years);
	else 
		printf("%d ��� �� ����������", years);
	

//input: 2018 output : "��� 2018 �� ����������"

//input : 1900 output : "��� 1900 �� ����������"

//input : 2020 output : "��� 2020 ����������"
}