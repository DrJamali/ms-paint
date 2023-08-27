#include"data_header.h"
FILE *fptr;
void print0(char ch, int x, int y)
{
    int radius = 5;
    int diameter = radius * 2;
    int i, j;

    for (i = 0; i <= diameter; i++)
    {
        for (j = 0; j <= diameter; j++)
        {
            int distance = (int)sqrt((i - radius) * (i - radius) + (j - radius) * (j - radius));

            if (distance == radius)

            {
                printf("%c", ch);
                fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                fprintf(fptr, " ");
            }
        }

        printf("\n");
        fprintf(fptr, "\n");

        y++;
        gotoxy(x, y);
    }
}
void print1(char ch, int x, int y)

{

    int i, j;
    int size = 9;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (j == size / 2 || i == size - 1 || (j == size / 2 - i - 1))
            {
                printf("%c", ch);
                fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                fprintf(fptr, " ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}
void print2(char ch, int x, int y)
{
    int i, j;
    int size = 9; // You can adjust the size as per your preference

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if ((i == 1 && j == 0) || i == size - 1 || (i == 0 && (j > 0 && j < size - 2)) || (j == size - 1 - i && i != 0))
            {
                printf("%c", ch);
                fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                fprintf(fptr, " ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}
void print3(char ch, int x, int y)
{
    int rows = 9;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (i == 1 || j == rows || i == rows || i == rows / 2 + 1)
            {
                printf("%c", ch);
                fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                fprintf(fptr, " ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}
void print4(char ch, int x, int y)
{
    int size = 9;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ((j == 0 && (i < size / 2)) || i == size / 2 || ((j == size - 1)))
            {
                printf("%c", ch);
                fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                fprintf(fptr, " ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}
void print5(char ch, int x, int y)
{
    int i, j;
    int height = 9;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < height; j++)
        {
            if ((i == 0 || i == height / 2 || i == height - 1))
            {
                printf("%c", ch);
                fprintf(fptr, "%c", ch);
            }
            else if (i < height / 2 && j == 0)
            {
                printf("%c", ch);
                fprintf(fptr, "%c", ch);
            }
            else if (i > height / 2 && j == height - 1)
            {
                printf("%c", ch);
                fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                fprintf(fptr, " ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}
void print6(char ch, int x, int y)
{
    int i, j;
    int height = 9;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < height; j++)
        {
            if ((i == 0 || i == height / 2 || i == height - 1) || (j == 0) || (i > height / 2 && j == height - 1))
            {
                printf("%c", ch);
                fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                fprintf(fptr, " ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}
void print7(char ch, int x, int y)
{
    int i, j;
    int height = 9;
    for (i = 0; i < height; i++)
    {
        for (j = i; j < height; j++)
        {
            if (i == 0 || j == height - 1)
            {
                printf("%c", ch);
                fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                fprintf(fptr, " ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}
void print8(char ch, int x, int y)
{

    int rows = 9;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (i == 1 || j == rows || i == rows || i == rows / 2 + 1 || j == 1)
            {
                printf("%c", ch);
                fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                fprintf(fptr, " ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}
void print9(char ch, int x, int y)
{
    int size = 9;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == 0 || (j == 0 && (i < size / 2)) || i == size / 2 || ((j == size - 1)))
            {
                printf("%c", ch);
                fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                fprintf(fptr, " ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}