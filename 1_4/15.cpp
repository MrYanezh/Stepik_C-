// Дано три числа. Упорядочите их в порядке неубывания.

// Формат входных данных
// Вводятся три числа.
// Формат выходных данных
// Выведите ответ на задачу.

#include <iostream>

using namespace std;

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    cin >> a >> b >> c;
    int otvet_ml = 0;
    int otvet_sr = 0;
    int otvet_st = 0;
    if ((a <= b) and (a <= c)) {
        otvet_ml = a;
        if (b <= c) {
            otvet_sr = b;
            otvet_st = c;
        } else {
            otvet_sr = c;
            otvet_st = b;
        }
    } else if ((b <= a) and (b <= c)) {
        otvet_ml = b;
        if (a <= c) {
            otvet_sr = a;
            otvet_st = c;
        } else {
            otvet_sr = c;
            otvet_st = a;
        }
    } else {
        otvet_ml = c;
        if (a <= b) {
            otvet_sr = a;
            otvet_st = b;

        } else {
            otvet_sr = b;
            otvet_st = a;
        }
    }

    cout << otvet_ml << " " << otvet_sr << " " << otvet_st << endl;
    system("pause");
    return 0;
}