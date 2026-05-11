// Дан двумерный массив и два числа: i и j. Поменяйте в массиве столбцы с
// номерами i и j Формат входных данных Программа получает на вход размеры
// массива n и m, не превосходящие 100, затем элементы массива, затем числа i и
// j. Формат выходных данных Выведите результат.

#include <iostream>
using namespace std;
int main() {
    int n = 0;
    int m = 0;
    cin >> n >> m;
    int field[n][m];
    // Считывание массива
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> field[i][j];
        }
    }
    // Ввод номеров столбцов для замены
    int first_col = 0;
    int second_col = 0;
    cin >> first_col >> second_col;
    // Сделаем новый массив после замены данных
    int field_vivod[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            field_vivod[i][j] = field[i][j];
            if (j == first_col) {
                field_vivod[i][j] = field[i][second_col];
            }
            if (j == second_col) {
                field_vivod[i][j] = field[i][first_col];
            }
        }
    }
    // Вывод
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << field_vivod[i][j];
            if (j == m - 1) {
                cout << endl;
            } else {
                cout << " ";
            }
        }
    }
    system("pause");
    return 0;
}