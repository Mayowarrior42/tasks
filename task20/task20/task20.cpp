#include <iostream>
#include <cmath> 

using namespace std;

double cotangent(double x) {
    return cos(x) / sin(x); 
}

int main() {
    setlocale(LC_ALL, "Russian");
    double a, b, h;

    cout << "Введите начальное значение a: ";
    cin >> a;
    cout << "Введите конечное значение b: ";
    cin >> b;
    cout << "Введите шаг h: ";
    cin >> h;
    if (h <= 0) {
        cout << "Ошибка: Шаг должен быть положительным!" << endl;
        return 1; 
    }
    cout << "Таблица значений котангенса:" << endl;
    cout << "x\t\tcot(x)" << endl;
    for (double x = a; x <= b; x += h) {
        if (sin(x) == 0) {
            cout << x << "\t\tне определено" << endl;
        }
        else {
            cout << x << "\t\t" << cotangent(x) << endl;
        }
    }

    return 0;
}