#include "board.h"

void ChessField(char pole[][9])
{
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << setw(2) << pole[i][j];
        }
        cout << endl;
    }
}
