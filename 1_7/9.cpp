// Выведите значение наименьшего нечетного элемента списка, а если в списке нет
// нечетных элементов - выведите число 0.

// Формат входных данных

// В первой строке вводится количество элементов в массиве. Во второй строке
// вводятся элементы массива. Формат выходных данных Выведите ответ на задачу.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    // ___________________
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // ___________________
    int output = 0;
    int temp;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            temp = a[i];
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            if (a[i] <= temp) {
                temp = a[i];
                output = temp;
            }
        }
    }
    cout << output << endl;
    system("pause");
    return 0;
}