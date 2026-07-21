// Дан прямоугольный массив размером n×m. Поверните его на 90 градусов по
// часовой стрелке, записав результат в новый массив размером m×n.

// Формат входных данных
// Вводятся два числа n и m, не превосходящие 100, затем массив размером n×m.
// Формат выходных данных
// Выведите получившийся массив. Числа при выводе разделяйте одним пробелом.

#include <iostream>
using namespace std;
int main() {
    int n = 0;
    int m = 0;
    cin >> n >> m;
    int arr[n][m];
    // считывание массива arr
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    int arr_vivod[m][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr_vivod[j][n - 1 - i] = arr[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr_vivod[i][j];
            if (j == n - 1) {
                cout << endl;

            } else {
                cout << " ";
            }
        }
    }
    system("pause");
    return 0;
}