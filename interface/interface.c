#include "..\interface\interface_header.h"
FILE *fptr;
void get_colour(char col)
{
    (col == 'r') ? redcolour() : (col == 'b') ? bluecolour()
                             : (col == 'y')   ? yellowcolour()
                             : (col == 'g')   ? greencolour()
                                              : printf("you are not entering a valid colour");
}
void printspaces(int size)
{
    int width;
    int height;
    getConsoleSize(&width, &height);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < width; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
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
void free_draw_instruction(int x, int y, int headinglength, int width, int hieght, int middle)
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
    char ch = getch();
    if (ch == 's')
    {
        free_drawing(x, y, headinglength, middle, width, middle);
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
            gotoxy(0, 0);
            printspaces(25);
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
        whitecolour();
        gotoxy(0, 0);
        printspaces(12);
        free_draw_instruction(x, y, headinglength, middle, width, middle);
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
void free_drawing(int x, int y, int headinglength, int width, int hieght, int middle)
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
        if (ch == 72 || ch == 75 || ch == 77 || ch == 80)
        {

            cordinates(&x, &y, ch);
            gotoxy(x, y);
        }
        else if (ch == 'c')
        {
            whitecolour();
            system("cls");
            free_draw_instruction(x, y, headinglength, middle, width, middle);
        }
        else if (ch == 'm')
        {
            whitecolour();
            system("cls");
            Options();
        }
        else
        {
            free_draw_input(x, y, headinglength, width, hieght, middle, ch);
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
    square_type(size, ch, fill, x, y);
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
    triangle_type(rows, type, fill, shape, ch, side, x, y);
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

    trapezium_type(base1, base2, fill, ch, x, y);
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
    parallelogram_type(hieght, width, fill, ch, x, y);
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
    diamond_type(size, fill, ch, x, y);
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
    printf("Press 1 to make hollow 0 to make filled circle: ");
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

    circle_type(size, fill, ch, x, y);
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
    printf("Enter the type 0 for four sided and 1 to six sided star: ");
    y++;
    scanf("%d", &type);
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
    star_type(size, type, ch, x, y);
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