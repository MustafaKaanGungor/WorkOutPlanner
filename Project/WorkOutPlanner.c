#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <direct.h>
#include <math.h>



int cikis= 1;
int vucutKitleEndeks = 0, hareketlilikSeviye = 0, hedef = 0;
float yas = 0, kilo = 0, boy = 0, boyunCevre = 0, belCevre = 0;
float yagOranE = 0, yagOranK=0, BMH_E, BMH_K, kaloriE=0, kaloriK;
float yagOran = 0, BMH = 0, kalori = 0;
char cinsiyet;



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



void acilisEkrani();

int menuSecimEkrani();

void menuYonlendirici(int secim);

void info();

void monkDictionary();

int dictionarySecimEkrani();

void dictionaryYonlendirici(int secim);

int dictionaryKategoriSecimEkrani();

void dictionaryKategoriYonlendirici(int secim);

void dictionaryKategori1();

void dictionaryKategori2();

void dictionaryKategori3();

void dictionaryKategori4();

void dictionaryManuelAratici();

void workOutGuider();

void veriAlici();

void veriHesaplayici();

void vucutKitleEndeksYorumlayici();

void GunlukKaloriYorumlayici();

void guiderCikis();

void PrintPath( char * partialPath );

void workOutBible();

int workOutBibleSecimEkrani();

void workOutBibleYonlendirici(int secim);



void main()
{
    acilisEkrani();

    while (cikis)
    {
        menuYonlendirici(menuSecimEkrani());
    }
    
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

int menuSecimEkrani()
{
    int secim = 0;

    printf("\nWorkOutPlanner'a hosgeldiniz\n");

    changeColorBlue();
    printf("Secimizin basindaki numarayi girerek secim yapin.\n");
    changeColorReset();

    printf("1- Monk's Dictionary\n");
    printf("2- Chariot's WorkOut Guider\n");
    printf("3- WorkOut Bible\n");
    printf("4- Info\n");
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
    case 4:
        info();
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

void info()
{
    changeColorBlue();
    printf("\n\nWorkOutPlanner version 1.0");
    changeColorReset();
    printf("\nEmegi gecenler:\n");
    printf("22181616049 Mustafa Kaan Gungor - Bilgisayar Muhendisligi 1. sinif 2. sube\n");
    printf("22181617014 Metin Kerpic - Bilgisayar Muhendisligi 1. sinif 2. sube\n");

    changeColorRed();
    printf("\n Chariots of Ezekiel\n");
    changeColorReset();

}



void monkDictionary()
{
    changeColorGreen();
    printf("Monk Dictionary v1.0\n\n");
    changeColorReset();

    dictionaryYonlendirici(dictionarySecimEkrani());
}

int dictionarySecimEkrani()
{
    int secim;

    printf("Sozluge hosgeldiniz.\n");
    printf("Isterseniz kategorilere gore kelimelere bakabilir ya da manuel olarak kelime aratabilirsiniz.\n\n");

    changeColorBlue();
    printf("Istediginiz secenegin numarasini giriniz\n");
    changeColorReset();

    printf("1-Kategoriler\n");
    printf("2-Manuel Arama\n");
    printf("0-Geri Don\n");
    scanf("%d", &secim);

    return secim;
}

void dictionaryYonlendirici(int secim)
{
    switch (secim)
    {
    case 1:
        dictionaryKategoriYonlendirici(dictionaryKategoriSecimEkrani());
        break;
    case 2:
        dictionaryManuelAratici();
        break;
    case 0:
        break;
    default:
        changeColorRed();
        printf("Lutfen mevcut sayilardan birini giriniz.\n");
        changeColorReset();
        break;
    }
}

int dictionaryKategoriSecimEkrani()
{
    int secim;
    changeColorBlue();
    printf("Bakmak istediginiz kategorinin numarasini giriniz.\n");
    changeColorReset();

    printf("1-Genel Terimler\n");
    printf("2-Antreman Terimleri\n");
    printf("3-Vucut bolgeleri/parcalari\n");
    printf("4-Argolar\n");
    printf("0-Geri Don\n");
    scanf("%d", &secim);
    return secim;
}

void dictionaryKategoriYonlendirici(int secim)
{
    switch (secim)
    {
    case 1:
        dictionaryKategori1();
        break;
    case 2:
        dictionaryKategori2();
        break;
    case 3:
        dictionaryKategori3();
        break;
    case 4:
        dictionaryKategori4();
        break;
    case 0:
        monkDictionary();
        break;
    default:
        changeColorRed();
        printf("Lutfen mevcut sayilardan birini giriniz.\n");
        changeColorReset();
        break;
    }
}

void dictionaryKategori1()
{
    FILE *fp = fopen ("duzenlisozluk.txt", "r");

    char ch;

    char kelimeler[10000];

    int newLine = 0;

            int i = 0;


        

            while (newLine != 34){
            
            ch = fgetc(fp);


            i++;

    printf("%c", ch);

            if(ch == '\n')
            {
            newLine++;
            
            }

            }
        

    fclose(fp);

}

void dictionaryKategori2()
{
    FILE *fp = fopen ("duzenlisozluk.txt", "r");
    char ch;

    int newLine = 35, oldLines = 0;

    int i = 0;

    while (newLine != 75)
    {
        ch = fgetc(fp);
        if(ch == '\n')
        {
            oldLines++;
        }
        if(oldLines >= 34){
        i++;

        printf("%c", ch);

        if(ch == '\n')
        {
        newLine++;
        }}
    }

    fclose(fp);

}

void dictionaryKategori3()
{
    FILE *fp = fopen ("duzenlisozluk.txt", "r");
    char ch;

    int newLine = 76, oldLines = 0;

    int i = 0;


    while (newLine != 94)
    {
        ch = fgetc(fp);
        if(ch == '\n')
        {
            oldLines++;
        }
        if(oldLines >= 75){
        i++;

        printf("%c", ch);

        if(ch == '\n')
        {
        newLine++;
        }}
    }

    fclose(fp);

}

void dictionaryKategori4()
{
    FILE *fp = fopen ("duzenlisozluk.txt", "r");
    char ch;

    int newLine = 94, oldLines = 0;;

    int i = 0;

    while (newLine != 98)
    {
        ch = fgetc(fp);
        if(ch == '\n')
        {
            oldLines++;
        }
        if(oldLines >= 93){
        i++;

        printf("%c", ch);

        if(ch == '\n')
        {
        newLine++;
        }}
    }

    fclose(fp);


}

void dictionaryManuelAratici()
{
    char girdi[25], anlam[200];

    char tekrarKontrol, ch;

    int harfSayisi, dogrulama = 0;

    do
    {
    printf("Aramak istediginiz kelimeyi giriniz: ");
    scanf("%s%n", &girdi, &harfSayisi);
    printf("%s", girdi);

    FILE *fp = fopen ("duzenlisozluk.txt", "r");

    while(2)
    {
    ch = fgetc(fp);

        if(ch == '\n')
        {
            ch = fgetc(fp);

            if(girdi[0] == ch)
            {
                for (size_t i = 0; i < harfSayisi - 1; i++)
                {
                    if(girdi[i] == ch)
                    {
                        ch = fgetc(fp);
                        dogrulama++;
                    }

                    else
                    break;
                }
                if(dogrulama == harfSayisi -1)
                {
                    for (size_t i = 0; i < 200; i++)
                    {
                        anlam[i] = ch;
                        ch = fgetc(fp);

                        if(ch == '\n')
                        {
                            break;
                        }
                    }
                    
                }
                dogrulama = 0;
            }
        }
        if(ch == EOF)
        {
            break;
        }
    }

    printf("%s", anlam);

    fclose(fp);

    changeColorBlue();
    printf("\n\nBir kelime daha aratmak ister misiniz?[y/n]");
    changeColorReset();

    scanf("%c",&tekrarKontrol);
    scanf("%c",&tekrarKontrol);

    }while(tekrarKontrol == 'y');
}



void workOutGuider()
{
    changeColorGreen();
    printf("WorkOutGuider v1.0\n\n");
    changeColorReset();

    veriAlici();

    veriHesaplayici();

    GunlukKaloriYorumlayici();

    vucutKitleEndeksYorumlayici();

    guiderCikis();

}

void veriAlici()
{
    printf("Cinsiyetinizi giriniz: ");
    scanf("%c", &cinsiyet);
    scanf("%c", &cinsiyet);

    printf("\nYasinizi giriniz: ");
    scanf("%f", &yas);

    printf("\nKilonuzu giriniz: ");
    scanf("%f", &kilo);

    printf("\nBoyunuzu giriniz(metre): ");
    scanf("%f", &boy);

    printf("\nBoyun cevrenizi cm olarak giriniz: ");
    scanf("%f", &boyunCevre);

    printf("\nBel cevrenizi cm olarak giriniz: ");
    scanf("%f", &belCevre);

    printf("\n\nGun ici hareketlilik seviyesi: ");
    printf("\n\t1- Sedanter (Hareket etmiyorum veya cok az hareket ediyorum.)");
    printf("\n\t2- Az hareketli (Hafif hareketli bir yasam / Haftada 1-3 gun egzersiz yapiyorum.)");
    printf("\n\t3- Orta derece hareketli (Hareketli bir yasam / Haftada 3-5 gun egzersiz yapiyorum.)");
    printf("\n\t4- Cok hareketli (Cok hareketli bir yasam / Haftada 6-7 gun egzersiz yapiyorum.)");
    printf("\n\t5- Asiri hareketli (Profesyonel sporcu, atlet seviyesi.)\n");
    scanf("\n%d",&hareketlilikSeviye);

    printf("\n\nHedefinizi seciniz: ");
    printf("\n\t 1-Kilo vermek");
    printf("\n\t 2-Kilo almak");
    printf("\n\t 3-Hizli kilo almak");
    printf("\n\t 4-Kilo korumak\n");
    scanf("%d",&hedef);
}

void veriHesaplayici()
{
    vucutKitleEndeks = kilo / pow(boy,2);

    yagOranK = (1.20 * vucutKitleEndeks) + (0.23 * yas) - 5.4;
    yagOranE = (1.20 * vucutKitleEndeks ) + (0.23 * yas) - 16.2;

    BMH_E = 66.5 + ( 13.75 * kilo ) + ( 5.003 * boy*100 ) - ( 6.755 * yas );
    BMH_K = 655.1 + ( 9.563 * kilo ) + ( 1.85 * boy*100 ) - ( 4.676 * yas);

    if(cinsiyet == 'E')
    {
        yagOran = yagOranE;
        BMH = BMH_E;
    }
    if(cinsiyet == 'K')
    {
        yagOran = yagOranK;
        BMH = BMH_K;
    }

    switch (hareketlilikSeviye)
    {
    case 1:
        kalori = BMH * 1.2;
        break;
    case 2:
        kalori = BMH * 1.375;
        break;
    case 3:
        kalori = BMH * 1.55;
        break;
    case 4:
        kalori = BMH * 1.725;
        break;
    case 5:
        kalori = BMH * 1.9;
        break;
    default:
        break;
    }

    switch (hedef)
    {
    case 1:
        kalori = kalori - 200;
        break;
    case 2:
        kalori = kalori + 300;
        break;
    case 3:
       kalori = kalori + 500;
        break;
    case 4:
       kalori;
        break;
    default:
        break;
    }
}

void vucutKitleEndeksYorumlayici()
{
    int d=0;
    d = vucutKitleEndeks * 100;

    changeColorGreen();
    if (d <= 1850)
    {
        printf("\nVKI: %d --> zayif",vucutKitleEndeks);
    }
    if (d > 1850 && d <= 2499)
    {
        printf("\nVKI: %d --> ideal",vucutKitleEndeks);
    }
    if (d > 2500 && d <= 2999)
    {
        printf("\nVKI: %d --> sisman",vucutKitleEndeks);
    }
    if (d > 3000 && d <= 3499)
    {
        printf("\nVKI: %d --> obez",vucutKitleEndeks);
    }
    else if (d > 3500)
    {
        printf("\nVKI: %d --> morbid obez",vucutKitleEndeks);
    }
    changeColorReset();
}

void GunlukKaloriYorumlayici()
{
    changeColorGreen();
    printf("\nYag oraniniz: %f",yagOran);
    printf("\nBazal Metabolizma hiziniz: %f", BMH);

    printf("\nGunluk kalori ihtiyaci: %f", kalori);
    printf("\nHedefiniz icin almaniz gereken kalori: %f",kalori);

    changeColorReset();
}

void guiderCikis()
{
    changeColorGreen();
    printf("\n\nHedeflerinize ulasmanize yardim edecek dogru hareketler icin WorkOut Bible'i kullanabilrisiniz ya da");
    PrintPath("hareketler.txt");
    printf("yolundaki text dosyasina bakabilirisiniz.\n");
    changeColorReset();
}

void PrintPath( char * partialPath )
{
   char full[_MAX_PATH];
   if( _fullpath( full, partialPath, _MAX_PATH ) != NULL )
      printf( "  %s ", full );
   else
      printf( "Gecerli olmayan yol\n" );
}



void workOutBible()
{
    changeColorGreen();
    printf("\nWorkOut Bible v1.0\n");
    changeColorReset();

    workOutBibleYonlendirici(workOutBibleSecimEkrani());
}

int workOutBibleSecimEkrani()
{
    int secim;
    printf("Hosgeldin!");
    printf("\nIstedigin bolgeyi sec:");
    printf("\n\t1-Bacak");
    printf("\n\t2-Kalf");
    printf("\n\t3-Kalca");
    printf("\n\t4-Karin");
    printf("\n\t5-Gogus");
    printf("\n\t6-Omuz");
    printf("\n\t7-Sirt");
    printf("\n\t8-On kol");
    printf("\n\t9-Arka kol");
    printf("\n\t10-Kardiyo");
    printf("\n\t11-Mobilite");
    printf("\n\t12-Esneklik\n");
    printf("\t0-Geri Don\n");

    scanf("%d",&secim);

    return secim;
}

void workOutBibleYonlendirici(int secim)
{
    switch (secim)
    {
    case 1:
        printf("\nSquat\nLeg Press\nWalking Lunge\nDeadlift\nStanding Leg Curl\nFront Squat\nDumbbell Stiff Leg Deadlift\nOlympic Lift Snatch and Power Clean\nRomanian Deadlift(RDL)\nLeg Curl\nNordic Hamstring Curl\n");
        break;
    case 2:
        printf("\nSeated Calf Raise\nStanding Calf Machine\nDonkey Calf Raise\nLeg Press Calf Raise\nip Atlama\n");
        break;
    case 3:
        printf("\nHip Thrust\nSquat\nDeadlift\nLunge\nCable Glute Kickback\n");
        break;
    case 4:
        printf("\nCrunch\nLegs Up Crunch\nSeated Knee Up\nRussian Twist\nPlank\nSide Plank\nLeg Raise\nAb Wheel Rollout\nTurkish Get Up\nDragon Flag\n");
        break;
    case 5:
        printf("\nBench Press\nDumbbell Press\nIncline Bench Press\nDecline Bench Press\nMachine Chest Press\nMachine Fly\nPush UP\nPullover\nCable Crossover\n");
        break;
    case 6:
        printf("\nOverhead Press\nArnold Press\nDumbbell Shoulder Press\nUp-right Row\nLateral Raise\nFront Raise\nOne Arm Cable Lateral Raise\nFacepull\nBent Over Lateral Raise\nZ Press\n");
        break;
    case 7:
        printf("\nHyperextension\nLat Pull Down\nBarfiks\nBent Over Row\nDeadlift\nSeated Cable Row\nReverse Cable Crossover\nRack Pull\nShrug\n");
        break;
    case 8:
        printf("\nIncline Dumbbell Curl\nHammer Curl\nBarbell Curl\nCable Curl\nConcentration Curl\nScot Curl Z-Bar\nHigh-Pulley Cable Curl\n");
        break;
    case 9:
        printf("\nClose Grip Bench Press\nOverhead Dumbbell Extension\nCable Pushdown\nDips\nSkull Crusher\nKickback\nReverse Pushdown\n");
        break;
    case 10:
        printf("\nKoşu\nYüzme\nTempolu Yürüyüş\nİp Atmalamak\nBisiklet\nDans Etmek\nHIIT\nLISS\nDağa Tırmanma\n");
        break;
    case 11:
        printf("\nThread The Needle\nSpiderman Stretch\nPigeon Stretch\nAdductor Stretch\nScapula Stretch\nFoam Roller Uygulamalari\nBird Dog\nHamstring Stretch\nProne Cobra\nMcGill Curl Up\nFrog Pump\nCat-Cow\nShoulder Wall Slide\nDoorway Strectch\nShoulder Roll");
        break;
    case 12:
        printf("\nChild Pose\nSeat Straddle Lotus\nForward/Side Lunges\nSeat Stretch\nStanding Hamstring Stretch\nPiriformis Stretch\nLunge With Spinal Twist\nFigure Four Stretch\n90/90 Stretch\nSeated Shoulder Squeeze\nSide Bend Stretch\nLying Pectoral Stretch\nSeated Neck Release\nLying Quad Stretch\nKnees to Chest");
    case 0:
        break;
    default:
        changeColorRed();
        printf("Lutfen mevcut sayilardan birini giriniz.\n");
        changeColorReset();
        break;
    }
}