#include <iostream>
#include <cstdlib>
#include <ctime>  

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int size;
    cout << "Введите количество строк и столбцов матрицы (квадратная матрица): ";
    cin >> size;
    int** matrix = new int* [size];
    for (int i = 0; i < size; i++) {
        matrix[i] = new int[size];
    }
    srand(static_cast<unsigned int>(time(0)));
    cout << "Сгенерированная матрица:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = rand() % 100; 
            cout << matrix[i][j] << "\t"; 
        }
        cout << endl; 
    }
    int trace = 0;
    for (int i = 0; i < size; i++) {
        trace += matrix[i][i]; 
    }
    cout << "След матрицы: " << trace << endl;
    for (int i = 0; i < size; i++) {
        delete[] matrix[i];
    }
    delete[] matrix; 
    return 0;
}