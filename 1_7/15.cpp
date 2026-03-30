// Известно, что на доске 8×8 можно расставить 8 ферзей так, чтобы они не били
// друг друга. Вам дана расстановка 8 ферзей на доске, определите, есть ли среди
// них пара бьющих друг друга. Формат входных данных

// Программа получает на вход восемь пар чисел, каждое число от 1 до 8 -
// координаты 8 ферзей. Формат выходных данных Если ферзи не бьют друг друга,
// выведите слово NO, иначе выведите YES.

#include <cmath>
#include <iostream>
#include <vector>

using namespace std;
int main() {
    int n = 8;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cin >> b[i];
    }
    //__________________
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j] || b[i] == b[j] ||
                abs(a[i] - a[j]) == abs(b[i] - b[j])) {
                count++;
            }
        }
    }
    if (count == 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
    system("pause");
    return 0;
}