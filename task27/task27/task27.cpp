#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int number;
    cout << "\t\t\tТаблица умножения введенного числа" << endl;
    cout << "\t\t\t----------------------------------" << endl;
    cout << endl;
    cout << "Введите число: ";
    cin >> number;
    for (int i = 1; i <= 10; i++) {
        cout << i << " * " << number << " = " << i * number << endl;
    }

    return 0;
}
