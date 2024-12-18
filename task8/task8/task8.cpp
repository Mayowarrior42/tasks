#include <iostream>
#include <cmath> 
#include <iomanip> 

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double x = -1.1; 
    double x_end = 0.3; 
    double step_x = 0.2;
    while (x <= x_end + 1e-9) { 
        for (int m = 1; m <= 5; m++) { 
            double x_pow_m = 1.0; 
            double sin_value; 
            int i = 0;
            while (i < m) {
                x_pow_m *= x; 
                i++;
            }
            sin_value = sin(m * x_pow_m);
            double z_value = x_pow_m * sin_value;
            cout << fixed << setprecision(6);
            cout << "Значение функции = " << z_value << " При m = " << m << endl;
        }
        cout << "Вычислено при x = " << x << endl;
        x += step_x;
    }

    return 0;
}

