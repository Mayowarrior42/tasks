#include <iostream>
#include <iomanip> 
#include <limits>  

using namespace std;

class LCG {
private:
    long long a; 
    long long c; 
    long long m; 
    long long x;  

public:
   
    LCG(long long seed) : a(1664525), c(1013904223), m(4294967296), x(seed) {}

    double next() {
        x = (a * x + c) % m; 
        return static_cast<double>(x) / m; 
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    long long seed; 

    cout << "Введите начальное значение (семя): ";
    while (!(cin >> seed)) { 
        cout << "Ошибка ввода. Пожалуйста, введите целое число: ";
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    }

    LCG generator(seed); 

    const int n = 15; 
    cout << "Сгенерированные псевдослучайные числа: ";
    for (int i = 0; i < n; ++i) {
        cout << fixed << setprecision(6) << generator.next() << " "; 
    }
    cout << endl;

    return 0;
}

