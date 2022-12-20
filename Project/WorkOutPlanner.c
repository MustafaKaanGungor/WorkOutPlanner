#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include<conio.h>
#include <direct.h>

int cikis= 1;
float yas = 0, kilo = 0, boy = 0, boyunCevre = 0, belCevre = 0;
float vucutKitleEndeks = 0, yagOran = 0;
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

void changeColorBlue()
{
    printf("\033[0;34m");
}

void changeColorGreen()
{
    printf("\033[0;32m");
}

void changeColorPurple()
{
    printf("033[0;35m");
}

void workOutBible()
{


}

void PrintFullPath( char * partialPath )
{
   char full[_MAX_PATH];
   if( _fullpath( full, partialPath, _MAX_PATH ) != NULL )
      printf( "  %s ", full );
   else
      printf( "Invalid path\n" );
}

void raporCikarici()
{
    changeColorGreen();
    printf("\nSonuclariniza daha sonra da ulasabilmeniz icin");
    PrintFullPath("Sonuc.txt");
    printf("yolundaki text dosyasina yazdik.\n");
    changeColorReset();
}

void vucutKitleEndeksYorumlayici()
{
    vucutKitleEndeks = vucutKitleEndeks * 10;
    int a = vucutKitleEndeks;

    if ((a/10) <= 18,5)
    {
        printf("ideal alti");
    }
    if ((a/10) >> 18,5 && (a/10) <= 24.9)
    {
        printf("ideal");
    }
    if ((a/10) >> 25 && (a/10) <= 29.9)
    {
        printf("ideal üstü");
    }
    if ((a/10) >> 30 && (a/10) <= 39.9)
    {
        printf("obez");
    }
    if ((a/10) >> 40)
    {
        printf("morbid obez");
    }
}

void veriHesaplayici()
{
    vucutKitleEndeks = kilo / (boy * boy);
}

void veriAlici()
{
    printf("Yasinizi giriniz: ");
    scanf("%f", &yas);

    printf("\nKilonuzu giriniz: ");
    scanf("%f", &kilo);

    printf("\nBoyunuzu giriniz: ");
    scanf("%f", &boy);

    printf("\nBoyun cevrenizi cm olarak giriniz: ");
    scanf("%f", &boyunCevre);

    printf("\nBel cevrenizi cm olarak giriniz: ");
    scanf("%f", &belCevre);
}

void workOutGuider()
{
    changeColorGreen();
    printf("WorkOutGuider v1.0\n\n");
    changeColorReset();
    veriAlici();

    veriHesaplayici();

    raporCikarici();

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
        changeColorRed();
        printf("Lutfen mevcut sayilardan birini giriniz.\n\n");
        changeColorReset();
        break;
    }
}

int secimEkrani()
{
    int secim = 0;
    printf("\nWorkOutPlanner'a hosgeldiniz\n");
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
    printf("                                                     by Chariots of Ezekiel      \n");
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

/*
her satır atlandıktan sonraki ilk harfi oku ve girdiyle eşle -- sözlük için

*/
