#include"data_header.h"
void printA(char ch, int x, int y)
{
    int rows = 9;
    for (int i = 0; i < rows; i++)
    {
        for (int j = i; j < rows; j++)
        {
            printf(" ");
            // fprintf(fptr, " ");
        }
        for (int j = 0; j < (2 * i) + 1; j++)
        {
            if (j == 0 || i == 0 || i == (rows / 2) || j == 2 * i)
            {
                printf("%c", ch);
                // fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                // fprintf(fptr, " ");
            }
        }
        printf("\n");
        // fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}
void printB(char ch, int x, int y)
{
    int rows = 9;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            if ((i == 0 && j < rows - 2) || j == 0 || (i == rows / 2 - 1 && j < rows - 2) || (i == rows - 1 && j < rows - 2) || (j == rows - 1 && (i != 0 && i != rows / 2 - 1 && i != rows - 1)))
            {
                printf("%c", ch);
                // fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                // fprintf(fptr, " ");
            }
        }
        printf("\n");
        // fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}
void printC(char ch, int x, int y)
{
    int radius = 5;
    int diameter = radius * 2;
    int i, j;

    for (i = 0; i <= diameter; i++)
    {
        for (j = 0; j <= radius + 2; j++)
        {
            int distance = (int)sqrt((i - radius) * (i - radius) + (j - radius) * (j - radius));

            if (distance == radius)
            {
                printf("%c", ch);
                // fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                // fprintf(fptr, " ");
            }
        }
        printf("\n");
        // fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}
void printD(char ch, int x, int y)
{
    int radius = 5;
    int diameter = radius * 2;
    int i, j;

    for (i = 0; i <= diameter; i++)
    {
        for (j = radius - 2; j <= diameter; j++)
        {
            int distance = (int)sqrt((i - radius) * (i - radius) + (j - radius) * (j - radius));

            if (distance == radius || j == radius - 2)
            {
                printf("%c", ch);
                // fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                // fprintf(fptr, " ");
            }
        }

        printf("\n");
        // fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}
void printE(char ch, int x, int y)
{
    int size = 9;
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (i == 9 / 2 || j == 1 || i == 1 || i == 9)
            {
                printf("%c", ch);
                // fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                // fprintf(fptr, " ");
            }
        }
        printf("\n");
        // fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}
void printF(char ch, int x, int y)
{
    int size = 9;
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (i == 9 / 2 || j == 1 || i == 1)
            {
                printf("%c", ch);
                // fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                // fprintf(fptr, " ");
            }
        }
        printf("\n");
        // fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}
void printG(char ch, int x, int y)
{
    int i, j;
    int size = 9;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if ((j == 1 && i != 0 && i != size - 1) || ((i == 0 || i == size - 1) && j > 1 && j < size - 2) || (i == ((size - 1) / 2) && j > 3 && j < size - 1) || (j == size - 2 && i != 0 && i >= ((size - 1) / 2) && i != size - 1))
            {
                printf("%c", ch);
                // fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                // fprintf(fptr, " ");
            }
        }
        printf("\n");
        // fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}
void printH(char ch, int x, int y)
{
    int rows = 9;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (i == rows / 2 + 1 || j == 1 || j == rows)
            {
                printf("%c", ch);
                // fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                // fprintf(fptr, " ");
            }
        }
        printf("\n");
        // fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}
void printI(char ch, int x, int y)
{
    int rows = 9;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (i == 1 || i == rows || j == rows / 2 + 1)
            {
                printf("%c", ch);
                // fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                // fprintf(fptr, " ");
            }
        }
        printf("\n");
        // fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}
void printJ(char ch, int x, int y)
{
    int size = 9;
    for (int i = 0; i < size + 4; i++)
    {

        if (i > size / 2)
        {
            printf("%c", ch);
            // fprintf(fptr, "%c", ch);
        }
        else
        {
            printf(" ");
            // fprintf(fptr, " ");
        }
    }
    printf("\n");
    // fprintf(fptr, "\n");
    y++;
    gotoxy(x, y);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == size - 1 || j == size - 1 || (j == 0 && (i > size - 4)))
            {
                printf("%c", ch);
                // fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                // fprintf(fptr, " ");
            }
        }
        printf("\n");
        // fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}
void printK(char ch, int x, int y)
{
    int size = 6;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (j == i || j == size - 1)
            {
                printf("%c", ch);
                // fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                // fprintf(fptr, " ");
            }
        }
        printf("\n");
        // fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                printf("%c", ch);
                // fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                // fprintf(fptr, " ");
            }
        }
        printf("\n");
        // fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}
void printL(char ch, int x, int y)
{
    int rows = 9;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (j == 1 || i == rows)
            {
                printf("%c", ch);
                // fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                // fprintf(fptr, " ");
            }
        }
        printf("\n");
        // fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}
void printM(char ch, int x, int y)
{
    int height = 9;
    int i, j, counter = 0;
    for (i = 0; i < height; i++)
    {
        printf("%c", ch);
        // fprintf(fptr, "%c", ch);
        for (j = 0; j <= height; j++)
        {
            if (j == height)
            {
                printf("%c", ch);
                // fprintf(fptr, "%c", ch);
            }
            else if (j == counter || j == height - counter - 1)
            {
                printf("%c", ch);
                // fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                // fprintf(fptr, " ");
            }
        }
        if (counter == height / 2)
        {
            counter = -99999;
        }
        else
            counter++;
        printf("\n");
        // fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}
void printN(char ch, int x, int y)
{
    int rows = 9;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                printf("%c", ch);
                // fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                // fprintf(fptr, " ");
            }
        }
        for (int j = i; j < rows - 1; j++)
        {
            printf(" ");
            // fprintf(fptr, " ");
        }

        for (int j = 1; j == 1; j++)
        {
            if (i < rows)
            {
                printf("%c", ch);
                // fprintf(fptr, "%c", ch);
            }
        }
        printf("\n");
        // fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}
void printO(char ch, int x, int y)
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
                // fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                // fprintf(fptr, " ");
            }
        }

        printf("\n");
        // fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}
void printP(char ch, int x, int y)
{
    int size = 9;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == 0 || j == 0 || i == size / 2 || ((j == size - 1) && (i < size / 2)))
            {
                printf("%c", ch);
                // fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                // fprintf(fptr, " ");
            }
        }
        printf("\n");
        // fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}
void printQ(char ch, int x, int y)
{
    int i, j, k;
    for (i = 0; i <= 11; i++)
    {
        for (j = 0; j <= 11; j++)
        {
            if (i >= 0 && i < 2 && j < 9 || i >= 2 && i < 9 && j == 0 || j == 8 && i < 10 || i > 7 && i <= 9 && j < 9 || i >= 9 && i <= 11 && j == i)
            {
                printf("%c", ch);
                // fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                // fprintf(fptr, " ");
            }
        }
        printf("\n");
        // fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}
void printR(char ch, int x, int y)
{
    int size = 9;
    for (int i = 0; i < size / 2 + 1; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == 0 || j == 0 || i == size / 2 || j == size - 1)
            {
                printf("%c", ch);
                // fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                // fprintf(fptr, " ");
            }
        }
        printf("\n");
        // fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
    for (int i = 0; i < size / 2 + 2; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                printf("%c", ch);
                // fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                // fprintf(fptr, " ");
            }
        }
        printf("\n");
        // fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}
void printS(char ch, int x, int y)
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
                // fprintf(fptr, "%c", ch);
            }

            else if (i < height / 2 && j == 0)
            {
                printf("%c", ch);
                // fprintf(fptr, "%c", ch);
            }

            else if (i > height / 2 && j == height - 1)
            {
                printf("%c", ch);
                // fprintf(fptr, "%c", ch);
            }

            else
            {
                printf(" ");
                // fprintf(fptr, " ");
            }
        }
        printf("\n");
        // fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}
void printT(char ch, int x, int y)
{
    int i, j;
    int height = 10;
    for (i = 0; i < height - 2; i++)
    {
        for (j = 0; j < height; j++)
        {
            if (i == 0 || j == height / 2 - 1)
            {
                printf("%c", ch);
                // fprintf(fptr, "%c", ch);
            }

            else
            {
                printf(" ");
                // fprintf(fptr, " ");
            }
        }
        printf("\n");
        // fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}
void printU(char ch, int x, int y)
{
    int height = 9;

    int i, j;
    for (i = 0; i < height; i++)
    {
        if (i != 0 && i != height - 1)
        {
            printf("%c", ch);
            // fprintf(fptr, "%c", ch);
        }

        else
        {
            printf(" ");
            // fprintf(fptr, " ");
        }
        for (j = 0; j < height; j++)
        {
            if (((i == height - 1) && j >= 0 && j < height - 1))
            {
                printf("%c", ch);
                // fprintf(fptr, "%c", ch);
            }

            else if (j == height - 1 && i != 0 && i != height - 1)
            {
                {
                    printf("%c", ch);
                    // fprintf(fptr, "%c", ch);
                }
            }
            else
            {
                printf(" ");
                // fprintf(fptr, " ");
            }
        }
        printf("\n");
        // fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}
void printV(char ch, int x, int y)
{
    int rows = 9;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf(" ");
            // fprintf(fptr, " ");
        }
        for (int j = 2 * i; j < 2 * rows - 1; j++)
        {
            if (j == 2 * i || i == rows - 1 || j == 2 * rows - 2)
            {
                printf("%c", ch);
                // fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                // fprintf(fptr, " ");
            }
        }
        printf("\n");
        // fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}
void printW(char ch, int x, int y)
{
    int height = 9;

    int i, j, counter = height / 2;
    for (i = 0; i < height; i++)
    {
        printf("%c", ch);
        // fprintf(fptr, "%c", ch);
        for (j = 0; j <= height; j++)
        {
            if (j == height)
            {
                printf("%c", ch);
                // fprintf(fptr, "%c", ch);
            }
            else if ((i >= height / 2) && (j == counter || j == height - counter - 1))
            {
                printf("%c", ch);
                // fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                // fprintf(fptr, " ");
            }
        }
        if (i >= height / 2)
        {
            counter++;
        }
        printf("\n");
        // fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}
void printX(char ch, int x, int y)
{
    int i, j, counter = 0;
    int height = 9;
    for (i = 0; i <= height; i++)
    {
        for (j = 0; j <= height; j++)
        {
            if (j == counter || j == height - counter)
            {
                printf("%c", ch);
                // fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                // fprintf(fptr, " ");
            }
        }
        counter++;
        printf("\n");
        // fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}
void printY(char ch, int x, int y)
{
    int height = 9;

    int i, j, counter = 0;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j <= height; j++)
        {
            if (j == counter || j == height - counter && i <= height / 2)
            {
                printf("%c", ch);
                // fprintf(fptr, "%c", ch);
            }

            else
            {
                printf(" ");
                // fprintf(fptr, " ");
            }
        }
        printf("\n");
        // fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
        if (i < height / 2)
            counter++;
    }
}
void printZ(char ch, int x, int y)
{
    int height = 9;

    int i, j, counter = height - 1;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < height; j++)
        {
            if (i == 0 || i == height - 1 || j == counter)
            {
                printf("%c", ch);
                // fprintf(fptr, "%c", ch);
            }
            else
            {
                printf(" ");
                // fprintf(fptr, " ");
            }
        }
        counter--;
        printf("\n");
        // fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}
