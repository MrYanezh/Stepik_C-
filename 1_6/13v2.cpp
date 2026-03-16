// Даны вещественные числа a, b, c, d, e, f. Известно, что система линейных
// уравнений

// имеет ровно одно решение. Выведите два числа x и y, являющиеся решением этой
// системы.

// Формат входных данных

// Вводятся шесть чисел - коэффициенты уравнений системы.
// Формат выходных данных
// Выведите ответ на задачу.
// метод Крамера
// delta = a*d-b*c
// delta_x = e*d-f*b
// delta_y = a*f-c*e

#include <iostream>
using namespace std;
int main() {
    double a, b, c, d, e, f = 0.0;
    cin >> a >> b >> c >> d >> e >> f;
    double delta, delta_x, delta_y, x, y = 0.0;
    delta = a * d - b * c;
    delta_x = e * d - f * b;
    delta_y = a * f - c * e;
    x = delta_x / delta;
    y = delta_y / delta;
    cout << x << " " << y << endl;
    system("pause");
    return 0;
}