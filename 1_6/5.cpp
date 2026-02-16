// Даны длины сторон треугольника. Вычислите площадь треугольника.
// Формат входных данных
// Вводятся три положительных числа.
// Формат выходных данных
// Выведите ответ на задачу.
#include <cmath>
#include <iostream>
using namespace std;
int main() {
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    cin >> a >> b >> c;
    double p = 0.0;
    double p2 = 0.0;
    p = a + b + c;
    p2 = p / 2;
    double s = 0.0;
    s = sqrt(p2 * (p2 - a) * (p2 - b) * (p2 - c));
    cout << s << endl;
    system("pause");
    return 0;
}