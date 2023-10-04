#include <stdio.h>
#include <locale.h>

int ma2n()
{
	setlocale(LC_CTYPE, "RUS");

	int years;

	printf("Привет! Я проверяю високосный год или нет.\n\n");

	printf("Введите год: ");
	scanf("%d", &years);

	int result = years % 4;
	int result1 = years % 100;
	int result2 = years % 400;

	if (result == 0 && result1 != 0 || result2 == 0 )
		printf("%d год високосный", years);
	else 
		printf("%d год не високосный", years);
	

//input: 2018 output : "год 2018 не високосный"

//input : 1900 output : "год 1900 не високосный"

//input : 2020 output : "год 2020 високосный"
}