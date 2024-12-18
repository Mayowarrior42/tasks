#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    string digits;
    cout << "Введите последовательность цифр: ";
    cin >> digits;
    int position;
    cout << "Введите порядковый номер цифры (начиная с 1): ";
    cin >> position;
    if (position < 1 || position > digits.length()) {
        cout << "Ошибка: Порядковый номер вне диапазона!" << endl;
    }
    else {
        cout << "Цифра на позиции " << position << ": " << digits[position - 1] << endl;
    }

    return 0;
}

