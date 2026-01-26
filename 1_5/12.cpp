// Последовательность Фибоначчи определяется так:

// F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).

// По данному числу N определите N-е число Фибоначчи F(N).

// Формат входных данных
// Вводится натуральное число N.
// Формат выходных данных
// Выведите ответ на задачу.

#include <iostream>
using namespace std;
int main() {
    int n = 0;
    cin >> n;
    int i = 0;
    int f_n0 = 0;
    int f_n1 = 1;
    int f_n = 0;
    while (i < n) {
        f_n = f_n0 + f_n1;
        f_n0 = f_n1;
        f_n1 = f_n;
        i++;
    }
    cout << f_n0 << endl;
    system("pause");
    return 0;
}