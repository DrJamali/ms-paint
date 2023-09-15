#include "./brain_header.h"

void get_colour(char col)
{
    if (col == 'r')
    {
        redcolour();
    }
    else if (col == 'b')
    {
        bluecolour();
    }
    else if (col == 'y')
    {
        yellowcolour();
    }
    else if (col == 'g')
    {
        greencolour();
    }
    else if (col == 'w')
    {
        whitecolour();
    }
    else
    {
        printf("invalid colour");
    }
}
void free_draw_input(int x, int y, int headinglength, int width, int hieght, int middle, int ch)
{
    if (ch == 'r')
    {
        redcolour();
        ch = getch();
        cordinates(&x, &y, ch);
        gotoxy(x, y);
        printf("*");
    }
    else if (ch == 'b')
    {
        bluecolour();
        ch = getch();
        cordinates(&x, &y, ch);
        gotoxy(x, y);
        printf("*");
    }
    else if (ch == 'g')
    {
        greencolour();
        ch = getch();
        cordinates(&x, &y, ch);
        gotoxy(x, y);
        printf("*");
    }
    else if (ch == 'y')
    {
        yellowcolour();
        ch = getch();
        cordinates(&x, &y, ch);
        gotoxy(x, y);
        printf("*");
    }

    else if (ch == 32)
    {
        whitecolour();

        ch = getch(); // Read the arrow key
        cordinates(&x, &y, ch);
        gotoxy(x, y);
        printf("*");
    }
    else if (ch == 8)
    {

        getch();
        ch = getch();
        cordinates(&x, &y, ch);
        gotoxy(x, y);
        printf(" ");
    }
}
void get_shape(char name[], int size, int x, int y, char col, char ch, int fill, int type, char side, char shape, int width, int hieght)
{
    gotoxy(x, y);
    get_colour(col);
    if ((strcmp(name, "Line") == 0))
    {
        call_line(ch, size, x, y);
    }
    else if ((strcmp(name, "Triangle") == 0))
    {
        triangle_type(size, type, fill, shape, ch, side, x, y);
    }
    else if ((strcmp(name, "Square") == 0))
    {
        square_type(size, ch, fill, x, y);
    }
    else if ((strcmp(name, "TextBox") == 0))
    {
        call_textbox(width, hieght, x, y);
    }
    else if ((strcmp(name, "Trapezium") == 0))
    {
        trapezium_type(width, hieght, fill, ch, x, y);
    }
    else if ((strcmp(name, "Parralelogram") == 0))
    {
        parallelogram_type(hieght, width, fill, ch, x, y);
    }
    else if ((strcmp(name, "Diamond") == 0))
    {
        diamond_type(size, fill, ch, x, y);
    }
    else if ((strcmp(name, "Circle") == 0))
    {
        circle_type(size, fill, ch, x, y);
    }
    else if ((strcmp(name, "Heart") == 0))
    {
        call_heart(size, ch, x, y);
    }
    else if ((strcmp(name, "Pentagon") == 0))
    {
        call_pentagon(size, ch, x, y);
    }
    else if ((strcmp(name, "Hexagon") == 0))
    {
        call_hexagon(size, ch, x, y);
    }

    else if ((strcmp(name, "Star") == 0))
    {
        star_type(size, type, ch, x, y);
    }
    else if ((strcmp(name, "Kite") == 0))
    {
        call_kite(size, ch, x, y);
    }
    else if ((strcmp(name, "Alphabets") == 0))
    {
        Alphabets(side, shape, ch, x, y);
    }
    else if ((strcmp(name, "Numbers") == 0))
    {
        numbers(fill, type, ch, x, y);
    }
    else
    {
        printf("noting relative found");
    }
}

void Alphabets(int start, int end, char ch, int x, int y)
{
    int start1 = start - 65;
    int end1 = end - 65;
    void (*printFunctions[])(char, int, int) = {printA, printB, printC, printD, printE, printF, printG, printH, printI, printJ, printK, printL, printM, printN, printO, printP, printQ, printR, printS, printT, printU, printV, printW, printX, printY, printZ};
    for (int i = start1; i <= end1; i++)
    {
        gotoxy(x, y);
        printf("Printing %c:\n", 'A' + i);
        y = y + 2;
        gotoxy(x, y);
        printFunctions[i](ch, x, y);
        printf("\n");
        // fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
        y = y + 11;
    }
}
void numbers(int start, int end, char ch, int x, int y)
{
    void (*printFunctions[])(char, int, int) = {print0, print1, print2, print3, print4, print5, print6, print7, print8, print9};

    for (int i = start; i <= end; i++)
    {
        gotoxy(x, y);
        printf("Printing %d:\n", i);
        y = y + 2;
        gotoxy(x, y);                // Print the current character being processed
        printFunctions[i](ch, x, y); // Call the corresponding print function
        printf("\n");
        // fprintf(fptr, "\n");
        y = y + 11;
        // Print a new line after each character is printed
    }
}

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
        while (ch == 'q')
        {
            printf("Press 'q' to quit");
        }
    }
}
void open_file(char path[])
{
    FILE *fptr2;
    char choice;
    strcat(path, ".txt");

    fptr2 = fopen(path, "r");
    if (fptr2 == NULL)
    {
        printf("Error in opening\n");
        return;
    }

    int x, y, size, fill, type, end, width, hieght;
    char ch, col, name[100], shape, side;
    while (end != EOF)
    {
        fscanf(fptr2, " %s", &name);
        fscanf(fptr2, " %d", &x);
        fscanf(fptr2, " %d", &y);
        fscanf(fptr2, " %d", &size);
        fscanf(fptr2, " %c", &ch);
        fscanf(fptr2, " %c", &col);
        fscanf(fptr2, " %d", &fill);
        fscanf(fptr2, " %d", &type);
        fscanf(fptr2, " %c", &side);
        fscanf(fptr2, " %c", &shape);
        fscanf(fptr2, " %d", &width);
        fscanf(fptr2, " %d", &hieght);
        end = fgetc(fptr2);
        get_shape(name, size, x, y, col, ch, fill, type, shape, side, width, hieght);
    }
}
void square_type(int size, char ch, int fill, int x, int y)
{
    if (fill == 0)
    {
        hollow_square(size, ch, x, y);
    }
    else if (fill == 1)
    {
        fill_square(size, ch, x, y);
    }
}
void triangle_type(int rows, int type, int fill, char shape, char ch, char side, int x, int y)
{

    if (type == 1)
    {
        right_triangles(rows, fill, shape, ch, side, x, y);
    }
    else if (type == 2)
    {
        comp_triangles(rows, fill, shape, ch, side, x, y);
    }
}
void parallelogram_type(int width, int fill, int hieght, char ch, int x, int y)
{
    if (fill == 1)
    {
        fill_parralelogram(hieght, width, ch, x, y);
    }
    else if (fill == 0)
    {
        hollow_parralelogram(hieght, width, ch, x, y);
    }
}
void trapezium_type(int base1, int base2, int fill, char ch, int x, int y)
{
    if (fill == 1)
    {

        fill_trapezium(base1, base2, ch, x, y);
    }
    else if (fill == 0)
    {
        hollow_trapezium(base1, base2, ch, x, y);
    }
}
void circle_type(int size, int fill, char ch, int x, int y)
{
    if (fill == 1)
    {
        fill_circle(size, ch, x, y);
    }
    else if (fill == 0)
    {
        hollow_circle(size, ch, x, y);
    }
}

void diamond_type(int size, int fill, char ch, int x, int y)
{
    if (fill == 1)
    {
        fill_diamond(size, ch, x, y);
    }
    else if (fill == 0)
    {
        hollow_diamond(size, ch, x, y);
    }
}
void star_type(int rows, int type, char ch, int x, int y)
{
    if (type == 0)
    {
        four_sided_star(rows, ch, x, y);
    }
    else if (type == 1)
    {
        six_sided_star(rows, ch, x, y);
    }
}
void call_line(char ch, int size, int x, int y)
{
    line(ch, size, x, y);
}
void call_heart(int size, char ch, int x, int y)
{
    heart(size, ch, x, y);
}
void call_textbox(int width, int hieght, int x, int y)
{
    textbox(width, hieght, x, y);
}
void call_pentagon(int size, char ch, int x, int y)
{
    pentagon(size, ch, x, y);
}
void call_hexagon(int size, char ch, int x, int y)
{
    hexagon(size, ch, x, y);
}
void call_kite(int rows, char ch, int x, int y)

{
    kite(rows, ch, x, y);
}
void editing(char path[])
{
    open_file(path);
    fptr = NULL;
    fptr = fopen(path, "a");
}