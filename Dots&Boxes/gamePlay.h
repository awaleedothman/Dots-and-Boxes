#include <windows.h>
typedef struct{}Player;
void play(char*, int, int, int, int);
int movesLeft(int);
void fillWith4s(int*, int);
int checkBox(int*, int, int, int, char*, int);
void printBar(int, Player, Player, int, int);
void getInput(int*, int*);
void holdOn();
void gotoxy(int x, int y);
COORD GetConsoleCursorPosition(HANDLE hConsoleOutput);
void getxy(int* originalX, int* originalY);
