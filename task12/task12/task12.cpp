#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double x, y;

    cout << "Введите координату X: ";
    cin >> x;
    cout << "Введите координату Y: ";
    cin >> y;
    if (x == 0 || y == 0) {
        cout << "Координаты не должны быть равны нулю." << endl;
        return 1;
    }
    if (x > 0 && y > 0) {
        cout << "I четверть плоскости" << endl;
    }
    else if (x < 0 && y > 0) {
        cout << "II четверть плоскости" << endl;
    }
    else if (x < 0 && y < 0) {
        cout << "III четверть плоскости" << endl;
    }
    else if (x > 0 && y < 0) {
        cout << "IV четверть плоскости" << endl;
    }

    return 0;
}
