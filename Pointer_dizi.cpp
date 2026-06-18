#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*int main()
{
	int* a, i, j, tmp, n;
	printf("\n\n Bir arrayi pointer kullanarak sİrala:\n");
	printf("--------------------------------------------\n");

	printf(" Eleman sayisini giriniz : ");
	scanf("%d", &n);

	a = (int*)malloc(n * sizeof(int));
	if (a == NULL)
	{
		printf(" Bellek yetersiz");
		return 1;
	}
	printf(" %d tane sayi giriniz: \n");
	for (i = 0; i < n; i++) 
	{
		printf(" eleman - %d :", i + 1);
		scanf("%d", a + i);

	}

	for (i = 0; i < (n - 1); i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (*(a + i) > *(a + j))
			{
				tmp = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = tmp;

			}
		}
	}
	printf("\n siralama sonrasi elemanlar: \n");
	for (i = 0; i < n; i++)
	{
		printf("Eleman - %d : %d \n", i + 1, *(a + i));

	}
	free(a);
	printf("\n");

	return 0;
}*/ 