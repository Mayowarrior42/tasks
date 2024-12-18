#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int digit;

    do {
        cout << "Введите цифру (введите 1 для выхода): ";
        cin >> digit;
        if (digit < 0 || digit > 9) {
            cout << "Пожалуйста, введите цифру от 0 до 9." << endl;
        }
    } while (digit != 1);

    cout << "Вы вышли из программы." << endl;
    return 0;
}
