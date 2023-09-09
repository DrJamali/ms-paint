struct Shapes
{
    int x;
    int y;
    char name[100];
    int size;
    char ch;
    char col;
    int fill;
    int type;
    char shape;
    char side;
    int width;
    int height;
};
void Interface();
void free_draw_instruction(int x, int y, int headinglength, int width, int hieght, int middle);
void printStarLine(int length, int x, int y);
void printHeading(int x, int y, char string[]);
void Options();
void MainPage(int x, int y, int headinglength, int width, int hieght, int middle);
void ShapeMenu(int x, int y, int headinglength, int width, int hieght, int middle, char ch);
void free_draw_instruction(int x, int y, int headinglength, int width, int hieght, int middle);
void printspaces(int size);
void free_drawing(int x, int y, int headinglength, int width, int hieght, int middle);
void printline();
void printsquare();
void printtriangle();
void printtextbox();
void printtrapezium();
void printparralelogram();
void printdiamond();
void printcircle();
void printheart();
void printpentagon();
void printhexagon();
void printstar();
void printkite();
void printalphabets();
void printnumbers();
void savefilemenu();
void set_pos(int *x, int *y);
void Heading(int x, int y, int headinglength, int width, int hieght, int middle, char string[]);
void viewfile();
void edit_file();
void print_struct(struct Shapes *ptr);