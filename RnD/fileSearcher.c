#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
    FILE *fp = fopen ("File1.txt", "r");

    char ch;

    int tab = 0,space = 0, character = 0, newLine = 0;

    while(2)
    {
        ch = fgetc(fp);

        if(ch == 't')
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

}