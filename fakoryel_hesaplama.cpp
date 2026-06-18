#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

    int faktoriyel(int n);
    
    int main()
    {
        int sayi;
        int sonuc;
        printf("Faktoriyelini hesaplamak istediginiz sayiyi giriniz:");
        scanf("%d",&sayi);
        
        if(sayi<0)
        {
            printf("Negatif sayidir faktoriyeli hesaplanamaz!\n");
        }
        else
        {
            sonuc=faktoriyel(sayi);
            printf("%d faktoriyelin sonucu: %d'dir.\n",sayi,sonuc);
            getch();
        }
        return 0;
    }
// Fonksiyon tanımı
int faktoriyel(int n)
{
    int sonuc = 1;
    for(int i=1; i<=n; i++)
    {
        sonuc *= i;
    }
    return sonuc;
}