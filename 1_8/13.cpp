// По данным числам n и m заполните двумерный массив размером n×m числами от 1
// до n×m “диагоналями”, как показано в примере. Формат входных данных Вводятся
// два числа n и m, не превышающие 100.

// Формат выходных данных
// Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.

#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    int n = 0;
    int m = 0;
    int array[100][100];
    cin >> n >> m;
    int out = 1;
    for (int d = 0; d < n + m - 1; d++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (d == i + j) {
                    array[i][j] = out;
                    out++;
                }
            }
        }
    }
    // Вывод
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << setw(4) << array[i][j];
            if (j == m - 1) {
                cout << endl;
            }
        }
    }
    system("pause");
    return 0;
}