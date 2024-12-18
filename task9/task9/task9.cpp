#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int length; 
    cout << "Введите длину массива: ";
    cin >> length;
    if (length <= 0) {
        cout << "Длина массива должна быть положительным числом." << endl;
        return 1; 
    }

    double* arr = new double[length]; 
 
    cout << "Введите " << length << " чисел: ";
    for (int i = 0; i < length; i++) {
        cin >> arr[i];
    }

    double sum = 0.0; 
    for (int i = 0; i < length; i++) {
        if (fabs(arr[i]) > 2.5) { 
            sum += arr[i] * arr[i]; 
        }
    }

    cout << "Сумма = " << sum << endl;

    delete[] arr;
    return 0;
}
