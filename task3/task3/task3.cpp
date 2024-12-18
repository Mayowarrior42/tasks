#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int number;


    cout << "Введите число не большее 99: ";
    cin >> number;
    if (number < 10 || number > 99) {
        cout << "Ошибка: введите двухзначное натуральное число." << endl;
        return 1; 
    }
    int tens = number / 10; 
    int units = number % 10; 

    int min_digit = (tens < units) ? tens : units;
    int max_digit = (tens > units) ? tens : units;
    cout << max_digit << " - большая цифра" << endl;
    cout << min_digit << " - меньшая цифра" << endl;

    return 0;
}