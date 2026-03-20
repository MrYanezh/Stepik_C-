// Выведите значение наименьшего из всех положительных элементов в массиве.
// Известно, что в массиве есть хотя бы один положительный элемент. Формат
// входных данных

// В первой строке вводится количество элементов в массиве. Во второй строке
// вводятся элементы массива. Формат выходных данных Выведите ответ на задачу.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    vector<int> a(n);
    // read
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int output;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            output = a[i];
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            if (a[i] < output) {
                output = a[i];
            }
        }
    }
    cout << output << endl;
    system("pause");
    return 0;
}