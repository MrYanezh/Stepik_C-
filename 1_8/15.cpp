// По данным числам n и m заполните двумерный массив размером n×m числами от 1
// до n×m по спирали, выходящей из левого верхнего угла и закрученной по часовой
// стрелке, как показано в примере. Формат входных данных Вводятся два числа n и
// m, не превышающие 100.

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
    int left = 0;
    int right = m - 1;
    int up = 0;
    int down = n - 1;

    while (left <= right && up <= down) {
        for (int j = left; j <= right; j++) {
            array[up][j] = out;
            out++;
        }
        up++;
        for (int i = up; i <= down; i++) {
            array[i][right] = out;
            out++;
        }
        right--;
        if (up <= down) {
            for (int j = right; j >= left; j--) {
                array[down][j] = out;
                out++;
            }
            down--;
        }
        if (left <= right) {
            for (int i = down; i >= up; i--) {
                array[i][left] = out;
                out++;
            }
            left++;
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