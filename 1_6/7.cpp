// Процентная ставка по вкладу составляет P процентов годовых, которые
// прибавляются к сумме вклада через год. Вклад составляет X рублей Y копеек.
// Определите размер вклада через K лет. Формат входных данных Программа
// получает на вход целые числа P, X, Y, K . Формат выходных данных Программа
// должна вывести два числа: величину вклада через K лет в рублях и копейках.
// Дробное число копеек по истечение года отбрасывается. Перерасчет суммы вклада
// (с отбрасыванием дробных частей копеек) происходит ежегодно. Примечание В
// этой задаче часто возникают проблемы с точностью. Если они возникли у вас -
// попробуйте решить задачу в целых числах.

#include <cmath>
#include <iostream>
using namespace std;
int main() {
    double proc;
    int rub;
    int kop;
    int years;
    cin >> proc >> rub >> kop >> years;
    int summa_posle = 0;
    int summa_do = 0;
    double interest = 0;
    while (years != 0) {
        summa_do = 100 * rub + kop;  // v kopeikah
        // cout << summa_do << endl;
        interest = summa_do * (proc / 100.0);
        summa_posle = summa_do + static_cast<int>(interest);
        // summa_posle = trunc(summa_posle);
        // cout << summa_posle << endl;
        // long long kop_2 = static_cast<long long>(summa_posle);
        rub = summa_posle / 100;
        kop = summa_posle % 100;
        years -= 1;
    }
    cout << (summa_posle / 100) << " " << (summa_posle % 100) << endl;
    system("pause");
    return 0;
}