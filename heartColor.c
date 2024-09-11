#include <ncurses.h>
int main()
{
    initscr();
    start_color();
    init_pair(1, color_red, color_black);
    int rows, cols;
    getmaxyx(stdscr, rows, cols);
    attron(color_pair(1));
    for(int i = rows / 2; i<=rows; i+=2)
    {
        for(int j=1; j<cols-i; j+=2)
        mvprintw(i, j, " ");
        for(int j=1; j<=i; j++)
        mvprintw(i,j+(cols-i)/2, "*");
        for(int j=1;j<=cols-i; j++)
        mvprintw(i, j+(cols+i)/2, " ");
        for(int j=1; j<=i; j++)
        mvprintw(i, j+(cols-i)/2, "*");
        for(int j=1;j<=cols-i; j++)
        mvprintw(i, j+(cols+i)/2, " ");
        for(int j=1; j<=i; j++)
        mvprintw(i, j+cols/2, "*");
    }
    attroff(color_pair(1));
    refresh();
    getch();
    endwin();
    return 0;
}