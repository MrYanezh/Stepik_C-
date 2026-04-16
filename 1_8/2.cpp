#include <iostream>
using namespace std;
int main() {
    int n = 0;
    cin >> n;
    int a[n][n];
    // Запись в матрицу
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                a[i][j] = 1;
            } else if (i < j) {
                a[i][j] = 0;
            } else {
                a[i][j] = 2;
            }
        }
    }
    // Вывод
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}