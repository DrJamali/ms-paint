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
    directory = opendir(str);
    if (directory == NULL)
    {
        printf("Eroor occured");
    }
    while ((entry = readdir(directory)) != NULL)
    {
        printf("%s\n", entry->d_name);
    }
}
void savefiledefault()
{

    fptr = fopen("default.txt", "w");
}

void savefile(char path[], FILE *fptr)
{
    fclose(fptr);
    FILE *fptr2;
    char ch;
    char choice;

    strcat(path, ".txt");

    if (access(path, F_OK) == 0)
    {
        printf("File '%s' already exists.\n", path);
        printf("Do you want to replace it (y/n): ");
        scanf(" %c", &choice);
        if (choice == 'y')
        {
            fptr = fopen("default.txt", "r");
            fptr2 = fopen(path, "w");
            if (fptr == NULL || fptr2 == NULL)
            {
                printf("Error in opening/creating files\n");
                return;
            }

            while ((ch = fgetc(fptr)) != EOF)
            {
                fputc(ch, fptr2);
            }
            printf("Your file has been created.\nPress 'm' to go back to the main menu.\n");
            fclose(fptr);
            fclose(fptr2);
        }
    }
    else
    {
        fptr = fopen("default.txt", "r");
        fptr2 = fopen(path, "w");
        if (fptr == NULL || fptr2 == NULL)
        {
            printf("Error in opening/creating files\n");
            return;
        }

        while ((ch = fgetc(fptr)) != EOF)
        {
            fputc(ch, fptr2);
        }
        printf("Your file has been created.\nPress 'm' to go back to the main menu.\n");
        fclose(fptr);
        fclose(fptr2);
        getch();
        char ch;
        while (ch=='m')
        {
            printf("Press 'm' to go back to the main menu.");
        }
        system("cls");
        Options();
        
    }
}
void openfile(char path[], FILE *fptr)
{
    FILE *fptr2;
    char ch;
    char choice;
    strcat(path, ".txt");

        fptr2 = fopen(path, "r");
        if (fptr2 == NULL)
        {
            printf("Error in opening\n");
            return;
        }
        while ((ch = fgetc(fptr2)) != EOF)
        {
            printf("%c",ch);
        }

}
