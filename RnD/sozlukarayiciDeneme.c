#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char girdi[4];

char anlam[20];

void girdiAlici()
{
    printf("aramak istediğiniz kelimeyi giriniz: ");
    scanf("%s", &girdi);
    printf("%s", girdi);
}

void main ()
{
    girdiAlici();

    FILE *fp = fopen ("sozluk2.txt", "r");

    char ch;

    int dogrulama = 0;

    while(2)
    {
        ch = fgetc(fp);

        if(ch == '\n')
        {
            ch = fgetc(fp);

            if(girdi[0] == ch)
            {
                for (size_t i = 0; i < 3; i++)
                {
                    if(girdi[i] == ch)
                    {
                        ch = fgetc(fp);
                        dogrulama++;
                    }
                    else
                    break;
                }
                if(dogrulama == 3)
                {
                    for (size_t i = 0; i < 20; i++)
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
}









/*

void main()
{
    FILE *fp = fopen ("File1.txt", "r");

    char ch;

    int tab = 0,space = 0, character = 0, newLine = 0;

    while(2)
    {
        ch = fgetc(fp);

        if(ch == '\t')
        {
            tab++;
        }
        if(ch == '\n')
        {
            newLine++;
        }
        if(ch == ' ')
        {
            space++;
        }
        if(ch == EOF)
        {
            break;
        }

        printf("ch : %c \n", ch);
        character++;

    }

    fclose(fp);

    printf("%d \n", character);
    printf("%d\n", tab);
    printf("%d\n",newLine);
    printf("%d\n", space);

}*/