#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int upperLimit;
    int sum = 0; // Переменная для хранения суммы
    int currentNumber = 0; // Переменная для текущего числа

    // Ввод верхней границы интервала
    cout << "Введите правую границу интервала чисел: ";
    cin >> upperLimit;

    // Цикл while для перебора чисел от 0 до upperLimit
    while (currentNumber <= upperLimit) {
        // Проверка, делится ли текущее число на 5
        if (currentNumber % 5 == 0) {
            sum += currentNumber; // Добавление к сумме
        }
        currentNumber++; // Переход к следующему числу
    }

    // Вывод результата
    cout << "Сумма чисел нацело делящихся на 5 = " << sum << endl;

    return 0;
}