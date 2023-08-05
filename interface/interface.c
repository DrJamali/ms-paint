#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <unistd.h>
#include "..\interface\interface_header.h"
FILE *fptr;
void getConsoleSize(int *width, int *height)
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    *width = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    *height = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
}

void printStarLine(int length, int x, int y)
{
    gotoxy(x, y);
    for (int i = 0; i < length; i++)
    {
        printf("*");
    }
}
void printHeading(int x, int y, char string[])
{
    gotoxy(x, y);
    puts(string);
}
void free_draw_instruction(int x, int y, int headinglength, int width, int hieght, int middle, char ch)
{

    getConsoleSize(&width, &hieght);
    x = 0;
    y = 0;
    printStarLine(width, x, y);
    y++;
    char string[] = "Intructions";
    headinglength = strlen(string);
    middle = (width - headinglength) / 2;
    printHeading(middle, y, string);
    y++;
    printStarLine(width, x, y);
    y++;
    printf("Use the arrow button to move\n");
    printf("Use the Spacebar and  arrow button to print the white stars\n");
    printf("Use the r and  arrow button to print the red stars\n");
    printf("Use the b and  arrow button to print the blue stars\n");
    printf("Use the y and  arrow button to print the yellow stars\n");
    printf("Use the g and  arrow button to print the gree stars\n");
    printf("Use the backspace and arrow key to remove a star\n");
    printf("Press to clear the screen\n");
    printf("\n");
    printf("Now press s start to start drwaing\n");
    printf("Press M to go to main menu\n");
    ch = getch();
    if (ch == 's')
    {
        free_drawing(x, y, headinglength, middle, width, middle, ch);
    }
    else if (ch == 'm')
    {
        Options();
    }
}
void ShapeMenu(int x, int y, int headinglength, int width, int hieght, int middle, char ch)
{
    getConsoleSize(&width, &hieght);
    x = 0;
    y = 0;
    printStarLine(width, x, y);
    y++;
    char string[] = "Welcome to Shape Mene";
    headinglength = strlen(string);
    middle = (width - headinglength) / 2;
    printHeading(middle, y, string);
    y++;
    printStarLine(width, x, y);
    y++;
    printf("-> Press a to make line\n");
    printf("-> Press b to make square\n");
    printf("-> Press c to make textbox\n");
    printf("-> Press d to make different type of triangles\n");
    printf("-> Press e to make trapezium\n");
    printf("-> Press f to make parralelogram\n");
    printf("-> Press g to make  diamond\n");
    printf("-> Press h to make cirle\n");
    printf("-> Press i to make heart\n");
    printf("-> Press j to make pentagon\n");
    printf("-> Press k to make hexagon\n");
    printf("-> Press l to make stars\n");
    printf("-> Press m to make kite\n");
    printf("-> Press n to make arrows\n");
    printf("-> Press o to print alphabets\n");
    printf("-> Press p to print numbers\n");
    printf("-> Press Enter to go to next line\n");
    printf("->Press backspace to return to main menu\n");
    printf("-> Press q to quit\n");
    y = 21;
    printStarLine(width, x, y);
    y++;
    char string2[] = "Start Drawing from here";
    headinglength = strlen(string2);
    middle = (width - headinglength) / 2;
    printHeading(middle, y, string2);
    while (1)
    {
        ch = getch();
        if (ch == 'a')
        {
            printline();
        }
        else if (ch == 'b')
        {
            printsquare();
        }
        else if (ch == 'c')
        {
            printtextbox();
        }

        else if (ch == 'd')
        {
            printtriangle();
        }
        else if (ch == 'e')
        {
            printtrapezium();
        }
        else if (ch == 'f')
        {
            printparralelogram();
        }
        else if (ch == 'g')
        {
            printdiamond();
        }
        else if (ch == 'h')
        {
            printcircle();
        }
        else if (ch == 'i')
        {
            printheart();
        }
        else if (ch == 'j')
        {
            printpentagon();
        }
        else if (ch == 'k')
        {
            printhexagon();
        }
        else if (ch == 'l')
        {
            printstar();
        }
        else if (ch == 'm')
        {
            printkite();
        }
        else if (ch == 'o')
        {
            printalphabets();
        }
        else if (ch == 'p')
        {
            printnumbers();
        }
        else if (ch == 'q')
        {
            system("cls");
            gotoxy(48, 15);
            printf("********Good Bye********");
            sleep(8);
            exit(1);
        }
        else if (ch == 8)
        {
            whitecolour();
            system("cls");
            Options();
        }
        else if (ch == 13)
        {
            nextline();
        }
    }
}
void Options()
{
    int width, hieght;

    int headinglength, ch;

    int x;
    int y;
    int middle;
    getConsoleSize(&width, &hieght);
    x = 0;
    y = 0;
    printStarLine(width, x, y);
    y++;
    char string[] = "Main Menu";
    headinglength = strlen(string);
    middle = (width - headinglength) / 2;
    printHeading(middle, y, string);
    y++;
    printStarLine(width, x, y);
    y++;
    printf("-> Press 1 to make shapes\n");
    printf("-> Press 2 to draw on terminal\n");
    printf("-> Press 3 to Save the file\n");
    printf("-> Press 4 to view existing file\n");
    printf("-> Press 5 to edit an existing file\n");
    printf("-> Press Q to quit");
    ch = getch();
    if (ch == 49)
    {
        ShapeMenu(x, y, headinglength, middle, width, middle, ch);
    }
    else if (ch == 50)
    {
        system("cls");
        free_draw_instruction(x, y, headinglength, middle, width, middle, ch);
    }
    else if (ch == 51)
    {
        savefilemenu();
    }
    else if (ch == 52)
    {
        viewfile();
    }
    else if (ch == 'q' || ch == 'Q')
    {
        system("cls");
        gotoxy(48, 15);
        printf("********Good Bye********");
        sleep(8);
        exit(1);
    }
}
void MainPage(int x, int y, int headinglength, int width, int hieght, int middle)
{
    getConsoleSize(&width, &hieght);
    x = 0;
    y = 0;
    printStarLine(width, x, y);
    y++;
    char string[10000] = "Welcome To MS Paint";
    headinglength = strlen(string);
    middle = (width - headinglength) / 2;
    printHeading(middle, y, string);
    y++;
    printStarLine(width, x, y);
    y = (hieght / 2) - 1;
    strcpy(string, "You can go to full screen and press r to refresh");
    headinglength = strlen(string);
    middle = (width - headinglength) / 2;
    printHeading(middle, y, string);
    y++;
    strcpy(string, "Press Enter to start");
    headinglength = strlen(string);
    middle = (width - headinglength) / 2;
    printHeading(middle, y, string);
}

void Interface()
{
    int width, hieght;

    int headinglength;

    int x;
    int y;
    int middle;
    MainPage(x, y, headinglength, width, hieght, middle);
    savefiledefault(fptr);
    int ch = getch();
    if (ch == 'r')

    {
        system("cls");
        MainPage(x, y, headinglength, width, hieght, middle);
        int ch = getch();
        if (ch == 13)
        {
            system("cls");
            Options();
        }
    }
    else if (ch == 13)
    {
        system("cls");
        Options();
    }
}
