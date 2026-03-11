// Определите среднее значение всех элементов последовательности, завершающейся
// числом 0.

// Формат входных данных

// Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число
// 0 в последовательность не входит, а служит как признак ее окончания). Формат
// выходных данных Выведите ответ на задачу.

#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    int i = 0;
    int element = 0;
    double summa = 0;
    double output = 0;
    cin >> element;
    while (element != 0) {
        i += 1;
        summa = summa + element;
        output = (double)summa / i;
        cin >> element;
    }
    cout << setprecision(11) << fixed;
    cout << output << endl;
    system("pause");
}