#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int limit;
    int sum = 0;
    int current = 0;

    cout << "Введите последнее число последовательности: ";
    cin >> limit;
    if (limit < 0) {
        cout << "Пожалуйста, введите неотрицательное число." << endl;
        return 1;
    }
    while (current <= limit) {
        if (current % 5 == 0) {
            sum += current;
        }
        current++;
    }
    cout << "Сумма чисел, делящихся на 5 из последовательности [0, " << limit << "] равна " << sum << endl;

    return 0;
}