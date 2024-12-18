#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double number; 
    int power;     
    double result = 1; 
    cout << "Введите число: ";
    cin >> number;
    cout << "Введите степень: ";
    cin >> power;

    for (int i = 0; i < power; i++) {
        result *= number; 
    }
    cout << "number = " << result << endl;
    return 0;
}

