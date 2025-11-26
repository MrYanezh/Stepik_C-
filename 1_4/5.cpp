// Даны три целых числа.
// Найдите наибольшее из них (программа должна
// вывести ровно одно целое число).
// Под наибольшим в этой задаче понимается число,
// которое не меньше, чем любое другое.
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
    int output = 0;
    if (a <= b) {
        output = b;
    } else {
        output = a;
    }
    if (output <= c) {
        output = c;
    }
    cout << output << endl;
    system("pause");
    return 0;
}