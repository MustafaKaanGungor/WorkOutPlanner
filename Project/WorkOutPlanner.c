#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include<conio.h>

int cikis= 1;
float yas = 0, kilo = 0, boy = 0, boyunCevre = 0, belCevre = 0;
char aktiflikSeviye[20], hedefBolge[20];

void changeColorRed() 
{
  printf("\033[1;31m");
}

void changeColorYellow() 
{
  printf("\033[1;33m");
}

void changeColorReset()
{
  printf("\033[0m");
}

void veriHesaplayici()
{
    
}

void workOutBible()
{

}

void veriHesaplayici()
{
    
}

void veriAlici()
{
    printf("Yasinizi giriniz.");
    scanf("%f", &yas);

    printf("\nKilonuzu giriniz.");
    scanf("%f", &kilo);

    printf("\nBoyunuu giriniz.");
    scanf("%f", &boy);

    printf("\nBoyun cevrenizi cm olarak giriniz.");
    scanf("%f", &boyunCevre);

    printf("\nBel cevrenizi cm olarak giriniz.");
    scanf("%f", &belCevre);
}

void workOutGuider()
{
    printf("WorkOutGuider v1.0\n");
    
    veriAlici();

    veriHesaplayici();
}

void monkDictionary()
{
    printf("Monk Dictionary\n");
    printf("Kategori seciniz.");
}

void menuYonlendirici(int secim)
{
    switch (secim)
    {
    case 1:
        monkDictionary();
        break;
    case 2:
        workOutGuider();
        break;
    case 3:
        workOutBible();
        break;
    case 0:
        cikis = 0;
        break;
    default:
        printf("Lutfen mevcut sayilardan birini giriniz;");
        break;
    }
}

int secimEkrani()
{
    int secim = 0;
    printf("WorkOutPlanner'a hosgeldiniz\n");
    printf("Secimizin basindaki numarayi girerek secim yapin.\n");
    printf("1- Monk's Dictionary\n");
    printf("2- Ezekiel's WorkOut Guider\n");
    printf("3- WorkOut Bible\n");
    printf("\nCikmak icin 0 giriniz.\n");
    
    scanf("%d", &secim);

    return secim;
}

void acilisEkrani()
{
    changeColorRed();
    printf(" _       __           __   ____        __  ____  __                           \n");
    printf("| |     / /___  _____/ /__/ __ \\__  __/ /_/ __ \\/ /___ _____  ____  ___  _____\n");
    printf("| | /| / / __ \\/ ___/ //_/ / / / / / / __/ /_/ / / __ `/ __ \\/ __ \\/ _ \\/ ___/\n");
    printf("| |/ |/ / /_/ / /  / ,< / /_/ / /_/ / /_/ ____/ / /_/ / / / / / / /  __/ /    \n");
    printf("|__/|__/\\____/_/  /_/|_|\\____/\\__,_/\\__/_/   /_/\\__,_/_/ /_/_/ /_/\\___/_/     \n");
    changeColorYellow();
    printf("                                                     by Chariots of Ezekiel      \n\n");
    changeColorReset();
}

void main()
{
    acilisEkrani();

    while (cikis)
    {
        menuYonlendirici(secimEkrani());
    }
    
}
