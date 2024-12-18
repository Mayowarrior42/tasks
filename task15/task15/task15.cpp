#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double holeLength, holeHeight;
    cout << "Введите размеры отверстия (длина и высота): ";
    cin >> holeLength >> holeHeight;
    double brickLength, brickWidth, brickHeight;
    cout << "Введите размеры кирпича (длина, ширина и высота): ";
    cin >> brickLength >> brickWidth >> brickHeight;
    bool canPass = false;
    if ((brickLength <= holeLength && brickWidth <= holeHeight) ||
        (brickLength <= holeHeight && brickWidth <= holeLength) ||
        (brickLength <= holeLength && brickHeight <= holeHeight) ||
        (brickLength <= holeHeight && brickHeight <= holeLength) ||
        (brickWidth <= holeLength && brickHeight <= holeHeight) ||
        (brickWidth <= holeHeight && brickHeight <= holeLength)) {
        canPass = true;
    }
    if (canPass) {
        cout << "Кирпич пройдет через отверстие." << endl;
    }
    else {
        cout << "Кирпич не пройдет через отверстие." << endl;
    }

    return 0;
}
