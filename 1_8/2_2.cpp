#include <iostream>
using namespace std;
int main() {
    int n = 0;
    int m = 0;
    cin >> n >> m;
    int mines[102][102];
    for (int i = 0; i <= n + 1; i++) {
        for (int j = 0; j <= m + 1; j++) {
            mines[i][j] = 0;
        }
    }
    // Чтение
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mines[i][j];
        }
    }
    // Поиск мин
    int ans[102][102];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            // Координаты сдвига
            int dx[8] = {1, 1, 1, 0, 0, -1, -1, -1};
            int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
            // Перебор соседей
            int temp = 0;
            for (int k = 0; k < 8; k++) {
                temp += mines[i + dx[k]][j + dy[k]];
            }
            ans[i][j] = temp;
        }
    }
    // Вывод
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (mines[i][j] == 1) {
                cout << "*";
            } else {
                cout << ans[i][j];
            }
        }
        cout << endl;
    }
    system("pause");
    return 0;
}