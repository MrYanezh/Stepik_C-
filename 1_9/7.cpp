// Даны пять действительных чисел: x, y, xc, yc, r. Проверьте, принадлежит ли
// точка (x, y) кругу с центром (xc, yc) и радиусом r. Если точка принадлежит
// кругу, выведите слово YES, иначе выведите слово NO. Решение должно содержать
// функцию IsPointInCircle(x, y, xc, yc, r), возвращающую True, если точка
// принадлежит кругу и False, если не принадлежит. Основная программа должна
// считать координаты точки, вызвать функцию IsPointInCircle и в зависимости от
// возвращенного значения вывести на экран необходимое сообщение. Функция
// IsPointInCircle не должна содержать инструкцию if. Формат входных данных
// Вводятся пять действительных чисел.
// Формат выходных данных
// Выведите ответ на задачу.

#include <iostream>
using namespace std;

bool IsPointInCircle(double x, double y, double xc, double yc, double r) {
    return ((x - xc) * (x - xc) + (y - yc) * (y - yc)) <= r * r;
    //(((x >= xc - r) && (x <= xc + r)) &&
    //((y >= yc - r) && (y <= yc + r)));
}

int main() {
    double a = 0;
    double b = 0;
    double ac = 0;
    double bc = 0;
    double radius = 0;
    cin >> a >> b >> ac >> bc >> radius;
    if (IsPointInCircle(a, b, ac, bc, radius)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    system("pause");
    return 0;
}