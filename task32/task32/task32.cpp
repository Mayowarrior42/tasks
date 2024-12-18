#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int numTriangles;
    cout << "Enter number of triangles (1 to 6): ";
    cin >> numTriangles;
    if (numTriangles < 1 || numTriangles > 6) {
        cout << "Please enter a number between 1 and 6." << endl;
        return 1;
    }

    int height = numTriangles;
    for (int i = 1; i <= height; ++i) {
        for (int j = 0; j < numTriangles; ++j) {
            cout << setw(height - i + 1);
            for (int k = 0; k < (2 * i - 1); ++k) {
                cout << '*';
            }
            if (j < numTriangles - 1) {
                cout << "   "; 
            }
        }
        cout << endl; 
    }

    return 0;
}