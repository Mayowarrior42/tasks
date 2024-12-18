#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double V; 
    double T; 
    const double g = 9.81; 
    cout << "Введите начальную скорость V (м/с): ";
    cin >> V;
    cout << "Введите время полета T (с): ";
    cin >> T;
    double alpha = asin((g * T) / (2 * V)); 
    double alpha_degrees = alpha * (180.0 / 3.14); 
    cout << "Угол = " << alpha_degrees << endl;

    return 0;
}

