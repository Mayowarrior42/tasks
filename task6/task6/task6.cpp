﻿#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int day; 
    cout << "Введите номер дня недели (1 - понедельник, 7 - воскресенье): ";
    cin >> day;

    switch (day) {
    case 1:
        cout << "Понедельник" << endl;
        break;
    case 2:
        cout << "Вторник" << endl;
        break;
    case 3:
        cout << "Среда" << endl;
        break;
    case 4:
        cout << "Четверг" << endl;
        break;
    case 5:
        cout << "Пятница" << endl;
        break;
    case 6:
        cout << "Суббота" << endl;
        break;
    case 7:
        cout << "Воскресенье" << endl;
        break;
    default:
        cout << "Некорректный номер дня. Пожалуйста, введите число от 1 до 7." << endl;
        break;
    }

    return 0;
}
