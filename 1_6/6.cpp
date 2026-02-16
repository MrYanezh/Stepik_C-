// Процентная ставка по вкладу составляет P процентов годовых, которые
// прибавляются к сумме вклада в конце года. Вклад составляет X рублей Y копеек.
// Определите размер вклада через год.

// При решении этой задачи нельзя пользоваться условными инструкциями и циклами.

// Формат входных данных
// Программа получает на вход целые числа P, X, Y.
// Формат выходных данных
// Программа должна вывести два числа: величину вклада через год в рублях и
// копейках. Дробная часть копеек отбрасывается.

#include <cmath>
#include <iostream>
using namespace std;
int main() {
    double proc;
    int rub;
    int kop;
    cin >> proc >> rub >> kop;
    // proc = 1 + (proc / 100);
    int summa_do = 0;
    summa_do = 100 * rub + kop;  // v kopeikah
    cout << summa_do << endl;
    double interest = 0;
    interest = summa_do * (proc / 100.0);
    int summa_posle = 0;
    summa_posle = summa_do + static_cast<int>(interest);
    // summa_posle = trunc(summa_posle);
    cout << summa_posle << endl;
    // long long kop_2 = static_cast<long long>(summa_posle);
    cout << (summa_posle / 100) << " " << (summa_posle % 100) << endl;
    system("pause");
    return 0;
}