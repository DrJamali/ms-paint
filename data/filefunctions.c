#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <sys/stat.h>
#include <conio.h>
#include "..\interface\interface_header.h"
void opendirectory(char str[])
{
    DIR *directory;
    struct dirent *entry;
    directory = opendir("str");
    if (directory == NULL)
    {
        printf("Eroor occured");
    }
    while ((entry = readdir(directory)) != NULL)
    {
        printf("%s\n", entry->d_name);
    }
}
void savefiledefault(){

    fptr = fopen("default.txt", "w");
}

void savefile(char path[], FILE *fptr)
{
    char ch;
    strcat(path, ".txt");
    char choice;
    FILE *fptr2;
    if (access(path, F_OK) == 0)
    {
        printf("File '%s' already exists.\n", path);
        printf("Do you want to replace it (y/n): ");
        scanf(" %c", &choice);
        if (choice == 'y')
        {
            fptr = fopen("default.txt", "r");
            fptr2 = fopen(path, "w");
            if (fptr2 == NULL)
            {
                printf("Eroor in creating file");
            }

       while ((ch = fgetc(fptr)) != EOF)
            {
                fputc(ch, fptr2);
            }
            printf("Your file has been created\n Press m button to go back to main menu");
            fclose(fptr2);
        }
        else
        {
            Options();
        }

        ch = getch();
        if (ch == 'm')
        {
            Options();
        }
    }
}
