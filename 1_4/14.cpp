// Яша плавал в бассейне размером N×M метров и устал.
// В этот момент он обнаружил, что находится на расстоянии X метров от одного из
// длинных бортиков (не обязательно от ближайшего) и Y метров от одного из
// коротких бортиков. Какое минимальное расстояние должен проплыть Яша, чтобы
// выбраться из бассейна на бортик?

// Формат входных данных
// Программа получает на вход числа N, M, X, Y.
// Формат выходных данных
// Программа должна вывести число метров, которое нужно проплыть Яше до бортика.

#include <iostream>

using namespace std;

int main() {
    int n = 0;
    int m = 0;
    int x = 0;
    int y = 0;
    cin >> n >> m >> x >> y;
    int output = 0;
    int short_bort = 0;
    int long_bort = 0;
    if (n > m) {
        long_bort = n;
        short_bort = m;
    } else {
        short_bort = n;
        long_bort = m;
    }
    output = y;
    if (x < output) {
        output = x;
    }
    if ((short_bort - x) < output) {
        output = short_bort - x;
    }
    if ((long_bort - y) < output) {
        output = long_bort - y;
    }
    cout << output << endl;
    system("pause");
    return 0;
}
