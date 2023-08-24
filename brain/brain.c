#include "./brain_header.h"
#include "../interface/interface_header.h"
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include <string.h>

void get_colour(char col){
     (col == 'r') ? redcolour() : (col == 'b') ? bluecolour()
                                : (col == 'y')   ? yellowcolour()
                                : (col == 'g')   ? greencolour()
                                                    : printf("you are not entering a valid colour");

}
void free_drawing(int x, int y, int headinglength, int width, int hieght, int middle, char ch)
{
    getConsoleSize(&width, &hieght);
    y = 16;
    printStarLine(width, x, y);
    y++;
    char string2[] = "Start Drawing from here";
    headinglength = strlen(string2);
    middle = (width - headinglength) / 2;
    printHeading(middle, y, string2);
    gotoxy(x, y);
    while (1)
    {
        int ch = getch();
        if (ch == 'r')
        {
            redcolour();
            getch();
            ch = getch();
            cordinates(&x, &y, ch);
            gotoxy(x, y);
            printf("*");
            fprintf(fptr, "*");
        }
        else if (ch == 'b')
        {
            bluecolour();
            getch();
            ch = getch();
            cordinates(&x, &y, ch);
            gotoxy(x, y);
            printf("*");
            fprintf(fptr, "*");
        }
        else if (ch == 'g')
        {
            greencolour();
            getch();
            ch = getch();
            cordinates(&x, &y, ch);
            gotoxy(x, y);
            printf("*");
            fprintf(fptr, "*");
        }
        else if (ch == 'y')
        {
            yellowcolour();
            getch();
            ch = getch();
            cordinates(&x, &y, ch);
            gotoxy(x, y);
            printf("*");
            fprintf(fptr, "*");
        }

        else if (ch == 32)
        {
            whitecolour();

            getch();      // Wait for the second getch() to read the arrow key
            ch = getch(); // Read the arrow key

            cordinates(&x, &y, ch);
            gotoxy(x, y);
            printf("*");
            fprintf(fptr, "*");
        }
        else if (ch == 8)
        {

            getch();
            ch = getch();
            cordinates(&x, &y, ch);
            gotoxy(x, y);
            printf(" ");
            fprintf(fptr, "*");
        }
        else if (ch == 'c')
        {
            whitecolour();
            system("cls");
            free_draw_instruction(x, y, headinglength, middle, width, middle, ch);
        }
        else if (ch == 'm')
        {
            whitecolour();
            system("cls");
            Options();
        }

        else
        {
            cordinates(&x, &y, ch);
            gotoxy(x, y);
        }
    }
}
void printline()
{
    printf("\n");
    whitecolour();
    int x = 0;
    int y = 26;
    int size;
    char ch;
    char colour;
    printf("Enter the Size: ");
    y++;
    scanf("%d", &size);
    printf("Enter any character to print: ");
    y++;
    scanf(" %c", &ch);
    printf("Enter a colour: \n y for yellow\n b for blue\n r for red\n w for white\n g for green\n");
    y++;
    scanf(" %c", &colour);
    printf("Use the arrow keys to move and specify where you want to draw this pattern on console and Press p to print");
    char position;
    while (position != 'p')
    {
        position = getch();
        cordinates(&x, &y, position);
        gotoxy(x, y);
    }
 get_colour(colour);

    line(ch, size, x, y);
}
void printsquare()
{
        printf("\n");
    whitecolour();
    int x = 0;
    int y = 26;
    int size;
    char ch;
    char colour;
    printf("Enter the size: ");
    y++;
    scanf("%d", &size);
    y++;
    printf("Enter any character to print: ");
    scanf(" %c", &ch);
    y++;
    int fill;
    printf("1 to fill the shape 0 t emplty: ");
    y++;
    scanf("%d", &fill);
    printf("Enter a colour: \n y for yellow\n b for blue\n r for red\n w for white\n g for green\n");
    scanf(" %c", &colour);
    y = y + 6;
    printf("Use the arrow keys to move and specify where you want to draw this pattern on console and Press p to print");
    char position;
    while (position != 'p')
    {
        position = getch();
        cordinates(&x, &y, position);
        gotoxy(x, y);
    }
  get_colour(colour);
    square(size, ch, fill, x, y);
}
void printtriangle()

{
        printf("\n");
    whitecolour();
    int x = 0;
    int y = 26;
    int type;
    char shape;
    int rows;
    char ch;
    int fill;
    char side;
    char colour;
    printf("Enter 1 for right angle triangles and 2 for complete triangle : ");
    y++;
    scanf("%d", &type);

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    y++;
    printf("Enter the shape U for Upward D for downward: ");
    y++;
    scanf(" %c", &shape);
    if (type == 1)
    {

        printf("Enter the l for left r for right sided: ");
        y++;
        scanf(" %c", &side);
    }
    printf("Enter any character to print: ");
    y++;
    scanf(" %c", &ch);
    y++;
    printf("1 to fill the shape 0 to empty: ");
    y++;
    scanf("%d", &fill);

    printf("Enter a colour: \n y for yellow\n b for blue\n r for red\n w for white\n g for green\n");
    y = y + 6;
    scanf(" %c", &colour);

    printf("Use the arrow keys to move and specify where you want to draw this pattern on console and Press p to print");
    char position;
    while (position != 'p')
    {
        position = getch();
        cordinates(&x, &y, position);
        gotoxy(x, y);
    }
  get_colour(colour);

    triangles(type, rows, fill, shape, ch, side, x, y);
}
void printtextbox()
{
        printf("\n");
    whitecolour();
    int x = 0;
    int y = 26;
    int width;
    int hieght;
    char colour;
    printf("Enter the hieght: ");
    y++;
    scanf("%d", &hieght);
    printf("Enter the width: ");
    y++;
    scanf("%d", &width);
    printf("Enter a colour: \n y for yellow\n b for blue\n r for red\n w for white\n g for green\n");
    y++;
    scanf(" %c", &colour);
    printf("Use the arrow keys to move and specify where you want to draw this pattern on console and Press p to print");
    char position;
    while (position != 'p')
    {
        position = getch();
        cordinates(&x, &y, position);
        gotoxy(x, y);
    }

  get_colour(colour);
    textbox(width, hieght, x, y);
}
void printtrapezium()
{
        printf("\n");
    whitecolour();
    int x = 0;
    int y = 26;
    int base1;
    int base2;
    int fill;
    char ch;
    char colour;
    printf("Enter the size of upper base: ");
    scanf("%d", &base1);
    y++;
    printf("Enter the size of lower base: ");
    scanf("%d", &base2);
    y++;
    if (base1 > base2)
    {
        printf("uppwe base should be less than the lower base\n Try Again");
        y++;
        printtrapezium();
    }
    printf("Enter any character to print: ");
    scanf(" %c", &ch);
    y++;

    printf("1 to fill the shape 0 to empty: ");
    scanf("%d", &fill);
    y++;
    printf("Enter a colour: \n y for yellow\n b for blue\n r for red\n w for white\n g for green\n");
    scanf(" %c", &colour);
    y = y + 6;
    printf("Use the arrow keys to move and specify where you want to draw this pattern on console and Press p to print");
    char position;
    while (position != 'p')
    {
        position = getch();
        cordinates(&x, &y, position);
        gotoxy(x, y);
    }
  get_colour(colour);

    trapezium(base1, base2, fill, ch, x, y);
}
void printparralelogram()
{
        printf("\n");
    whitecolour();
    int x = 0;
    int y = 26;
    int hieght;
    int width;
    char ch;
    char colour;
    int fill;
    printf("Enter the hieght: ");
    y++;
    scanf("%d", &hieght);
    printf("Enter width: ");
    y++;
    scanf("%d", &width);
    printf("Enter any character to print: ");
    y++;
    scanf(" %c", &ch);

    printf("1 to fill the shape 0 to empty: ");
    y++;
    scanf("%d", &fill);
    printf("Enter a colour: \n y for yellow\n b for blue\n r for red\n w for white\n g for green\n");
    scanf(" %c", &colour);
    y = y + 6;
    printf("Use the arrow keys to move and specify where you want to draw this pattern on console and Press p to print");

    char position;
    while (position != 'p')
    {
        position = getch();
        cordinates(&x, &y, position);
        gotoxy(x, y);
    }

  get_colour(colour);
    parralelogram(hieght, width, fill, ch, x, y);
}
void printdiamond()
{
        printf("\n");
    whitecolour();
    int x = 0;
    int y = 26;
    int size;
    char ch;
    printf("Enter the rows: ");
    y++;
    scanf("%d", &size);
    printf("Enter any character to print: ");
    y++;
    scanf(" %c", &ch);
    int fill;
    printf("Press 1 to make complete 0 to make half diamond: ");
    y++;
    scanf("%d", &fill);
    char colour;
    printf("Enter a colour: \n y for yellow\n b for blue\n r for red\n w for white\n g for green\n");
    scanf(" %c", &colour);
    y = y + 6;
    printf("Use the arrow keys to move and specify where you want to draw this pattern on console and Press p to print");
    char position;
    while (position != 'p')
    {
        position = getch();
        cordinates(&x, &y, position);
        gotoxy(x, y);
    }
  get_colour(colour);
    diamond(size, fill, ch, x, y);
}
void printcircle()
{
        printf("\n");
    whitecolour();
    int x = 0;
    int y = 26;
    int size;
    char ch;

    printf("Enter the Radius: ");
    y++;
    scanf("%d", &size);
    printf("Enter any character to print: ");
    y++;
    scanf(" %c", &ch);
    int fill;
    printf("Press 1 to make complete 0 to make half filled circle: ");
    y++;
    scanf("%d", &fill);
    char colour;
    printf("Enter a colour: \n y for yellow\n b for blue\n r for red\n w for white\n g for green\n");
    scanf(" %c", &colour);
    y = y + 6;
    printf("Use the arrow keys to move and specify where you want to draw this pattern on console and Press p to print");
    char position;
    while (position != 'p')
    {
        position = getch();
        cordinates(&x, &y, position);
        gotoxy(x, y);
    }
  get_colour(colour);

    circle(size, fill, ch, x, y);
}
void printheart()
{
        printf("\n");
    whitecolour();
    int x = 0;
    int y = 26;
    int size;
    char ch;

    printf("Enter the Size: ");
    y++;
    scanf("%d", &size);
    printf("Enter any character to print: ");
    scanf(" %c", &ch);
    y++;
    char colour;
    printf("Enter a colour: \n y for yellow\n b for blue\n r for red\n w for white\n g for green\n");
    scanf(" %c", &colour);
    y = y + 6;
    printf("Use the arrow keys to move and specify where you want to draw this pattern on console and Press p to print");
    char position;
    while (position != 'p')
    {
        position = getch();
        cordinates(&x, &y, position);
        gotoxy(x, y);
    }
  get_colour(colour);
    heart(size, ch, x, y);
}
void printpentagon()
{
        printf("\n");
    whitecolour();
    int x = 0;
    int y = 26;
    char ch;
    int size;

    printf("Enter size: ");
    y++;
    scanf("%d", &size);
    printf("Enter any character to print: ");
    y++;
    scanf(" %c", &ch);
    char colour;
    printf("Enter a colour: \n y for yellow\n b for blue\n r for red\n w for white\n g for green\n");
    scanf(" %c", &colour);
    y = y + 6;
    printf("Use the arrow keys to move and specify where you want to draw this pattern on console and Press p to print");
    char position;
    while (position != 'p')
    {
        position = getch();
        cordinates(&x, &y, position);
        gotoxy(x, y);
    }
  get_colour(colour);
    pentagon(size, ch, x, y);
}
void printhexagon()
{
        printf("\n");
    whitecolour();
    int x = 0;
    int y = 26;
    int size;
    char ch;
    printf("Enter size: ");
    y++;
    scanf("%d", &size);
    printf("Enter any character to print: ");
    y++;
    scanf(" %c", &ch);
    char colour;
    printf("Enter a colour: \n y for yellow\n b for blue\n r for red\n w for white\n g for green\n");
    y++;
    scanf(" %c", &colour);
    y = y + 6;
    printf("Use the arrow keys to move and specify where you want to draw this pattern on console and Press p to print");
    char position;
    while (position != 'p')
    {
        position = getch();
        cordinates(&x, &y, position);
        gotoxy(x, y);
    }
  get_colour(colour);
    hexagon(size, ch, x, y);
}
void printstar()
{
        printf("\n");
    whitecolour();
    int x = 0;
    int y = 26;
    int size;
    char ch;
    int type;
    printf("Enter size:");
    y++;
    scanf("%d", &size);
    printf("Enter any character to print: ");
    y++;
    scanf(" %c", &ch);
    printf("Enter the size of star(Enter the odd number for more symmetrical shape): ");
    y++;
    char colour;
    printf("Enter a colour: \n y for yellow\n b for blue\n r for red\n w for white\n g for green\n");
    scanf(" %c", &colour);
    y = y + 6;
    printf("Use the arrow keys to move and specify where you want to draw this pattern on console and Press p to print");
    char position;
    while (position != 'p')
    {
        position = getch();
        cordinates(&x, &y, position);
        gotoxy(x, y);
    }
  get_colour(colour);
    star(size, type, ch, x, y);
}
void printkite()
{
        printf("\n");
    whitecolour();
    int x = 0;
    int y = 26;
    int size;
    char ch;
    printf("Enter the rows: ");
    y++;
    scanf("%d", &size);
    printf("Enter any character to print: ");
    y++;
    scanf(" %c", &ch);
    char colour;
    printf("Enter a colour: \n y for yellow\n b for blue\n r for red\n w for white\n g for green\n");
    scanf(" %c", &colour);
    y = y + 6;
    printf("Use the arrow keys to move and specify where you want to draw this pattern on console and Press p to print");
    char position;
    while (position != 'p')
    {
        position = getch();
        cordinates(&x, &y, position);
        gotoxy(x, y);
    }
  get_colour(colour);
    kite(size, ch, x, y);
}
void printalphabets()
{
        printf("\n");
    whitecolour();
    int x = 0;
    int y = 26;
    printf("Enter the starting Alphabet(Uppercase Letter): ");
    y++;
    char start;
    scanf(" %c", &start);
    printf("Enter the ending Alphabet(Uppercase Letter): ");
    y++;
    char end;
    scanf(" %c", &end);
    char ch;
    printf("Enter the character you want to print: ");
    y++;
    scanf(" %c", &ch);
    char colour;
    printf("Enter a colour: \n y for yellow\n b for blue\n r for red\n w for white\n g for green\n");
    scanf(" %c", &colour);
    y = y + 6;
    printf("Use the arrow keys to move and specify where you want to draw this pattern on console and Press p to print");
    char position;
    while (position != 'p')
    {
        position = getch();
        cordinates(&x, &y, position);
        gotoxy(x, y);
    }
  get_colour(colour);

    Alphabets(start, end, ch, x, y);
}
void printnumbers()
{
        printf("\n");
    whitecolour();
    int x = 0;
    int y = 26;

    char ch;
    printf("Enter the starting Number: ");
    y++;
    int start;
    scanf(" %d", &start);
    printf("Enter the ending Number: ");
    y++;
    int end;
    scanf(" %d", &end);
    printf("Enter the character you want to print: ");
    y++;
    scanf(" %c", &ch);
    char colour;
    printf("Enter a colour: \n y for yellow\n b for blue\n r for red\n w for white\n g for green\n");
    scanf(" %c", &colour);
    y = y + 6;
    printf("Use the arrow keys to move and specify where you want to draw this pattern on console and Press p to print");
    char position;
    while (position != 'p')
    {
        position = getch();
        cordinates(&x, &y, position);
        gotoxy(x, y);
    }
  get_colour(colour);

    numbers(start, end, ch, x, y);
}
void savefilemenu()
{
        printf("\n");
    whitecolour();
    printf("\n");
    char dir_add[100];
    printf("Enter the folder absoloute path you want to Open: ");
    gets(dir_add);
    gets(dir_add);
    opendirectory(dir_add);
    printf("\n");
    printf("Enter the folder absolute path with the file name");

    char folder_add[100];
    gets(folder_add);
    savefile(folder_add, fptr);
}
void viewfile()
{
        printf("\n");
    whitecolour();
    char dir_add[100];
    char ch;
    printf("\n");
    printf("Enter the folder absoloute path you want to open: ");
    gets(dir_add);
    opendirectory(dir_add);
    printf("\n");
    printf("Enter the folder absolute path with the file name you want to save: ");

    char folder_add[100];
    gets(folder_add);
    openfile(folder_add, fptr);
    printf("Press any key to exit");
    ch = getch();
    exit(1);
}