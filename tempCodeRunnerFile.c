void simple_six_sidedstar(int side, char symbol)
{
    for (int i = 0; i < side; i++)
    {
        int spaces = side * 2 + (side - i);
        int stars = i == 0 ? 1 : i * 2;
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < stars; j++)
        {
            if (j == 0 || j == stars - 1)
            {
                printf("%c", symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (int i = 0; i < (side * 6) -7 + 1; i++)
    {
        if (i > 4)
        {
            printf("%c", symbol);
        }
        else{
            printf(" ");
        }
    }
printf("\n");
    // Middle section
    for (int i = 1; i < side; i++)
    {
        int spaces = i + 4;
        int stars = (side - 1) * 6 - (i + 3 + i);
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }
        printf("%c", symbol);
        for (int j = 0; j < stars - 2; j++)
        {
            printf(" ");
        }
        printf("%c\n", symbol);
    }
    for (int i = 1; i < side; i++)
    {
        int spaces = side + 2 - i;
        int stars = (side - 1) * 4 + (i * 2) - 1;
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < stars; j++)
        {
            if (j == 0 || j == stars - 1 || i == side - 1)
            {
                printf("%c", symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (int i = 1; i < side; i++)
    {
        int spaces = 3 + (side - 1) * 2 + i;
        int stars = i + 1 != side ? (side - 1) * 2 - (i)*2 - 1 : 0;
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < stars; j++)
        {
            if (j == 0 || j == stars - 1 || i == side - 1)
            {
                printf("%c", symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
#include <stdio.h>

int main()
{
    simple_six_sidedstar(18, '&');
    return 0;
}