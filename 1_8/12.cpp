// По данным числам n и m заполните двумерный массив размером n×m числами от 1
// до n×m “змейкой”, как показано в примере.

// Формат входных данных
// Вводятся два числа n и m, каждое из которых не превышает 30.
// Формат выходных данных
// Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.

#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    int n = 0;
    int m = 0;
    int array[30][30];
    cin >> n >> m;
    int out = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            out = i * m + 1;
        } else {
            out = (i + 1) * m;
        }
        for (int j = 0; j < m; j++) {
            array[i][j] = out;
            if (i % 2 == 0) {
                out++;
            } else {
                out--;
            }
        }
    }
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