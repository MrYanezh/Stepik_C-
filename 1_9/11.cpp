// Дано натуральное число n > 1. Проверьте, является ли оно простым. Программа
// должна вывести слово YES, если число простое и NO, если число составное.
// Решение оформите в виде функции IsPrime(n), которая возвращает True для
// простых чисел и False для составных чисел. Количество операций в программе
// должно быть пропорционально корню из n. Формат входных данных Вводится
// натуральное число. Формат выходных данных Выведите ответ на задачу.

#include <cmath>
#include <iostream>
using namespace std;

bool IsPrime(int n) {
    if (n == 2) {
        return true;
    } else {
        int limin = sqrt(n);
        // cout << limin << " ";
        for (int i = 2; i <= limin; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
}

int main() {
    int n = 0;
    cin >> n;
    if (IsPrime(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    system("pause");
    return 0;
}