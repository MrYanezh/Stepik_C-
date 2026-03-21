// Дан список, упорядоченный по неубыванию элементов в нем. Определите, сколько
// в нем различных элементов. Формат входных данных

// В первой строке вводится количество элементов в массиве. Во второй строке
// вводятся элементы массива. Формат выходных данных Выведите ответ на задачу.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    vector<int> a(n);
    //______________
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    //______________
    int count = 1;
    int temp = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] != temp) {
            count++;
            temp = a[i];
        }
    }
    cout << count << endl;
    system("pause");
    return 0;
}