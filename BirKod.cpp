#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/* diziler
5 öðrencinin 4 notunu alýp not ortalamasini hesaplayan programý yazýnýz */
/*
int main()
{
	float ogr[5][4];
	int i, j;
	float toplam = 0, ortalama;
	for (i = 0; i < 5; i++)//Öðrenciler arasýnda dönüþüm yapmak için
	{
		for (j = 0; j < 4; j++)//Öðrencinin notlarýnda gezinmek için
		{
			printf("Lutfen %d inci ogrencinin %d. notunu giriniz: ", i + 1, j + 1);
			scanf("%f", &ogr[i][j]);
			if (ogr[i][j] < 0 || ogr[i][j]>100)
			{
				printf("Hatali Giris Lutfen Tekar deneyiniz \n");
				j--;
			}
		}
	}
	for (i = 0; i < 5; i++)//Öðrenciler arasýnda dönüþüm yapmak için
	{
		for (j = 0; j < 4; j++)//Öðrencinin notlarýnda gezinmek için
		{
			toplam = ogr[i][j] + toplam;
		}
		ortalama = toplam / j;//ortalama=toplam/4;
		printf("%d inci ogrencinin not ortalamasi %.2f\n", i + 1, ortalama);
		toplam = 0;
	}
	return 0;
}*/