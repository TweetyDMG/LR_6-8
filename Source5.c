#include <stdio.h>
#include <locale.h>
#include <math.h> 

int m()
{
	setlocale(LC_CTYPE, "RUS");

	int n, m;

	printf("¬введите число n: ");
	scanf("%d", &n);

	printf("¬введите число m: ");
	scanf("%d", &m);

	int i = m;
	int s = 0;

	for (int a = 0; i >= n; i--)
	{
		s += i;
		a += 1;
		printf("%d: выполнено %d раз\n", a, i + 1);
	}
	printf("результат: %d", s);

	// n = 5, m = 10, результат 45
}