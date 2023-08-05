#include <stdio.h>
#include<math.h>
void print0(char ch){
    int radius=5;
    int diameter = radius * 2; 
     int i, j; 
  
     for (i = 0; i <= diameter; i++) { 
         for (j = 0; j <= diameter; j++) { 
             int distance = (int) sqrt((i - radius) * (i - radius) + (j - radius) * (j - radius)); 
  
             if (distance == radius) 
                 printf("%c",ch); 
             else 
                 printf(" "); 
         } 
  
         printf("\n");
}
}
void print1(char ch)

{

    int i, j;
    int size = 9;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (j == size / 2 || i == size - 1 || (j == size / 2 - i - 1))
            {
                printf("%c",ch);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void print2(char ch){
    int i, j;
    int size = 9; // You can adjust the size as per your preference

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if ((i==1&&j==0)||i==size-1||(i==0&&(j>0&&j<size-2))||(j==size-1-i&&i!=0)) {      
                printf("%c",ch);
            } else {
                printf(" ");
            }
        }
        printf("\n");
}
}
void print3(char ch){
    int rows=9;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=rows;j++)
        {
            if(i==1||j==rows||i==rows||i==rows/2+1)
            {
                printf("%c",ch);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
}
}
void print4(char ch){
    int size = 9;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ((j == 0&&(i<size/2)) || i == size/2 || ((j==size-1)))
            {
                printf("%c",ch);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
}
}
void print5(char ch){
int i, j;
    int height=9;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if ((i == 0 || i == height / 2
                || i == height - 1))
                printf("%c",ch);
            else if (i < height / 2
                    && j == 0)
                printf("%c",ch);
            else if (i > height / 2
                    && j == height - 1)
                printf("%c",ch);
            else
              printf(" ");
        }
    printf("\n");
}    
}
void print6(char ch){
    int i, j;
    int height = 9;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < height; j++)
        {
            if ((i == 0 || i == height / 2 || i == height - 1) || (j == 0) || (i > height / 2 && j == height - 1))
                printf("%c",ch);
            else
                printf(" ");
        }
        printf("\n");
}
}
void print7(char ch){
       int i, j;
    int height = 9;
    for (i = 0; i < height; i++)
    {
        for (j = i; j < height; j++)
        {
            if (i==0||j==height-1)
                printf("%c",ch);
            else
                printf(" ");
        }
        printf("\n");
    }

}
void print8(char ch){

    int rows=9;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=rows;j++)
        {
            if(i==1||j==rows||i==rows||i==rows/2+1||j==1)
            {
                printf("%c",ch);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
}
}
void print9(char ch){
     int size = 9;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == 0 || (j == 0&&(i<size/2)) || i == size/2 || ((j==size-1)))
            {
                printf("%c",ch);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}
void numbers(int start,int end,char ch)
{
    void (*printFunctions[])(char) = {print0, print1, print2, print3, print4, print5, print6, print7, print8, print9};

    for (int i = start; i <= end; i++)
    {
        printf("Printing %d:\n",  i); // Print the current character being processed
        printFunctions[i](ch);             // Call the corresponding print function
        printf("\n");                      // Print a new line after each character is printed
    }
  
}