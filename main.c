#include<stdio.h>
#include<ncurses.h>
int main()
{
    initscr();
    raw();
    noecho();
    printw("[uksh]$>>");
    int ch = getch();
    refresh();
    endwin();
    return 0;
}
