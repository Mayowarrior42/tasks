#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "\t\t\tТаблица квадратов чисел" << endl;
    cout << "\t\t\t----------------------" << endl;
    cout << endl;
    cout << "Число\t\tКвадрат числа" << endl;
    cout << "------\t\t-------------" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << "\t\t" << i * i << endl;
    }
    return 0;
}
