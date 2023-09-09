#include "data_header.h"
void fill_square(int size, char ch, int x, int y)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%c", ch);
        }
        printf("\n");

        y++;
        gotoxy(x, y);
    }
}

void hollow_square(int size, char ch, int x, int y)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == 0 || j == 0 || i == size - 1 || j == size - 1)
            {
                printf("%c", ch);
            }
            else
            {
                printf(" ");
            }

            printf("\n");

            y++;
            gotoxy(x, y);
        }
    }
}
void right_triangles(int rows, int fill, char shape, char ch, char side, int x, int y)
{
    int num = rows;

    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0;
             (shape == 'u' && side == 'l')   ? (j <= i)
             : (shape == 'd' && side == 'l') ? (j <= num)
                                             : 0;
             j++)
        {

            if (fill == 0)
            {
                if ((shape == 'u') ? (i == 0 || j == 0 || i == rows || j == i) : (shape == 'd') ? (j == num || i == 0 || j == 0 || i == rows)
                                                                                                : printf("failed again"))
                {

                    printf("%c", ch);
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {

                printf("%c", ch);
            }
        }
        for (int j = 0;
             ((shape == 'u') && (side == 'r')) ? (j <= rows) : 0;
             j++)
        {
            if (fill == 1)
            {

                if (i + j < rows)
                {

                    printf(" ");
                }
                else
                {
                    printf("%c", ch);
                }
            }
            else
            {
                if (j == rows || i == rows || j == rows - i)
                {

                    printf("%c", ch);
                }
                else
                {
                    printf(" ");
                }
            }
        }
        for (int j = 0;
             ((shape == 'd') && (side == 'r')) ? (j <= rows) : 0;
             j++)
        {
            if (fill == 1)
            {
                if (2 * i > i + j)
                {

                    printf(" ");
                }
                else
                {
                    printf("%c", ch);
                }
            }
            else
            {
                if (2 * i > i + j)
                {
                    printf(" ");
                }
                else
                {
                    if (i == 0 || j == rows || (2 * i == i + j))
                    {

                        printf("%c", ch);
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
        }
        printf("\n");

        num--;
        y++;
        gotoxy(x, y);
    }
}

void comp_triangles(int rows, int fill, char shape, char ch, char side, int x, int y)
{

    if (shape == 'U' || shape == 'u')
    {
        if (fill == 1)
        {

            for (int i = 0; i < rows; i++)
            {
                for (int j = i; j < rows; j++)
                {
                    printf(" ");
                }
                for (int j = 0; j < (2 * i) + 1; j++)
                {
                    printf("%c", ch);
                }
                printf("\n");

                y++;
                gotoxy(x, y);
            }
        }
        else if (fill == 0)
        {

            for (int i = 0; i < rows; i++)
            {
                for (int j = i; j < rows; j++)
                {
                    printf(" ");
                }
                for (int j = 0; j < (2 * i) + 1; j++)
                {
                    if (j == 0 || i == 0 || i == rows - 1 || j == 2 * i)
                    {
                        printf("%c", ch);
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");

                y++;
                gotoxy(x, y);
            }
        }
    }
    else if (shape == 'D' || shape == 'd')
    {
        if (fill == 1)
        {

            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < i + 1; j++)
                {
                    printf(" ");
                }
                for (int j = 2 * i; j < 2 * rows - 1; j++)
                {
                    printf("%c", ch);
                }
                printf("\n");

                y++;
                gotoxy(x, y);
            }
        }
        else if (fill == 0)
        {

            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < i + 1; j++)
                {
                    printf(" ");
                }
                for (int j = 2 * i; j < 2 * rows - 1; j++)
                {
                    if (i == 0 || j == 2 * i || i == rows - 1 || j == 2 * rows - 2)
                    {
                        printf("%c", ch);
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");

                y++;
                gotoxy(x, y);
            }
        }
    }
}

void fill_parralelogram(int width, int hieght, char ch, int x, int y)
{

    for (int i = 0; i < hieght; i++)
    {
        for (int j = i; j < hieght; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < width; j++)
        {
            printf("%c", ch);
        }
        printf("\n");

        y++;
        gotoxy(x, y);
    }
}
void hollow_parralelogram(int width, int hieght, char ch, int x, int y)
{
    for (int i = 0; i < hieght; i++)
    {
        for (int j = i; j < hieght; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < width; j++)
        {
            if (j == 0 || j == width - 1 || i == 0 || i == hieght - 1)
            {
                printf("%c", ch);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");

        y++;
        gotoxy(x, y);
    }
}

void fill_trapezium(int base1, int base2, char ch, int x, int y)
{

    for (int i = 0; i < ((base2 - base1) / 2) + 1; i++)
    {

        for (int j = 1; j <= base2; j++)
        {
            if (j > ((base2 - base1) / 2) - i && j <= base1 + ((base2 - base1) / 2) + i)
            {
                printf("%c", ch);
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");

        y++;
        gotoxy(x, y);
    }
}
void hollow_trapezium(int base1, int base2, char ch, int x, int y)
{
    for (int i = 0; i < ((base2 - base1) / 2) + 1; i++)
    {
        gotoxy(x, y);
        for (int j = 1; j <= base2; j++)
        {
            if ((i == 0 && ((j > ((base2 - base1) / 2)) && j <= base1 + ((base2 - base1) / 2))) || i == ((base2 - base1) / 2) || j == (((base2 - base1) / 2) - i) + 1 || j == base1 + ((base2 - base1) / 2) + i)
            {
                printf("%c", ch);
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");

        y++;
        gotoxy(x, y);
    }
}

void heart(int size, char ch, int x, int y)
{

    int i, j;
    // Printing top semi-circular shapes of the heart
    for (i = size / 2; i <= size; i += 2)
    {
        // Printing spaces
        for (j = 1; j < size - i; j += 2)
        {
            printf(" ");
        }
        // Printing stars for the left hill
        for (j = 1; j <= i; j++)
        {
            printf("%c", ch);
        }
        // Printing spaces
        for (j = 1; j <= size - i; j++)
        {
            printf(" ");
        }
        // Printing stars for the right hill
        for (j = 1; j <= i; j++)
        {
            printf("%c", ch);
        }
        // New row
        printf("\n");

        y++;
        gotoxy(x, y);
    }

    // Printing inverted star pyramid
    for (i = size; i >= 1; i--)
    {
        for (j = i; j < size; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= (i * 2) - 1; j++)
        {
            printf("%c", ch);
        }
        // New row
        printf("\n");

        y++;
        gotoxy(x, y);
    }
}
void line(char ch, int size, int x, int y)
{
    for (int i = 0; i < size; i++)
    {
        printf("%c", ch);
    }
}
void fill_circle(int size, char ch, int x, int y)
{

    // here size will be the radius
    int diameter = size * 2;
    int i, j;

    for (i = 0; i <= diameter; i++)
    {
        for (j = 0; j <= diameter; j++)
        {
            int distance = (int)sqrt((i - size) * (i - size) + (j - size) * (j - size));

            if (distance == size)
            {
                printf("%c", ch);
            }
            else
                printf(" ");
        }

        printf("\n");

        y++;
        gotoxy(x, y);
    }
}
void hollow_circle(int size, char ch, int x, int y)
{
    int diameter = size * 2;
    int i, j;
    for (i = 0; i <= diameter; i++)
    {
        for (j = 0; j <= diameter; j++)
        {
            int distance = (int)sqrt((i - size) * (i - size) + (j - size) * (j - size));

            if (distance <= size)
            {
                printf("%c", ch);
            }
            else
                printf(" ");
        }

        printf("\n");

        y++;
        gotoxy(x, y);
    }
}

void fill_diamond(int size, char ch, int x, int y)
{
    // for printint the upper part of diamond
    for (int i = 0; i < size - 1; i++)
    {
        // for empty spaces before the upper triangele
        for (int j = i; j < size; j++)
        {
            printf(" ");
        }
        // for the uper empty triangle of diammond
        for (int j = 0; j <= 2 * i; j++)
        {

            printf("%c", ch);
        }

        printf("\n");

        y++;
        gotoxy(x, y);
    }
    // Now for the lower part of diamond
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf(" ");
        }
        for (int j = 2 * i; j < 2 * size - 1; j++)
        {

            printf("%c", ch);
        }

        printf("\n");

        y++;
        gotoxy(x, y);
    }
}
void hollow_diamond(int size, char ch, int x, int y)
{
    // for printint the upper part of diamond
    for (int i = 0; i < size - 1; i++)
    {
        // for empty spaces before the upper triangele
        for (int j = i; j < size; j++)
        {
            printf(" ");
        }
        // for the uper empty triangle of diammond
        for (int j = 0; j <= 2 * i; j++)
        {

            printf("%c", ch);
        }

        printf("\n");

        y++;
        gotoxy(x, y);
    }
}

void textbox(int width, int hieght, int x, int y)
{

    for (int i = 0; i < hieght; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (i == 0 || i == hieght - 1)
            {
                printf("-");
            }
            else if (j == 0 || j == width - 1)
            {
                printf("|");
            }

            else
            {
                printf(" ");
            }
        }
        printf("\n");

        y++;
        gotoxy(x, y);
    }
}
void pentagon(int size, char ch, int x, int y)
{

    for (int i = 1; i <= size; i++)
    {

        for (int j = i; j <= size; j++)
        {
            printf(" ");
        }
        for (int j = 1; j < i; j++)
        {
            if (j == 1)
            {
                printf("%c", ch);
            }
            else
                printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == i)
            {
                printf("%c", ch);
            }
            else
                printf(" ");
        }

        printf("\n");

        y++;
        gotoxy(x, y);
    }
    for (int i = 1; i <= size; i++)
    {

        for (int j = 1; j <= size; j++)
        {
            if (j == 1 || i == size || j == size)
            {
                printf(" %c", ch);
            }
            else
                printf("  ");
        }
        printf("\n");

        y++;
        gotoxy(x, y);
    }
}
void hexagon(int size, char ch, int x, int y)
{

    for (int i = 1; i <= size; i++)
    {

        for (int j = i; j <= size; j++)
        {
            printf(" ");
        }
        for (int j = 1; j < i; j++)
        {
            if (j == 1)
            {
                printf("%c", ch);
            }
            else
                printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == i)
            {
                printf("%c", ch);
            }
            else
                printf(" ");
        }

        printf("\n");

        y++;
        gotoxy(x, y);
    }
    for (int i = 1; i <= size; i++)
    {

        for (int j = 1; j <= size; j++)
        {
            if (j == 1 || j == size)
            {
                printf(" %c", ch);
            }
            else
                printf("  ");
        }
        printf("\n");

        y++;
        gotoxy(x, y);
    }
    for (int i = 1; i <= size; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int j = i; j < size; j++)
        {
            if (j == i)
            {
                printf("%c", ch);
            }
            else
                printf(" ");
        }
        for (int j = i; j <= size; j++)
        {
            if (j == size)
            {
                printf("%c", ch);
            }
            else
                printf(" ");
        }

        printf("\n");

        y++;
        gotoxy(x, y);
    }
}
void four_sided_star(int rows, char ch, int x, int y)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("  ");
        }
        for (int j = i; j < rows; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf(" %c", ch);
        }

        printf("\n");

        y++;
        gotoxy(x, y);
    }
    for (int i = 0; i < rows / 2; i++)
    {
        for (int j = 2 * i; j < rows - 1; j++)
        {
            printf("  ");
        }
        for (int j = 0; j <= i * 2; j++)
        {
            printf(" %c", ch);
        }
        for (int j = 0; j < rows; j++)
        {
            printf(" %c", ch);
        }
        for (int j = 0; j <= i * 2; j++)
        {
            printf(" %c", ch);
        }

        printf("\n");

        y++;
        gotoxy(x, y);
    }
    for (int i = 0; i < rows * 3; i++)
    {
        printf(" %c", ch);
    }
    printf("\n");

    y++;
    gotoxy(x, y);
    for (int i = 0; i < rows / 2; i++)
    {
        for (int j = 0; j < i * 2 + 1; j++)
        {
            printf("  ");
        }
        for (int j = i; j < rows / 2; j++)
        {
            printf(" %c", ch);
        }
        for (int j = i; j < rows / 2; j++)
        {
            printf(" %c", ch);
        }
        for (int j = 0; j < rows - 1; j++)
        {
            printf(" %c", ch);
        }
        for (int j = 2 * i; j < rows - 1; j++)
        {
            printf(" %c", ch);
        }

        printf("\n");

        y++;
        gotoxy(x, y);
    }
    for (int i = 0; i < rows - 1; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("  ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf(" ");
        }
        for (int j = i; j < rows - 1; j++)
        {
            printf(" %c", ch);
        }

        printf("\n");

        y++;
        gotoxy(x, y);
    }
}
void six_sided_star(int rows, char ch, int x, int y)
{

    printf(" %c", ch);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("  ");
        }
        for (int j = i; j < rows; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf(" %c", ch);
        }

        printf("\n");

        y++;
        gotoxy(x, y);
    }
    for (int i = 0; i < rows / 2; i++)
    {
        for (int j = 2 * i; j < rows - 1; j++)
        {
            printf("  ");
        }
        for (int j = 0; j <= i * 2; j++)
        {
            printf(" %c", ch);
        }
        for (int j = 0; j < rows; j++)
        {
            printf(" %c", ch);
        }
        for (int j = 0; j <= i * 2; j++)
        {
            printf(" %c", ch);
        }

        printf("\n");

        y++;
        gotoxy(x, y);
    }
    for (int i = 0; i < rows * 3; i++)
    {
        printf(" %c", ch);
    }
    printf("\n");

    y++;
    gotoxy(x, y);
    for (int i = 0; i < rows / 2 - 1; i++)
    {
        for (int j = 0; j < i * 2 + 1; j++)
        {
            printf("  ");
        }
        for (int j = i; j < rows / 2; j++)
        {
            printf(" %c", ch);
        }
        for (int j = i; j < rows / 2; j++)
        {
            printf(" %c", ch);
        }
        for (int j = 0; j < rows - 1; j++)
        {
            printf(" %c", ch);
        }
        for (int j = 2 * i; j < rows - 1; j++)
        {
            printf(" %c", ch);
        }

        printf("\n");

        y++;
        gotoxy(x, y);
    }
    for (int i = 0; i < rows / 2; i++)
    {
        for (int j = 2 * i; j < rows - 1; j++)
        {
            printf("  ");
        }
        for (int j = 0; j <= i * 2; j++)
        {
            printf(" %c", ch);
        }
        for (int j = 0; j < rows; j++)
        {
            printf(" %c", ch);
        }
        for (int j = 0; j <= i * 2; j++)
        {
            printf(" %c", ch);
        }

        printf("\n");

        y++;
        gotoxy(x, y);
    }
    for (int i = 0; i < rows * 3; i++)
    {
        printf(" %c", ch);
    }
    printf("\n");

    y++;
    gotoxy(x, y);

    for (int i = 0; i < rows / 2; i++)
    {
        for (int j = 0; j < i * 2 + 1; j++)
        {
            printf("  ");
        }
        for (int j = i; j < rows / 2; j++)
        {
            printf(" %c", ch);
        }
        for (int j = i; j < rows / 2; j++)
        {
            printf(" %c", ch);
        }
        for (int j = 0; j < rows - 1; j++)
        {
            printf(" %c", ch);
        }
        for (int j = 2 * i; j < rows - 1; j++)
        {
            printf(" %c", ch);
        }

        printf("\n");

        y++;
        gotoxy(x, y);
    }
    for (int i = 0; i < rows - 1; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("  ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf(" ");
        }
        for (int j = i; j < rows - 1; j++)
        {
            printf(" %c", ch);
        }

        printf("\n");

        y++;
        gotoxy(x, y);
    }
}

void kite(int rows, char ch, int x, int y)
{

    // for printint the upper part of diamond of kite
    for (int i = 0; i < rows - 1; i++)
    {
        // for empty spaces before the upper triangele
        for (int j = i; j < rows; j++)
        {
            printf("  ");
        }
        // for the uper empty triangle of diammond
        for (int j = 0; j <= 2 * i; j++)
        {
            if (i == 0 || j == i || j == 0 || j == 2 * i)
            {
                printf(" %c", ch);
            }

            else
            {
                printf("  ");
            }
        }

        printf("\n");

        y++;
        gotoxy(x, y);
    }
    // Now for the lower part of diamond
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("  ");
        }
        for (int j = 2 * i; j < 2 * rows - 1; j++)
        {
            if (i == 0 || j == 2 * rows - 2 || j == 2 * i || j == rows + i - 1)
            {
                printf(" %c", ch);
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");

        y++;
        gotoxy(x, y);
    }
    // for the tail pf kite
    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < rows; j++)
        {
            printf("  ");
        }
        for (int j = 0; j <= 2 * i; j++)
        {
            if (i == 1 && j == 1)
            {
                printf("  ");
            }
            else
            {
                printf(" %c", ch);
            }
        }

        printf("\n");

        y++;
        gotoxy(x, y);
    }
}
void nextline()
{
    printf("\n");
}