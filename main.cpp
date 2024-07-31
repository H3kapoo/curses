#include <iostream>
#include <ncurses.h>
#include <string.h>

int main()
{
    initscr();
    raw();
    keypad(stdscr, true);
    noecho();

    const char* msg = "Ceva mesaj centrat\0";

    int32_t col, row;
    getmaxyx(stdscr, row, col);

    mvprintw(row / 2, (col - strlen(msg)) / 2, "%s", msg);
    mvprintw(row - 2, 0, "Has %d rows and %d cols", row, col);
    refresh();
    getch();

    endwin();
    std::cout << "ceva\n";
    std::cout << __cplusplus << "\n";

    return 0;
}