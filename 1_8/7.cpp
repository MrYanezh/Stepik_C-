// Дано число n, не превосходящее 10, и массив размером n × n. Проверьте,
// является ли этот массив симметричным относительно главной диагонали. Выведите
// слово “YES”, если массив симметричный, и слово “NO” в противном случае.

#include <iostream>
using namespace std;
int main() {
    int n = 0;
    cin >> n;
    int field[n][n];
    // Считывание массива
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> field[i][j];
        }
    }
    // Если элемент[i][j] == элемент [j][i], то всё ок
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (field[i][j] != field[j][i]) {
                count++;
            }
        }
    }
    // Если счётчик всё еще равен 0, то всё ок
    if (count == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    system("pause");
    return 0;
}