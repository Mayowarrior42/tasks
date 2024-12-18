#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int decimalNumber;
    cout << "Введите десятичное число: ";
    cin >> decimalNumber;
    cout << "Шестнадцатеричное представление: " << hex << decimalNumber << endl;

    return 0;
}
