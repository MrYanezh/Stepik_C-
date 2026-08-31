// Дано натуральное число n > 1. Выведите его наименьший делитель, отличный
// от 1. Решение оформите в виде функции MinDivisor(n). Количество операций в
// программе должно быть пропорционально корню из n. Указание. Если у числа n
// нет делителя, меньшего n , то число n — простое и ответом будет само число n.
// Формат входных данных
// Вводится натуральное число.
// Формат выходных данных
// Выведите ответ на задачу.

#include <cmath>
#include <iostream>
using namespace std;

int MinDivisor(int n) {
    if (n % 2 == 0) {
        return 2;
    } else {
        int limin = sqrt(n);
        // cout << limin << " ";
        for (int i = 3; i <= limin; i += 2) {
            if (n % i == 0) {
                return i;
            }
        }
        return n;
    }
}

int main() {
    int n = 0;
    cin >> n;
    cout << MinDivisor(n) << endl;
    system("pause");
    return 0;
}