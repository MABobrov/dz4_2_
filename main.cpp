#include <stdio.h>

void zdn1() {
	int mas[7];
	for (int i = 0; i < 7; i++)
	{
		mas[i] = i;
	}
	for (int i = 0; i < 7; i++) {
		printf("Элемент %d: %d\n", i, mas[i]);
	}

}

void zdn2() {
	int n;
	int mas[100];
	printf("Введите количество элементов в массиве: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		mas[i] = i;
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", mas[i]);
	}
	printf("\n");

}

int main(void)
{
	zdn1();
	zdn2();
	return 0;
}