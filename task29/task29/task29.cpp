#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool isInteger(const string& str) {
    stringstream ss(str);
    int num;
    char remaining;
    ss >> num;
    if (ss.fail() || ss.peek() != EOF) {
        return false; 
    }
    return true;
}

int main() {
    setlocale(LC_ALL, "Russian");
    string input;
    cout << "Введите число и нажмите Enter: ";
    getline(cin, input);
    if (isInteger(input)) {
        cout << "Введенное значение является целым числом." << endl;
    }
    else {
        cout << "Введенная строка не является целым числом." << endl;
    }

    return 0;
}