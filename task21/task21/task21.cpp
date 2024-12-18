#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    string questions[] = {
        "How many cat lives?",
        "How many centimeters in a meter?",
        "The speed of sound?"
    };

    string answers[][4] = {
        {"5 lives", "7 lives", "9 lives", ""},
        {"10 centimeters", "100 centimeters", "1000 centimeters", ""},
        {"340 m/s", "320 m/s", "240 m/s", ""}
    };

    int correctAnswers[] = { 2, 1, 0 }; 
    int score = 0; 
    for (int i = 0; i < 3; i++) {
        cout << (i + 1) << ") " << questions[i] << endl;
        cout << "answers:" << endl;
        for (int j = 0; j < 3; j++) {
            cout << "-> " << answers[i][j] << endl;
        }
        cout << "your answer (0, 1, or 2): ";
        int userAnswer;
        cin >> userAnswer;
        if (userAnswer == correctAnswers[i]) {
            cout << "Correct!" << endl;
            score++;
        }
        else {
            cout << "Wrong! The correct answer is: " << answers[i][correctAnswers[i]] << endl;
        }
        cout << endl; 
    }
    cout << "Rating = " << score << " ball(s)" << endl;

    return 0;
}

