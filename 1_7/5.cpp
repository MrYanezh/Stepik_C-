// Найдите количество положительных элементов в данном массиве.
// Формат входных данных

// В первой строке вводится количество элементов в массиве. Во второй строке
// вводятся элементы массива. Формат выходных данных Выведите ответ на задачу.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}