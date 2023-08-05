#include <stdio.h>

void square(int size, char ch,int fill);
void triangles(int type,int rows,int fill,char shape,char ch,char side);
void parralelogram(int width ,int hieght,int fill,char ch);
void trapezium( int base1,int base2,int fill,char ch);
void heart(int size,char ch);
void line(char ch, int size,FILE *fptr);
void circle(int size, int fill, char ch);
void diamond(int size,int fill,char ch);
void textbox(int width ,int hieght);
void pentagon( int size,char ch);
void hexagon(int size,char ch);
void star(int rows,int type,char ch);
void kite(int rows,char ch);
void nextline();