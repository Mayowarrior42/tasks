#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double x, y, z;
    cout << "Введите X: ";
    cin >> x;
    cout << "Введите Y: ";
    cin >> y;
    cout << "Введите Z: ";
    cin >> z;
    cout << "Вы ввели следующие числа: X = " << x << "; Y = " << y << "; Z = " << z << endl;
    double length = sqrt(x * x + y * y + z * z);
    cout << "Длина вектора: " << length << endl;

    return 0;
}

