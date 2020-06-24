#include "board.h"

void Move(char pole[][9])
{
    int i1 = 9, i2 = 9, j1 = 0, j2 = 0;
    string step;
    cout << endl << "Ведите свой ход: ";
    getline(cin, step);
    if (step == "exit") {
        cout << "Выход из программы";
        exit(0);
    }
    if (step.length() != 5) {
        cout << "\n Ошибка: неправильный ввод \n \n";
        return;
    }
    switch (step[0]) {
    case 'a':
        j1 = 1;
        break;
    case 'b':
        j1 = 2;
        break;
    case 'c':
        j1 = 3;
        break;
    case 'd':
        j1 = 4;
        break;
    case 'e':
        j1 = 5;
        break;
    case 'f':
        j1 = 6;
        break;
    case 'g':
        j1 = 7;
        break;
    case 'h':
        j1 = 8;
        break;
    default:
        cout << "\n Ошибка: неправильный ввод \n \n";
        return;
    }
    switch (step[1]) {
    case '1':
        i1 = 7;
        break;
    case '2':
        i1 = 6;
        break;
    case '3':
        i1 = 5;
        break;
    case '4':
        i1 = 4;
        break;
    case '5':
        i1 = 3;
        break;
    case '6':
        i1 = 2;
        break;
    case '7':
        i1 = 1;
        break;
    case '8':
        i1 = 0;
        break;
    default:
        cout << "\n Ошибка: неправильный ввод \n \n";
        return;
    }
    if (step[2] != '-') {
        cout << "\n Ошибка: неправильный ввод \n \n";
        return;
    }
    switch (step[3]) {
    case 'a':
        j2 = 1;
        break;
    case 'b':
        j2 = 2;
        break;
    case 'c':
        j2 = 3;
        break;
    case 'd':
        j2 = 4;
        break;
    case 'e':
        j2 = 5;
        break;
    case 'f':
        j2 = 6;
        break;
    case 'g':
        j2 = 7;
        break;
    case 'h':
        j2 = 8;
        break;
    default:
        cout << "\n Ошибка: неправильный ввод \n \n";
        return;
    }
    switch (step[4]) {
    case '1':
        i2 = 7;
        break;
    case '2':
        i2 = 6;
        break;
    case '3':
        i2 = 5;
        break;
    case '4':
        i2 = 4;
        break;
    case '5':
        i2 = 3;
        break;
    case '6':
        i2 = 2;
        break;
    case '7':
        i2 = 1;
        break;
    case '8':
        i2 = 0;
        break;
    default:
        cout << "\n Ошибка: неправильный ввод \n \n";
        return;
    }
    cout << j1;
    cout << i1;
    cout << j2;
    cout << i2;

    pole[i2][j2] = pole[i1][j1];
    pole[i1][j1] = ' ';
    cout << endl;
    cout << endl;
}