#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include<conio.h>
#include <direct.h>
#include <math.h>

int cikis= 1;
int vucutKitleEndeks = 0;
float yas = 0, kilo = 0, boy = 0, boyunCevre = 0, belCevre = 0;
float yagOranE = 0, yagOranK=0, BMH_E, BMH_K, kaloriE=0, kaloriK;
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
    int d=0;
    d = vucutKitleEndeks * 100;

    if (d <= 1850)
    {
        printf("VKI: %d --> zayif",vucutKitleEndeks);
    }
    if (d > 1850 && d <= 2499)
    {
        printf("VKI: %d --> ideal",vucutKitleEndeks);
    }
    if (d > 2500 && d <= 2999)
    {
        printf("VKI: %d --> sisman",vucutKitleEndeks);
    }
    if (d > 3000 && d <= 3499)
    {
        printf("VKI: %d --> obez",vucutKitleEndeks);
    }
    else if (d > 3500)
    {
        printf("VKI: %d --> morbid obez",vucutKitleEndeks);
    }
}

void GunlukKaloriE()
{
    int seviye=0;
    printf("\n\nBazal Metabolizma hiziniz: %f", BMH_E);
    printf("\nGun ici hareketlilik seviyesi: ");
    printf("\n\t1- Sedanter (Hareket etmiyorum veya cok az hareket ediyorum.)");
    printf("\n\t2- Az hareketli (Hafif hareketli bir yasam / Haftada 1-3 gun egzersiz yapiyorum.)");
    printf("\n\t3- Orta derece hareketli (Hareketli bir yasam / Haftada 3-5 gun egzersiz yapiyorum.)");
    printf("\n\t4- Cok hareketli (Cok hareketli bir yasam / Haftada 6-7 gun egzersiz yapiyorum.)");
    printf("\n\t5- Asiri hareketli (Profesyonel sporcu, atlet seviyesi.)\n");
    scanf("\n%d",&seviye);
    switch (seviye)
    {
    case '1':
        kaloriE = BMH_E * 1.2;
        break;
    case '2':
        kaloriE = BMH_E * 1.375;
        break;
    case '3':
        kaloriE = BMH_E * 1.55;
        break;
    case '4':
        kaloriE = BMH_E * 1.725;
        break;
    case '5':
        kaloriE = BMH_E * 1.9;
        break;
    default:
        break;
    }
    printf("Gunluk kalori ihtiyaci: %f", kaloriE);
}

void hedefE()
{
    int hedef;
    printf("\n\nHedefinizi seciniz: ");
    printf("\n\t 1-Kilo vermek");
    printf("\n\t 2-Kilo almak");
    printf("\n\t 3-Hizli kilo almak");
    printf("\n\t 4-Kilo korumak\n");
    scanf("%d",&hedef);
    switch (hedef)
    {
    case '1':
        kaloriE - 200;
        break;
    case '2':
        kaloriE + 300;
        break;
    case '3':
        kaloriE + 500;
        break;
    case '4':
        kaloriE;
        break;
    
    default:
        break;
    }
}


void veriHesaplayici()
{
    vucutKitleEndeks = kilo / pow(boy,2);
    yagOranK = (1.20 * vucutKitleEndeks) + (0.23 * yas) - 5.4;
    yagOranE = (1.20 * vucutKitleEndeks ) + (0.23 * yas) - 16.2;
    BMH_E = 66.5 + ( 13.75 * kilo ) + ( 5.003 * boy*100 ) - ( 6.755 * yas );
    BMH_K = 655.1 + ( 9.563 * kilo ) + ( 1.85 * boy*100 ) - ( 4.676 * yas);
}

void veriAlici()
{
    printf("Yasinizi giriniz: ");
    scanf("%f", &yas);

    printf("\nKilonuzu giriniz: ");
    scanf("%f", &kilo);

    printf("\nBoyunuzu giriniz(metre): ");
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
    
    vucutKitleEndeksYorumlayici();

    GunlukKaloriE();

    hedefE();

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
