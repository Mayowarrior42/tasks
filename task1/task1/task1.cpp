#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double calculateX(double Z, double B, double A, double Betta) {
    return pow(Z, 3) - B + pow(A, 2) / pow(tan(Betta), 2);
}

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите количество иксов: ";
    cin >> n;


    vector<double> X(n);

    for (int i = 0; i < n; ++i) {
        double Z, B, A, Betta;
        cout << "Введите значения Z, B, A, Betta для X" << i + 1 << ":\n";

        cout << "Z = ";
        cin >> Z;
        cout << "B = ";
        cin >> B;
        cout << "A = ";
        cin >> A;
        cout << "Betta = ";
        cin >> Betta;

        X[i] = calculateX(Z, B, A, Betta);
    }


    double Y = 0;
    for (int i = 0; i < n; ++i) {
        Y += X[i];
    }

    cout << "\ny = " << Y << endl;

    return 0;
}

