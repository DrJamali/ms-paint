#include "..\interface\interface_header.h"
int is_valid_size(int size)
{
    if (size <= 100 && size != 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int is_valid_char(char ch)
{
    if (isprint(ch))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int is_valid_col(char col)
{
    if (col == 'r' || col == 'y' || col == 'g' || col == 'b' || col == 'w')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int is_valid_fill(int fill)
{
    if (fill == 1 || fill == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int is_valid_type(int type)
{
    if (type == 1 || type == 2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int is_valid_shape(char shape)
{
    if (shape == 'u' || shape == 'd')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int is_valid_side(char side)
{
    if (side == 'l' || side == 'r')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int x = 77;
int y = 6;

void print_struct(struct Shapes *ptr)
{
    fprintf(fptr, "%s\n", ptr->name);
    fprintf(fptr, "%d\n", ptr->x);
    fprintf(fptr, "%d\n", ptr->y);
    fprintf(fptr, "%d\n", ptr->size);
    fprintf(fptr, "%c\n", ptr->ch);
    fprintf(fptr, "%c\n", ptr->col);
    fprintf(fptr, "%d\n", ptr->fill);
    fprintf(fptr, "%d\n", ptr->type);
    fprintf(fptr, "%c\n", ptr->shape);
    fprintf(fptr, "%c\n", ptr->side);
    fprintf(fptr, "%d\n", ptr->width);
    fprintf(fptr, "%d\n", ptr->height);
}
void set_pos(int *p, int *q)
{
    gotoxy(x + 2, y + 4);

    printf("Use the arrow keys to move and Press p to print anywhere");
    char position;
    *p = 0;
    *q = 30;
    gotoxy(*p, *q);
    while (position != 'p')
    {
        position = getch();
        cordinates(&(*p), &(*q), position);
        gotoxy(*p, *q);
    }
    if (*q < 28)
    {
        gotoxy(x + 5, y + 6);
        printf("Hey Dont Print there !!! Don't you see the boundary downward?? \n");
        gotoxy(x + 6, y + 7);
        printf("Now try again");
        set_pos(&(*p), &(*q));
    }
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
void printStarLine(int length, int p, int q)
{
    gotoxy(p, q);
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
void Heading(int x, int y, int headinglength, int width, int hieght, int middle, char string[])
{
    getConsoleSize(&width, &hieght);
    x = 0;
    y = 0;
    printStarLine(width, x, y);
    y++;

    headinglength = strlen(string);
    middle = (width - headinglength) / 2;
    printHeading(middle, y, string);
    y++;
    printStarLine(width, x, y);
    y++;
}
void input_box()
{
    int width, hieght;
    getConsoleSize(&width, &hieght);
    x = width - 75;
    y = 3;
    gotoxy(x, y);
    call_textbox(74, 19, x, y);
    x++;
    y += 2;
}

void free_draw_instruction(int x, int y, int headinglength, int width, int hieght, int middle)
{

    char string[] = "Instructions";
    Heading(x, y, headinglength, middle, width, middle, string);
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
    // printspaces(5);
    char ch = getch();
    if (ch == 's')
    {
        free_drawing(x, y, headinglength, middle, width, middle);
    }
    else if (ch == 'm')
    {
        gotoxy(0, 0);
        printspaces(15);
        whitecolour();
        Options();
    }
}
void ShapeMenu(int x, int y, int headinglength, int width, int hieght, int middle, char ch)
{

    char string[] = "Shape Menu";
    Heading(x, y, headinglength, middle, width, middle, string);
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
    printf("->Press backspace to return to main menu\n");
    printf("-> Press q to quit\n");
    y = 24;
    getConsoleSize(&width, &hieght);
    printStarLine(width, 0, y);
    y++;
    char string2[] = "Start Drawing from here";
    headinglength = strlen(string2);
    middle = (width - headinglength) / 2;
    printHeading(middle, y, string2);
    while (1)
    {
        whitecolour();
        input_box();
        gotoxy(75, 4);
        printf("Waiting for input");
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
            printspaces(28);
            Options();
        }
        else
        {
            ShapeMenu(x, y, headinglength, middle, width, middle, ch);
        }
    }
}
void Options()
{

    // printspaces(30);
    whitecolour();
    int width, hieght;

    int headinglength, ch;

    int x;
    int y;
    int middle;
    // getConsoleSize(&width, &hieght);
    // x = 0;
    // y = 0;
    // printStarLine(width, x, y);
    // y++;
    // char string[] = "Main Menu";
    // headinglength = strlen(string);
    // middle = (width - headinglength) / 2;
    // printHeading(middle, y, string);
    // y++;
    // printStarLine(width, x, y);
    // y++;
    char string[] = "Main Menu";
    Heading(x, y, headinglength, middle, width, middle, string);
    printf("-> Press 1 to make shapes\n");
    printf("-> Press 2 to draw on terminal\n");
    printf("-> Press 3 to Save the file\n");
    printf("-> Press 4 to view existing file\n");
    printf("-> Press 5 to edit an existing file\n");
    printf("-> Press Q to quit");
    ch = getch();
    if (ch == 49)
    {
        gotoxy(0, 0);
        printspaces(27);
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
    else if (ch == 53)
    {
        edit_file();
    }
    else if (ch == 'q' || ch == 'Q')
    {
        system("cls");
        gotoxy(48, 15);
        printf("********Good Bye********");
        sleep(8);
        exit(1);
    }
    else
    {
        Options();
    }
}
void MainPage(int x, int y, int headinglength, int width, int hieght, int middle)
{
    // getConsoleSize(&width, &hieght);
    // x = 0;
    // y = 0;
    // printStarLine(width, x, y);
    // y++;
    // char string[10000] = "Welcome To MS Paint";
    // headinglength = strlen(string);
    // middle = (width - headinglength) / 2;
    // printHeading(middle, y, string);
    // y++;
    // printStarLine(width, x, y);
    char string[] = "Welcome To MS Paint";
    Heading(x, y, headinglength, middle, width, middle, string);
    getConsoleSize(&width, &hieght);
    y = (hieght / 2) - 1;
    // gotoxy(x,y);
    char string2[] = "You can also go to full screen and Press r to Refresh";
    headinglength = strlen(string2);
    middle = (width - headinglength) / 2;
    printHeading(middle, y, string2);
    y++;
    strcpy(string2, "Press Enter to start");
    headinglength = strlen(string2);
    middle = (width - headinglength) / 2;
    printHeading(middle, y, string2);
}
void Interface()
{
    int width, hieght;

    int headinglength;

    int x;
    int y;
    int middle;
    MainPage(x, y, headinglength, width, hieght, middle);
    savefiledefault();
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
    x = 0;
    y = 24;
    getConsoleSize(&width, &hieght);
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
            gotoxy(0, 0);
            printspaces(16);
            whitecolour();
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
    struct Shapes line[100];
    static int i = 0;
    i++;
    whitecolour();

    gotoxy(x, y);
    printf("Enter the Size: ");
    y++;
    scanf("%d", &line[i].size);
    gotoxy(x, y);

    printf("Enter any character to print: ");
    y++;
    scanf(" %c", &line[i].ch);
    gotoxy(x, y);
    printf("Enter colour:y for yellow,b for blue,r for red,w for white,g for green,");
    scanf(" %c", &line[i].col);
    line[i].col = tolower(line[i].col);

    y++;
    if (is_valid_size(line[i].size) || is_valid_char(line[i].ch) || is_valid_col(line[i].col))
    {
        gotoxy(x + 5, y + 5);
        printf("Invalid input (-_-)");
        gotoxy(x + 6, y + 6);
        printf("Are you trying to crash me\?\?(-_-)");
        char ch;
        ch = getch();
        return;
    }

    set_pos(&line[i].x, &line[i].y);
    get_colour(line[i].col);
    strcpy(line[i].name, "Line");
    line[i].fill = -1;
    line[i].side = '~';
    line[i].type = -1;
    line[i].shape = '~';
    line[i].width = -1;
    line[i].height = -1;
    print_struct(&line[i]);
    call_line(line[i].ch, line[i].size, line[i].x, line[i].y);
}
void printsquare()
{
    struct Shapes square[100];
    static int i = 0;
    i++;

    whitecolour();
    gotoxy(x, y);
    printf("Enter the size: ");
    y++;
    scanf("%d", &square[i].size);

    gotoxy(x, y);

    printf("Enter any character to print: ");
    scanf(" %c", &square[i].ch);
    y++;
    int fill;
    gotoxy(x, y);

    printf("1 to fill the shape 0 t emplty: ");
    y++;
    scanf("%d", &square[i].fill);
    gotoxy(x, y);

    printf("Enter colour:y for yellow,b for blue,r for red,w for white,g for green,");
    scanf(" %c", &square[i].col);
    square[i].col = tolower(square[i].col);

    if (is_valid_size(square[i].size) || is_valid_char(square[i].ch) || is_valid_col(square[i].col) || is_valid_fill(square[i].fill))
    {
        gotoxy(x + 5, y + 5);
        printf("Invalid input (-_-)");
        gotoxy(x + 6, y + 6);
        printf("Are you trying to crash me\?\?(-_-)");
        char ch;
        ch = getch();
        return;
    }

    set_pos(&square[i].x, &square[i].y);
    get_colour(square[i].col);
    square[i].shape = '~';
    square[i].side = '~';
    strcpy(square[i].name, "Square");
    square[i].type = -1;
    square[i].width = -1;
    square[i].height = -1;

    print_struct(&square[i]);
    square_type(square[i].size, square[i].ch, square[i].fill, square[i].x, square[i].y);
}
void printtriangle()
{
    struct Shapes triangle[100];
    static int i = 0;
    i++;
    printf("\n");
    whitecolour();
    gotoxy(x, y);

    printf("Enter 1 for right angle  and 2 for complete triangle : ");
    y++;
    scanf("%d", &triangle[i].type);
    gotoxy(x, y);

    printf("Enter the number of rows: ");
    scanf("%d", &triangle[i].size);
    y++;
    gotoxy(x, y);

    printf("Enter the shape U for Upward D for downward: ");
    y++;
    scanf(" %c", &triangle[i].shape);
    if (triangle[i].type == 1)
    {
        gotoxy(x, y);

        printf("Enter the l for left r for right sided: ");
        y++;
        scanf(" %c", &triangle[i].side);
    }
    else
    {
        triangle[i].side = 'R';
    }
    gotoxy(x, y);

    printf("Enter any character to print: ");
    y++;
    scanf(" %c", &triangle[i].ch);
    y++;
    gotoxy(x, y);

    printf("1 to fill the shape 0 to empty: ");
    y++;
    scanf("%d", &triangle[i].fill);
    gotoxy(x, y);
    printf("Enter colour:y for yellow,b for blue,r for red,w for white,g for green,");
    scanf(" %c", &triangle[i].col);
    triangle[i].col = tolower(triangle[i].col);
    triangle[i].shape = tolower(triangle[i].shape);
    triangle[i].side = tolower(triangle[i].side);
    if (is_valid_size(triangle[i].size) || is_valid_char(triangle[i].ch) || is_valid_col(triangle[i].col) || is_valid_fill(triangle[i].fill) || is_valid_shape(triangle[i].shape) || is_valid_side(triangle[i].side) || is_valid_type(triangle[i].type))
    {
        gotoxy(x + 5, y + 5);
        printf("Invalid input (-_-)");
        gotoxy(x + 6, y + 6);
        printf("Are you trying to crash me\?\?(-_-)");
        char ch;
        ch = getch();
        return;
    }
    set_pos(&triangle[i].x, &triangle[i].y);
    get_colour(triangle[i].col);
    strcpy(triangle[i].name, "Triangle");
    triangle[i].width = -1;
    triangle[i].height = -1;
    print_struct(&triangle[i]);
    triangle_type(triangle[i].size, triangle[i].type, triangle[i].fill, triangle[i].shape, triangle[i].ch, triangle[i].side, triangle[i].x, triangle[i].y);
}
void printtextbox()
{
    struct Shapes textbox[100];
    static int i = 0;
    i++;
    printf("\n");
    whitecolour();
    gotoxy(x, y);
    printf("Enter the hieght: ");
    y++;
    scanf("%d", &textbox[i].height);
    gotoxy(x, y);

    printf("Enter the width: ");
    y++;
    scanf("%d", &textbox[i].width);
    gotoxy(x, y);

    printf("Enter colour:y for yellow,b for blue,r for red,w for white,g for green,");
    y++;
    scanf(" %c", &textbox[i].col);
    textbox[i].col = tolower(textbox[i].col);

    if (is_valid_col(textbox[i].col) || is_valid_size(textbox[i].height) || is_valid_size(textbox[i].width))
    {
        gotoxy(x + 5, y + 5);
        printf("Invalid input (-_-)");
        gotoxy(x + 6, y + 6);
        printf("Are you trying to crash me\?\?(-_-)");
        char ch;
        ch = getch();
        return;
    }
    set_pos(&textbox[i].x, &textbox[i].y);
    get_colour(textbox[i].col);
    textbox[i].side = '~';
    textbox[i].type = -1;
    textbox[i].shape = '~';
    textbox[i].size = -1;
    textbox[i].ch = '~';
    textbox[i].fill = -1;
    strcpy(textbox[i].name, "TextBox");
    print_struct(&textbox[i]);
    call_textbox(textbox[i].width, textbox[i].height, textbox[i].x, textbox[i].y);
}
void printtrapezium()
{
    struct Shapes trapezium[100];
    static int i = 0;
    i++;
    printf("\n");
    whitecolour();
    gotoxy(x, y);

    printf("Enter the size of upper base: ");
    scanf("%d", &trapezium[i].width);
    y++;
    gotoxy(x, y);

    printf("Enter the size of lower base: ");
    scanf("%d", &trapezium[i].height);
    y++;
    if (trapezium[i].width > trapezium[i].height)
    {
        gotoxy(x, y);

        printf("uppwe base should be less than the lower base\n Try Again");
        y++;
        printtrapezium();
    }
    gotoxy(x, y);

    printf("Enter any character to print: ");
    scanf(" %c", &trapezium[i].ch);
    y++;
    gotoxy(x, y);

    printf("1 to fill the shape 0 to empty: ");
    scanf("%d", &trapezium[i].fill);
    y++;
    gotoxy(x, y);

    printf("Enter colour:y for yellow,b for blue,r for red,w for white,g for green,");
    scanf(" %c", &trapezium[i].col);
    trapezium[i].col = tolower(trapezium[i].col);

    if (is_valid_col(trapezium[i].col) || is_valid_size(trapezium[i].height) || is_valid_size(trapezium[i].width) || is_valid_fill(trapezium[i].fill))
    {
        gotoxy(x + 5, y + 5);
        printf("Invalid input (-_-)");
        gotoxy(x + 6, y + 6);
        printf("Are you trying to crash me\?\?(-_-)");
        char ch;
        ch = getch();
        return;
    }
    set_pos(&trapezium[i].x, &trapezium[i].y);
    get_colour(trapezium[i].col);
    trapezium[i].size = -1;
    trapezium[i].shape = '~';
    trapezium[i].side = '~';
    trapezium[i].type = -1;
    strcpy(trapezium[i].name, "Trapezium");
    print_struct(&trapezium[i]);
    trapezium_type(trapezium[i].width, trapezium[i].height, trapezium[i].fill, trapezium[i].ch, trapezium[i].x, trapezium[i].y);
}
void printparralelogram()
{
    struct Shapes parralelogram[100];
    static int i = 0;
    i++;
    printf("\n");
    whitecolour();
    gotoxy(x, y);

    printf("Enter the hieght: ");
    y++;
    scanf("%d", &parralelogram[i].height);
    gotoxy(x, y);

    printf("Enter width: ");
    y++;
    scanf("%d", &parralelogram[i].width);
    gotoxy(x, y);

    printf("Enter any character to print: ");
    y++;
    scanf(" %c", &parralelogram[i].ch);
    gotoxy(x, y);

    printf("1 to fill the shape 0 to empty: ");
    y++;

    scanf("%d", &parralelogram[i].fill);
    gotoxy(x, y);
    printf("Enter colour:y for yellow,b for blue,r for red,w for white,g for green,");
    scanf(" %c", &parralelogram[i].col);
    parralelogram[i].col = tolower(parralelogram[i].col);

    if (is_valid_size(parralelogram[i].height) || is_valid_size(parralelogram[i].width) || is_valid_char(parralelogram[i].ch) || is_valid_col(parralelogram[i].col) || is_valid_fill(parralelogram[i].fill))
    {
        gotoxy(x + 5, y + 5);
        printf("Invalid input (-_-)");
        gotoxy(x + 6, y + 6);
        printf("Are you trying to crash me\?\?(-_-)");
        char ch;
        ch = getch();
        return;
    }
    set_pos(&parralelogram[i].x, &parralelogram[i].y);

    get_colour(parralelogram[i].col);
    parralelogram[i].side = '~';
    parralelogram[i].shape = '~';
    parralelogram[i].type = -1;
    strcpy(parralelogram[i].name, "Parralelogram");
    print_struct(&parralelogram[i]);
    parallelogram_type(parralelogram[i].width, parralelogram[i].fill, parralelogram[i].height, parralelogram[i].ch, parralelogram[i].x, parralelogram[i].y);
}
void printdiamond()
{
    struct Shapes diamond[100];
    static int i = 0;
    i++;
    whitecolour();
    gotoxy(x, y);

    printf("Enter the rows: ");
    y++;
    scanf("%d", &diamond[i].size);
    gotoxy(x, y);

    printf("Enter any character to print: ");
    y++;
    scanf(" %c", &diamond[i].ch);
    gotoxy(x, y);
    printf("Press 1 to make complete 0 to make half diamond: ");

    y++;
    scanf("%d", &diamond[i].fill);
    gotoxy(x, y);

    printf("Enter colour:y for yellow,b for blue,r for red,w for white,g for green,");

    scanf(" %c", &diamond[i].col);
    diamond[i].col = tolower(diamond[i].col);

    if (is_valid_size(diamond[i].size) || is_valid_char(diamond[i].ch) || is_valid_col(diamond[i].col) || is_valid_fill(diamond[i].fill))
    {
        gotoxy(x + 5, y + 5);
        printf("Invalid input (-_-)");
        gotoxy(x + 6, y + 6);
        printf("Are you trying to crash me\?\?(-_-)");
        char ch;
        ch = getch();
        return;
    }
    set_pos(&diamond[i].x, &diamond[i].y);

    get_colour(diamond[i].col);
    diamond[i].side = '~';
    diamond[i].type = -1;
    diamond[i].shape = '~';
    strcpy(diamond[i].name, "Diamond");
    diamond[i].width = -1;
    diamond[i].height = -1;
    print_struct(&diamond[i]);
    diamond_type(diamond[i].size, diamond[i].fill, diamond[i].ch, diamond[i].x, diamond[i].y);
}
void printcircle()
{
    struct Shapes circle[100];
    static int i = 0;
    i++;

    whitecolour();
    gotoxy(x, y);

    printf("Enter the Radius: ");
    y++;
    scanf("%d", &circle[i].size);
    gotoxy(x, y);
    printf("Enter any character to print: ");

    y++;
    scanf(" %c", &circle[i].ch);
    int fill;
    gotoxy(x, y);
    printf("Press 1 to make hollow 0 to make filled circle: ");

    y++;
    scanf("%d", &circle[i].fill);
    char colour;
    gotoxy(x, y);
    printf("Enter colour:y for yellow,b for blue,r for red,w for white,g for green,");

    scanf(" %c", &circle[i].col);
    circle[i].col = tolower(circle[i].col);

    if (is_valid_size(circle[i].size) || is_valid_char(circle[i].ch) || is_valid_col(circle[i].col) || is_valid_fill(circle[i].fill))
    {
        gotoxy(x + 5, y + 5);
        printf("Invalid input (-_-)");
        gotoxy(x + 6, y + 6);
        printf("Are you trying to crash me\?\?(-_-)");
        char ch;
        ch = getch();
        return;
    }
    set_pos(&circle[i].x, &circle[i].y);

    get_colour(circle[i].col);
    circle[i].side = '~';
    circle[i].type = -1;
    circle[i].shape = '~';
    strcpy(circle[i].name, "Circle");
    circle[i].width = -1;
    circle[i].height = -1;
    print_struct(&circle[i]);
    circle_type(circle[i].size, circle[i].fill, circle[i].ch, circle[i].x, circle[i].y);
}
void printheart()
{
    struct Shapes heart[100];
    static int i = 0;
    i++;

    whitecolour();
    gotoxy(x, y);

    printf("Enter the Size: ");
    y++;
    scanf("%d", &heart[i].size);
    gotoxy(x, y);

    printf("Enter any character to print: ");
    scanf(" %c", &heart[i].ch);
    y++;
    gotoxy(x, y);

    printf("Enter colour:y for yellow,b for blue,r for red,w for white,g for green,");
    scanf(" %c", &heart[i].col);
    heart[i].col = tolower(heart[i].col);

    if (is_valid_size(heart[i].size) || is_valid_char(heart[i].ch) || is_valid_col(heart[i].col))
    {
        gotoxy(x + 5, y + 5);
        printf("Invalid input (-_-)");
        gotoxy(x + 6, y + 6);
        printf("Are you trying to crash me\?\?(-_-)");
        char ch;
        ch = getch();
        return;
    }
    set_pos(&heart[i].x, &heart[i].y);
    //  gotoxy(x, y);
    get_colour(heart[i].col);
    heart[i].side = '~';
    heart[i].type = -1;
    heart[i].shape = '~';
    heart[i].fill = -1;
    strcpy(heart[i].name, "Heart");
    heart[i].width = -1;
    heart[i].height = -1;
    print_struct(&heart[i]);
    call_heart(heart[i].size, heart[i].ch, heart[i].x, heart[i].y);
}
void printpentagon()
{
    struct Shapes pentagon[100];
    static int i = 0;
    i++;
    printf("\n");
    whitecolour();
    gotoxy(x,y);
    printf("Enter size: ");
    y++;
    scanf("%d", &pentagon[i].size);
    printf("Enter any character to print: ");
    y++;
    scanf(" %c", &pentagon[i].ch);
    printf("Enter colour:y for yellow,b for blue,r for red,w for white,g for green,");
    scanf(" %c", &pentagon[i].col);
    pentagon[i].col = tolower(pentagon[i].col);

    if (is_valid_size(pentagon[i].size) || is_valid_char(pentagon[i].ch) || is_valid_col(pentagon[i].col))
    {
        gotoxy(x + 5, y + 5);
        printf("Invalid input (-_-)");
        gotoxy(x + 6, y + 6);
        printf("Are you trying to crash me\?\?(-_-)");
        char ch;
        ch = getch();
        return;
    }
    set_pos(&pentagon[i].x, &pentagon[i].y);

    get_colour(pentagon[i].col);
    pentagon[i].side = '~';
    pentagon[i].type = -1;
    pentagon[i].shape = '~';
    pentagon[i].fill = -1;
    strcpy(pentagon[i].name, "Pentagon");
    pentagon[i].width = -1;
    pentagon[i].height = -1;
    print_struct(&pentagon[i]);
    call_pentagon(pentagon[i].size, pentagon[i].ch, pentagon[i].x, pentagon[i].y);
}
void printhexagon()
{
    struct Shapes hexagon[100];
    static int i = 0;
    i++;

    whitecolour();
    gotoxy(x, y);

    printf("Enter size: ");
    y++;
    scanf("%d", &hexagon[i].size);
    gotoxy(x,y);

    printf("Enter any character to print: ");
    gotoxy(x, y);

    y++;
    scanf(" %c", &hexagon[i].ch);
    gotoxy(x, y);

    printf("Enter colour:y for yellow,b for blue,r for red,w for white,g for green,");
    scanf(" %c", &hexagon[i].col);

    set_pos(&hexagon[i].x, &hexagon[i].y);
    hexagon[i].col = tolower(hexagon[i].col);

    if (is_valid_size(hexagon[i].size) || is_valid_char(hexagon[i].ch) || is_valid_col(hexagon[i].col))
    {
        gotoxy(x + 5, y + 5);
        printf("Invalid input (-_-)");
        gotoxy(x + 6, y + 6);
        printf("Are you trying to crash me\?\?(-_-)");
        char ch;
        ch = getch();
        return;
    }
    get_colour(hexagon[i].col);
    hexagon[i].side = '~';
    hexagon[i].type = -1;
    hexagon[i].shape = '~';
    hexagon[i].fill = -1;
    strcpy(hexagon[i].name, "Hexagon");
    hexagon[i].width = -1;
    hexagon[i].height = -1;
    print_struct(&hexagon[i]);
    call_hexagon(hexagon[i].size, hexagon[i].ch, hexagon[i].x, hexagon[i].y);
}
void printstar()
{
    struct Shapes star[100];
    static int i = 0;
    i++;
    whitecolour();
    gotoxy(x, y);

    printf("Enter the type 0 for four sided and 1 to six sided star: ");
    y++;
    scanf("%d", &star[i].type);
    gotoxy(x, y);

    printf("Enter the size of star(Enter the odd number for more symmetrical shape): ");
    y++;
    scanf("%d", &star[i].size);
    gotoxy(x, y);

    printf("Enter any character to print: ");
    scanf(" %c", &star[i].ch);
    y++;
    gotoxy(x, y);

    printf("Enter colour:y for yellow,b for blue,r for red,w for white,g for green,");
    scanf(" %c", &star[i].col);
    star[i].col = tolower(star[i].col);
    if (is_valid_size(star[i].size) || is_valid_char(star[i].ch) || is_valid_col(star[i].col) || is_valid_type(star[i].type))
    {
        gotoxy(x + 5, y + 5);
        printf("Invalid input (-_-)");
        gotoxy(x + 6, y + 6);
        printf("Are you trying to crash me\?\?(-_-)");
        char ch;
        ch = getch();
        return;
    }
    set_pos(&star[i].x, &star[i].y);
    get_colour(star[i].col);
    star[i].side = '~';
    star[i].shape = '~';
    star[i].size = -1;
    star[i].fill = -1;
    strcpy(star[i].name, "Star");

    star[i].width = -1;
    star[i].height = -1;
    print_struct(&star[i]);
    star_type(star[i].size, star[i].type, star[i].ch, star[i].x, star[i].y);
}
void printkite()
{
    struct Shapes kite[100];
    static int i = 0;
    i++;

    whitecolour();
    gotoxy(x, y);

    printf("Enter the rows: ");
    y++;
    scanf("%d", &kite[i].size);
    gotoxy(x, y);

    printf("Enter any character to print: ");
    y++;
    scanf(" %c", &kite[i].ch);
    char colour;
    gotoxy(x, y);

    printf("Enter colour:y for yellow,b for blue,r for red,w for white,g for green,");
    scanf(" %c", &kite[i].col);
    kite[i].col = tolower(kite[i].col);
    if (is_valid_size(kite[i].size) || is_valid_char(kite[i].ch) || is_valid_col(kite[i].col))
    {
        gotoxy(x + 5, y + 5);
        printf("Invalid input (-_-)");
        gotoxy(x + 6, y + 6);
        printf("Are you trying to crash me\?\?(-_-)");
        char ch;
        ch = getch();
        return;
    }
    set_pos(&kite[i].x, &kite[i].y);
    get_colour(kite[i].col);
    kite[i].side = '~';
    kite[i].type = -1;
    kite[i].shape = '~';
    kite[i].fill = -1;
    strcpy(kite[i].name, "Kite");
    kite[i].width = -1;
    kite[i].height = -1;
    print_struct(&kite[i]);
    call_kite(kite[i].size, kite[i].ch, kite[i].x, kite[i].y);
}
void printalphabets()
{
    struct Shapes alpha_shapes[100];
    static int i = 0;
    i++;
    printf("\n");
    whitecolour();
    gotoxy(x, y);

    printf("Enter the starting Alphabet(Uppercase Letter): ");
    y++;
    char start;
    scanf(" %c", &alpha_shapes[i].side);
    gotoxy(x, y);
    // here i am getting input in side and shape of start and end because i dont want to initialize two new varibles in struct
    printf("Enter the ending Alphabet(Uppercase Letter): ");
    y++;
    char end;
    scanf(" %c", &alpha_shapes[i].shape);
    char ch;
    gotoxy(x, y);
    alpha_shapes[i].side = toupper(alpha_shapes[i].side);
    alpha_shapes[i].shape = toupper(alpha_shapes[i].shape);

    int flag = 0;
    if ((isalpha(alpha_shapes[i].side) && isalpha(alpha_shapes[i].shape)) == 0)
    {
        flag = 1;
    }

    printf("Enter the character you want to print: ");

    y++;
    scanf(" %c", &alpha_shapes[i].ch);
    gotoxy(x, y);
    printf("Enter colour:y for yellow,b for blue,r for red,w for white,g for green,");

    scanf(" %c", &alpha_shapes[i].col);
    alpha_shapes[i].col = tolower(alpha_shapes[i].col);
    if (is_valid_char(alpha_shapes[i].ch) || is_valid_col(alpha_shapes[i].col) || flag)
    {
        gotoxy(x + 5, y + 5);
        printf("Invalid input (-_-)");
        gotoxy(x + 6, y + 6);
        printf("Are you trying to crash me\?\?(-_-)");
        char ch;
        ch = getch();
        return;
    }
    set_pos(&alpha_shapes[i].x, &alpha_shapes[i].y);
    get_colour(alpha_shapes[i].col);
    alpha_shapes[i].type = -1;
    alpha_shapes[i].ch = '~';
    alpha_shapes[i].fill = -1;
    alpha_shapes[i].size = -1;
    strcpy(alpha_shapes[i].name, "Alphabets");
    alpha_shapes[i].width = -1;
    alpha_shapes[i].height = -1;
    print_struct(&alpha_shapes[i]);
    Alphabets(alpha_shapes[i].side, alpha_shapes[i].shape, alpha_shapes[i].ch, alpha_shapes[i].x, alpha_shapes[i].y);
}
void printnumbers()
{
    struct Shapes number_shapes[100];
    static int i = 0;
    i++;
    printf("\n");
    whitecolour();
    gotoxy(x, y);

    printf("Enter the starting number: ");
    y++;

    scanf("%d", &number_shapes[i].fill);
    gotoxy(x, y);
    // here i am getting input in fill and type of start and end because i dont want to initialize two new varibles in struct
    printf("Enter the ending number");
    y++;
    scanf("%d", &number_shapes[i].type);
    gotoxy(x, y);
    printf("Enter the character you want to print: ");
    scanf(" %c", &number_shapes[i].ch);
    y++;
    gotoxy(x, y);
    int flag = 0;
    if ((number_shapes[i].type > 9 || number_shapes[i].fill < 0))
    {
        flag = 1;
    }

    printf("Enter colour:y for yellow,b for blue,r for red,w for white,g for green,");
    scanf(" %c", &number_shapes[i].col);
    number_shapes[i].col = tolower(number_shapes[i].col);
    if (is_valid_char(number_shapes[i].ch) || is_valid_col(number_shapes[i].col) || flag)
    {
        gotoxy(x + 5, y + 5);
        printf("Invalid input (-_-)");
        gotoxy(x + 6, y + 6);
        printf("Are you trying to crash me\?\?(-_-)");
        char ch;
        ch = getch();
        return;
    }
    set_pos(&number_shapes[i].x, &number_shapes[i].y);
    get_colour(number_shapes[i].col);

    strcpy(number_shapes[i].name, "Numbers");
    number_shapes[i].side = '~';
    number_shapes[i].shape = '~';
    number_shapes[i].size = -1;
    number_shapes[i].width = -1;
    number_shapes[i].height = -1;
    print_struct(&number_shapes[i]);
    numbers(number_shapes[i].fill, number_shapes[i].type, number_shapes[i].ch, number_shapes[i].x, number_shapes[i].y);
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
    open_file(folder_add);
    printf("Press any key to exit");
    ch = getch();
    exit(1);
}
void edit_file()
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
    printf("Enter the folder absolute path with the file name you want to edit: ");
    char folder_add[100];
    gets(folder_add);
    gotoxy(0, 60);
    editing(folder_add);
    gotoxy(0, 0);
    printspaces(40);
    whitecolour();
    Options();
}