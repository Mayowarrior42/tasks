#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int number;
    cout << "Введите пятизначное число: ";
    cin >> number;
    if (number < 10000 || number > 99999) {
        cout << "Ошибка: Введите пятизначное число!" << endl;
        return 1; 
    }
    int firstDigit = number / 10000;         
    int secondDigit = (number / 1000) % 10;   
    int fourthDigit = (number / 10) % 10;     
    int fifthDigit = number % 10;            
    if (firstDigit == fifthDigit && secondDigit == fourthDigit) {
        cout << "Это число палиндром." << endl;
    }
    else {
        cout << "Это число не палиндром." << endl;
    }

    return 0;
}