#include <stdio.h>
#include <stdlib.h>

int *dizi= NULL;
int boyut=0;

int main()
{
    int secim;
    int sayi;
    int sonuc;
    
    do 
    {
        printf("1. Sayi Ekle\n 2. Listele\n 3.Ara\n 4.Cikis\n Seciminiz: ");
        scanf("%d",&secim);
        switch(secim)
        {
            case 1:
                printf("Eklenecek sayiyi giriniz:");
                scanf("%d",&sayi);
                boyut++;
                dizi=(int*)realloc(dizi,boyut*sizeof(int));
                if(dizi==NULL)
                {
                    printf("Bellek tahsisinde hata olustu!\n");
                    return 1;
                }
                dizi[boyut-1]=sayi;
                break;
            case 2:
                printf("Dizideki sayilar: ");
                for(int i=0; i<boyut; i++)
                {
                    printf("%d ",dizi[i]);
                }
                printf("\n");
                break;
            case 3:
                printf("Aranacak sayiyi giriniz:");
                scanf("%d",&sayi);
                sonuc=-1;
                for(int i=0; i<boyut; i++)
                {
                    if(dizi[i]==sayi)
                    {
                        sonuc=i;
                        break;
                    }
                }
                if(sonuc!=-1)
                {
                    printf("Sayi bulundu, index: %d\n",sonuc);
                }
                else
                {
                    printf("Sayi bulunamadi!\n");
                }
                break;
            case 4:
                printf("Cikis yapiliyor...\n");
                break;
            default:
                printf("Gecersiz secim! Lutfen tekrar deneyiniz.\n");

             
        }
        
    }
    while(secim!=4);
    
    free(dizi);
    return 0;
}