#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int number;
    cout << "Введите трехзначное число: ";
    cin >> number;
    if (number < 100 || number > 999) {
        cout << "Ошибка: число должно быть трехзначным." << endl;
        return 1;
    }
    int digit1 = number / 100;       
    int digit2 = (number / 10) % 10;   
    int digit3 = number % 10;         
    if (digit1 == digit2 || digit1 == digit3 || digit2 == digit3) {
        cout << "Есть одинаковые цифры." << endl;
    }
    else {
        cout << "Все цифры разные." << endl;
    }

    return 0;
}

