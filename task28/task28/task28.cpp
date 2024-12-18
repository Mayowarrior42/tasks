#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double a, b, c; 
    double d, k;   

    cout << "y = ax^2 + bx + c - первое уравнение. Введите коэффициенты a, b, c" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    cout << "y = dx + k - второе уравнение. Введите коэффициенты d, k" << endl;
    cout << "d = ";
    cin >> d;
    cout << "k = ";
    cin >> k;

    double A = a;
    double B = b - d;
    double C = c - k;
    double discriminant = B * B - 4 * A * C;

    if (discriminant > 0) {
        double x1 = (-B + sqrt(discriminant)) / (2 * A);
        double x2 = (-B - sqrt(discriminant)) / (2 * A);
        double y1 = a * x1 * x1 + b * x1 + c;
        double y2 = a * x2 * x2 + b * x2 + c;

        cout << "Точки пересечения двух данных линий: [" << x1 << ", " << y1 << "] и [" << x2 << ", " << y2 << "]" << endl;
    }
    else if (discriminant == 0) {
        double x = -B / (2 * A);
        double y = a * x * x + b * x + c;

        cout << "Точка пересечения двух данных линий: [" << x << ", " << y << "]" << endl;
    }
    else {
        cout << "Линии не пересекаются." << endl;
    }

    return 0;
}
