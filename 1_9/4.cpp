// Даны четыре действительных числа: x1, y1, x2, y2. Напишите функцию
// distance(x1, y1, x2, y2), вычисляющую расстояние между точкой (x1. y1) и (x2,
// y2). Считайте четыре действительных числа и выведите результат работы этой
// функции.

// Формат входных данных
// Вводятся четыре действительных числа.
// Формат выходных данных
// Выведите ответ на задачу.

#include <cmath>
#include <iostream>
using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main() {
    double x1 = 0;
    double y1 = 0;
    double x2 = 0;
    double y2 = 0;
    cin >> x1 >> x2 >> y1 >> y2;
    cout << distance(x1, x2, y1, y2) << endl;
    system("pause");
    return 0;
}