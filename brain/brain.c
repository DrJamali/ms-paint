#include "./brain_header.h"
#include "../interface/interface_header.h"
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include <string.h>

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
    int size;
    char ch;
    char colour;
    printf("Enter the Size: ");
    scanf("%d", &size);
    printf("Enter any character to print: ");
    scanf(" %c", &ch);
    printf("Enter a colour: \n y for yellow\n b for blue\n r for red\n w for white\n g for green\n");
    scanf(" %c", &colour);
    (colour == 'r') ? redcolour() : (colour == 'b') ? bluecolour()
                                : (colour == 'y')   ? yellowcolour()
                                : (colour == 'g')   ? greencolour()
                                : (colour == 'w')   ? whitecolour()
                                                    : printf("you are not entering a valid colour");
    line(ch, size, fptr);
}
void printsquare()
{
    int size;
    char ch;
    char colour;
    printf("Enter the size: ");
    scanf("%d", &size);
    printf("Enter any character to print: ");
    scanf(" %c", &ch);
    int fill;
    printf("1 to fill the shape 0 t emplty: ");
    scanf("%d", &fill);
    printf("Enter a colour: \n y for yellow\n b for blue\n r for red\n w for white\n g for green\n");
    scanf(" %c", &colour);
    (colour == 'r') ? redcolour() : (colour == 'b') ? bluecolour()
                                : (colour == 'y')   ? yellowcolour()
                                : (colour == 'g')   ? greencolour()
                                                    : printf("you are not entering a valid colour");
    square(size, ch, fill);
    ch = getch();
}
void printtriangle()

{
    int type;
    char shape;
    int rows;
    char ch;
    int fill;
    char side;
    char colour;
    printf("Enter 1 for right angle triangles and 2 for complete triangle : ");
    scanf("%d", &type);

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the shape U for Upward D for downward: ");
    scanf(" %c", &shape);
    printf("Enter any character to print: ");
    scanf(" %c", &ch);
    printf("1 to fill the shape 0 to empty: ");
    scanf("%d", &fill);
    printf("Enter a colour: \n y for yellow\n b for blue\n r for red\n w for white\n g for green\n");
    scanf(" %c", &colour);
    (colour == 'r') ? redcolour() : (colour == 'b') ? bluecolour()
                                : (colour == 'y')   ? yellowcolour()
                                : (colour == 'g')   ? greencolour()
                                                    : printf("you are not entering a valid colour");
    if (type == 1)
    {

        printf("Enter the l for left r for right sided: ");
        scanf(" %c", &side);
    }
    triangles(type, rows, fill, shape, ch, side);
    ch = getch();
}
void printtextbox()
{
    int width;
    int hieght;
    char colour;
    printf("Enter the hieght: ");
    scanf("%d", &hieght);
    printf("Enter the width: ");
    scanf("%d", &width);
    printf("Enter a colour: \n y for yellow\n b for blue\n r for red\n w for white\n g for green\n");
    scanf(" %c", &colour);
    (colour == 'r') ? redcolour() : (colour == 'b') ? bluecolour()
                                : (colour == 'y')   ? yellowcolour()
                                : (colour == 'g')   ? greencolour()
                                                    : printf("you are not entering a valid colour");
    textbox(width, hieght);
}
void printtrapezium()
{
    int base1;
    int base2;
    int fill;
    char ch;
    char colour;
    printf("Enter the size of upper base: ");
    scanf("%d", &base1);

    printf("Enter the size of lower base: ");
    scanf("%d", &base2);
    printf("Enter any character to print: ");
    scanf(" %c", &ch);

    printf("1 to fill the shape 0 to empty: ");
    scanf("%d", &fill);
    printf("Enter a colour: \n y for yellow\n b for blue\n r for red\n w for white\n g for green\n");
    scanf(" %c", &colour);
    (colour == 'r') ? redcolour() : (colour == 'b') ? bluecolour()
                                : (colour == 'y')   ? yellowcolour()
                                : (colour == 'g')   ? greencolour()
                                                    : printf("you are not entering a valid colour");
    if (base1 > base2)
    {
        printf("uppwe base should be less than the lower base\n Try Again");
        printtrapezium();
    }
    else
    {
        trapezium(base1, base2, fill, ch);
    }
    ch = getch();
}
void printparralelogram()
{

    int hieght;
    int width;
    char ch;
    char colour;
    int fill;
    printf("Enter the hieght: ");
    scanf("%d", &hieght);
    printf("Enter width: ");
    scanf("%d", &width);
    printf("Enter any character to print: ");
    scanf(" %c", &ch);

    printf("1 to fill the shape 0 to empty: ");
    scanf("%d", &fill);
    printf("Enter a colour: \n y for yellow\n b for blue\n r for red\n w for white\n g for green\n");
    scanf(" %c", &colour);
    (colour == 'r') ? redcolour() : (colour == 'b') ? bluecolour()
                                : (colour == 'y')   ? yellowcolour()
                                : (colour == 'g')   ? greencolour()
                                                    : printf("you are not entering a valid colour");
    parralelogram(hieght, width, fill, ch);
}
void printdiamond()
{
    int size;
    char ch;
    printf("Enter the rows: ");
    scanf("%d", &size);
    printf("Enter any character to print: ");
    scanf(" %c", &ch);
    int fill;
    printf("Press 1 to make complete 0 to make half diamond: ");
    scanf("%d", &fill);
    char colour;
    printf("Enter a colour: \n y for yellow\n b for blue\n r for red\n w for white\n g for green\n");
    scanf(" %c", &colour);
    (colour == 'r') ? redcolour() : (colour == 'b') ? bluecolour()
                                : (colour == 'y')   ? yellowcolour()
                                : (colour == 'g')   ? greencolour()
                                                    : printf("you are not entering a valid colour");
    diamond(size, fill, ch);
}
void printcircle()
{
    int size;
    char ch;

    printf("Enter the Radius: ");
    scanf("%d", &size);
    printf("Enter any character to print: ");
    scanf(" %c", &ch);
    int fill;
    printf("Press 1 to make complete 0 to make half filled circle: ");
    scanf("%d", &fill);
    char colour;
    printf("Enter a colour: \n y for yellow\n b for blue\n r for red\n w for white\n g for green\n");
    scanf(" %c", &colour);
    (colour == 'r') ? redcolour() : (colour == 'b') ? bluecolour()
                                : (colour == 'y')   ? yellowcolour()
                                : (colour == 'g')   ? greencolour()
                                                    : printf("you are not entering a valid colour");

    circle(size, fill, ch);
}
void printheart()
{

    int size;
    char ch;

    printf("Enter the Size: ");
    scanf("%d", &size);
    printf("Enter any character to print: ");
    scanf(" %c", &ch);
    char colour;
    printf("Enter a colour: \n y for yellow\n b for blue\n r for red\n w for white\n g for green\n");
    scanf(" %c", &colour);
    (colour == 'r') ? redcolour() : (colour == 'b') ? bluecolour()
                                : (colour == 'y')   ? yellowcolour()
                                : (colour == 'g')   ? greencolour()
                                                    : printf("you are not entering a valid colour");
    heart(size, ch);
}
void printpentagon()
{
    char ch;
    int size;

    printf("Enter size: ");
    scanf("%d", &size);
    printf("Enter any character to print: ");
    scanf(" %c", &ch);
    char colour;
    printf("Enter a colour: \n y for yellow\n b for blue\n r for red\n w for white\n g for green\n");
    scanf(" %c", &colour);
    (colour == 'r') ? redcolour() : (colour == 'b') ? bluecolour()
                                : (colour == 'y')   ? yellowcolour()
                                : (colour == 'g')   ? greencolour()
                                                    : printf("you are not entering a valid colour");
    pentagon(size, ch);
}
void printhexagon()
{
    int size;
    char ch;
    printf("Enter size: ");
    scanf("%d", &size);
    printf("Enter any character to print: ");
    scanf(" %c", &ch);
    char colour;
    printf("Enter a colour: \n y for yellow\n b for blue\n r for red\n w for white\n g for green\n");
    scanf(" %c", &colour);
    (colour == 'r') ? redcolour() : (colour == 'b') ? bluecolour()
                                : (colour == 'y')   ? yellowcolour()
                                : (colour == 'g')   ? greencolour()
                                                    : printf("you are not entering a valid colour");
    hexagon(size, ch);
}
void printstar()
{
    int size;
    char ch;
    int type;
    printf("Enter size:");
    scanf("%d", &size);
    printf("Enter any character to print: ");
    scanf(" %c", &ch);
    printf("Enter the size of star(Enter the odd number for more symmetrical shape): ");
    char colour;
    printf("Enter a colour: \n y for yellow\n b for blue\n r for red\n w for white\n g for green\n");
    scanf(" %c", &colour);
    (colour == 'r') ? redcolour() : (colour == 'b') ? bluecolour()
                                : (colour == 'y')   ? yellowcolour()
                                : (colour == 'g')   ? greencolour()
                                                    : printf("you are not entering a valid colour");
    star(size, type, ch);
}
void printkite()
{
    int size;
    char ch;
    printf("Enter the rows: ");
    scanf("%d", &size);
    printf("Enter any character to print: ");
    scanf(" %c", &ch);
    char colour;
    printf("Enter a colour: \n y for yellow\n b for blue\n r for red\n w for white\n g for green\n");
    scanf(" %c", &colour);
    (colour == 'r') ? redcolour() : (colour == 'b') ? bluecolour()
                                : (colour == 'y')   ? yellowcolour()
                                : (colour == 'g')   ? greencolour()
                                                    : printf("you are not entering a valid colour");
    kite(size, ch);
}
void printalphabets()
{

    printf("Enter the starting Alphabet(Uppercase Letter): ");
    char start;
    scanf(" %c", &start);
    printf("Enter the ending Alphabet(Uppercase Letter): ");
    char end;
    scanf(" %c", &end);
    char ch;
    printf("Enter the character you want to print");
    scanf(" %c", &ch);
    char colour;
    printf("Enter a colour: \n y for yellow\n b for blue\n r for red\n w for white\n g for green\n");
    scanf(" %c", &colour);
    (colour == 'r') ? redcolour() : (colour == 'b') ? bluecolour()
                                : (colour == 'y')   ? yellowcolour()
                                : (colour == 'g')   ? greencolour()
                                                    : printf("you are not entering a valid colour");

    Alphabets(start, end, ch);
}
void printnumbers()
{

    char ch;
    printf("Enter the starting Number: ");
    int start;
    scanf(" %d", &start);
    printf("Enter the ending Number: ");
    int end;
    scanf(" %d", &end);
    printf("Enter the character you want to print");
    scanf(" %c", &ch);
    char colour;
    printf("Enter a colour: \n y for yellow\n b for blue\n r for red\n w for white\n g for green\n");
    scanf(" %c", &colour);
    (colour == 'r') ? redcolour() : (colour == 'b') ? bluecolour()
                                : (colour == 'y')   ? yellowcolour()
                                : (colour == 'g')   ? greencolour()
                                                    : printf("you are not entering a valid colour");

    numbers(start, end, ch);
}