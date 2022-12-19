#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int cikis= 1;
float yas, kilo, boy, boyunCevre, belCevre;
char aktiflikSeviye[20], hedefBolge[20];

void monkDictionary()
{
    printf("Monk Dictionary\n");
    printf("Kategori seciniz.");
}

void veriAlici()
{
    printf("Yasinizi giriniz.");
    scanf("");

    printf("\nKilonuzu giriniz.");
    scanf("");

    printf("\nBoyunuu giriniz.");
    scanf("");

    printf("\nBoyun cevrenizi cm olarak giriniz.");
    scanf("");

    printf("\nBel cevrenizi cm olarak giriniz.");
    scanf("");
}

void veriHesaplayici()
{
    
}

void workOutGuider()
{
    printf("WorkOutGuider v1.0\n");
    
    veriAlici();

    veriHesaplayici();
}

void workOutBible()
{

}

void acilisEkrani()
{
    printf(" __   __  ___     ______     _______    __   ___   ______    ____  ____  ___________  _______   ___            __      _____  ___   _____  ___    _______   _______   \n");
    printf("|*  |/  \\|  *|   /    * \\   /*      \\  /* | /  *) /    * \\  (*  _||_ * |(*     _   *)|   __ *\\ |* |          /**\\    (\\*   \\|*  \\ (\\*   \\|*  \\  /*     *| /*      \\  \n");
    printf("|'  /    \\:  |  // ____  \\ |: ____   | (: |/   / // ____  \\ |   (  ) : | )__/  \\__/ (. |__) :) |  |         /    \\   |.\\   \\    ||.\\   \\    |(: ______)|:        | \n");
    printf("|: /'        | /  /    ):) |_____/   ) |    __/ /  /    ) :)(:  |  | . )    \\_ /    |:  ____/  |: |        /' /\\  \\  |: \\.   \\  ||: \\.   \\  | \\/    |  |_____/   ) \n");
    printf(" \\//  /\'     |(: (____/ //  //      /  (// _  \\(: (____/  // \\ \\__/  //     |. |    (|  /      \\  |___    //  __'  \\ |.  \\    \\. ||.  \\    \\. | // ___)_  //      /  \n");
    printf(" /   /  \\    | \\        /  |:  __   \\  |: | \\  \\          /   /\\ __  //\\     \\: |   /|__/ \\    ( \\_|:  \\  /   /  \\  \\|    \\    \\ ||    \\    \\ |(:      *||:  __   \\  \n");
    printf("|___/    \\___|  \\*_____/   |__|  \\___) (__|  \\__)\\*_____/   (__________)     \\_|  (_______)    \\_______)(___/    \\___)\\___|\\____\\) \\___|\\____\\) \\_______)|__|  \\___) \n");
    printf("                                                                                                                                                  by Chariots of Ezekiel      \n");
 
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

void main()
{
    acilisEkrani();

    while (cikis)
    {
        menuYonlendirici(secimEkrani());
    }
    
}
