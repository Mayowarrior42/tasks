#include <iostream>
#include <cmath> 
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double x, y;
    cout << "Введите значение x: ";
    cin >> x;
    cout << "Введите значение y: ";
    cin >> y;

    double x_rad = x * 3.14 / 180.0; 
    double y_rad = y * 3.14 / 180.0;
    double tan_x = tan(x_rad);
    double cot_x = 1.0 / tan_x; 
    double result = pow(1 - tan_x, cot_x) + cos(x_rad - y_rad);
    cout << "Ответ = " << fixed << setprecision(2) << result << endl;

    return 0;
}

