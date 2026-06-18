#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int topla(int x, int y);
float ortalama(int x,int y);

int x,y;
main()
{
printf("toplami ve ortalamasi alinacak iki sayyi giriniz: ");
scanf("%d %d",&x,&y);
printf("toplam: %d\n",topla(x,y));
printf("ortalama: %f\n",ortalama(x,y));
getch();

}
float ortalama(int x,int y)
{
    float ort;
    ort=topla(x,y)/2.0;
    return ort;
}
int topla(int x, int y)
{
    return x+y;
}