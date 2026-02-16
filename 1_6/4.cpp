// Дано положительное действительное число X. Выведите его первую цифру после
// десятичной точки. Формат входных данных Вводится положительное действительное
// число. Формат выходных данных Выведите ответ на задачу.
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    double n = 0.0;
    cin >> n;
    double output = 0.0;
    output = n - floor(n);
    output = output * 10;
    cout << floor(output) << endl;
    system("pause");
    return 0;
}