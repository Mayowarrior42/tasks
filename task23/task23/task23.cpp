#include <iostream>

using namespace std;
float calculateAverage(float* array, int size) {
    if (size <= 0) {
        return 0.0f;
    }
    float sum = 0.0f;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum / size;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int size;
    cout << "Введите размер массива: ";
    cin >> size;
    float* array = new float[size];
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Элемент " << i + 1 << ": ";
        cin >> array[i];
    }
    float average = calculateAverage(array, size);
    cout << "Среднее арифметическое: " << average << endl;
    delete[] array;

    return 0;
}