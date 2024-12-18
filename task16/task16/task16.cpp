#include <iostream>

using namespace std;

void printDiamond(char symbol, int height, int width) {
    for (int i = 0; i < height / 2 + 1; i++) {
        for (int j = 0; j < (width / 2 - i); j++) {
            cout << " ";
        }
        for (int j = 0; j < (2 * i + 1); j++) {
            if (j == 0 || j == (2 * i)) {
                cout << symbol;
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = height / 2 - 1; i >= 0; i--) {
        for (int j = 0; j < (width / 2 - i); j++) {
            cout << " ";
        }
        for (int j = 0; j < (2 * i + 1); j++) {
            if (j == 0 || j == (2 * i)) {
                cout << symbol;
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int choice;
    cout << "Введите 1 для печати ромба '*' " << endl;
    cout << "Введите 2 для печати ромба '+' " << endl;
    cout << "Введите 3 для печати ромба '#' " << endl;
    cout << "Пожалуйста, введите число 1 - 3: ";
    cin >> choice;

    char symbol;
    switch (choice) {
    case 1:
        symbol = '*';
        break;
    case 2:
        symbol = '+';
        break;
    case 3:
        symbol = '#';
        break;
    default:
        cout << "Неверный выбор!" << endl;
        return 1;
    }

    int height, width;
    cout << "Введите высоту ромба (положительное нечетное число): ";
    cin >> height;
    cout << "Введите ширину ромба (положительное нечетное число): ";
    cin >> width;
    if (height <= 0 || width <= 0 || height % 2 == 0 || width % 2 == 0) {
        cout << "Ошибка: нужно вводить положительные нечетные числа!" << endl;
        return 1;
    }

    printDiamond(symbol, height, width);

    return 0;
}

