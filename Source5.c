#include <stdio.h>
#include <locale.h>
#include <math.h> 

int m()
{
	setlocale(LC_CTYPE, "RUS");

	int n, m;

	printf("�������� ����� n: ");
	scanf("%d", &n);

	printf("�������� ����� m: ");
	scanf("%d", &m);

	int i = m;
	int s = 0;

	for (int a = 0; i >= n; i--)
	{
		s += i;
		a += 1;
		printf("%d: ��������� %d ���\n", a, i + 1);
	}
	printf("���������: %d", s);

	// n = 5, m = 10, ��������� 45
}