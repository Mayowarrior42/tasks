#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    string line;
    int lineCount = 0;

    cout << "Введите текст (окончите ввод символом '#'): " << endl;
    while (true) {
        getline(cin, line);
        if (line.find('#') != string::npos) {
            line = line.substr(0, line.find('#'));
            if (!line.empty()) {
                lineCount++;
            }
            break; 
        }
        lineCount++;
    }
    cout << "Количество строк в тексте: " << lineCount << endl;

    return 0;
}

