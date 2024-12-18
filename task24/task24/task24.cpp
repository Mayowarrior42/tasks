#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    double sum = 0.0;
    cout << "Введите n: ";
    cin >> n;

    double cumulativeSin = 0.0;
    for (int i = 1; i <= n; i++) {
        cumulativeSin += sin(i); 
        sum += 1.0 / cumulativeSin; 
    }
    cout << "Сумма = " << sum << endl;

    return 0;
}