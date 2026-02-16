// Дано положительное действительное число X. Выведите его дробную часть.

// Формат входных данных

// Вводятся положительное действительное число.

// Формат выходных данных
// Выведите ответ на задачу.
#include <cmath>
#include <iostream>
using namespace std;
int main() {
    double n = 0.0;
    cin >> n;
    cout << n - floor(n) << endl;
    system("pause");
    return 0;
}