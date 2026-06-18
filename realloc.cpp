#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

/*int main()
{
	int* notlar = NULL;
	int* temp = NULL;
	int i = 0, girilen_not;
	double toplam = 0.0;
	double ort = 0.0;

	notlar = (int*)malloc(sizeof(int));
	if (notlar == NULL)
	{
		printf("Kritil Hata : Baslangic bellegi ayrilamadi! \n");
		return 1;
	}
	printf("--- Not Hesaplama Sistemi ---\n");
	printf("Notlari Giriniz(Bitirmek icin -1 yazin): \n");

	while (1)
	{
		printf("%d. Not : ", i + 1);
		if (scanf("%d", &girilen_not) != 1)
		{
			printf("Hata : Lutfen sadece tam sayi giriniz! \n");

			while (getchar() != '\n');
			continue;

		}
		if (girilen_not == -1) 
			break;
		if (girilen_not < 0 || girilen_not>100)
		{
			printf(" Hata : Gecersiz not! ( Notlar 0-100 arasinda olmalidir).\n");
			continue;
		}

		toplam += girilen_not;
		*(notlar + i) = girilen_not;
		i++;


		temp = (int*)realloc(notlar, (i + 1) * sizeof(int));
		if (temp == NULL)
		{
			printf("\nUyari: Bellek doldu Girilen %d not ile isleme devam ediliyor.\n", i);

		}
		notlar = temp;
	}
	printf("\n----------------------------\n");
	if (i > 0) 
	{
		ort = toplam / i;
		printf("girilen Not Sayisi : %d\n", i);
		printf("Notlarin toplami : %.2f\n", toplam);
		printf("Sinif ortalamasi : %.2\n", ort);
	}
	else
	{
		printf("Hic not girilmedigi icin hesaplama yapilamadi.\n");
	}
	printf("----------------------------\n");

	free(notlar);
	notlar = NULL;

	printf("\nProgram Bitti. Cikmak icin bir tusa basin...");
	while (getchar() != '\n');
	getchar();

	return 0;
}*/ 