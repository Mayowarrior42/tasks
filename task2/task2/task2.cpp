#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int N;
    int k;


    cout << "Введите N: ";
    cin >> N;
    cout << "Введите степень k: ";
    cin >> k;

    double sum = 0; 

 
    for (int i = 1; i <= N; ++i) {
        sum += pow(i, k); 
    }

  
    cout << "Сумма: " << sum << endl;

    return 0;
}

