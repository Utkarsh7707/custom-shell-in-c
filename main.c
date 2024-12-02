#include<stdio.h>
#include<ncurses.h>
int main()
{
    initscr();
    raw();
    noecho();
    printw("Hello world !");
    refresh();
    getch();
    endwin();
    return 0;
}