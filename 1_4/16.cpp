// ; Есть две коробки, первая размером A1×B1×C1, вторая размером A2×B2×C2.
// ; Определите, можно ли разместить одну из этих коробок внутри другой, при
// условии, ; что поворачивать коробки можно только на 90 градусов вокруг ребер.

// ; Формат входных данных
// ; Программа получает на вход числа A1, B1, C1, A2, B2, C2.
// ; Формат выходных данных
// ; Программа должна вывести одну из следующих строчек:
// ; Boxes are equal, если коробки одинаковые,
// ; The first box is smaller than the second one, если первая коробка может
// быть положена во вторую, ; The first box is larger than the second one, если
// вторая коробка может быть положена в первую, ; Boxes are incomparable, во
// всех остальных случаях.

#include <iostream>

using namespace std;

int main() {
    int a1 = 0;
    int b1 = 0;
    int c1 = 0;
    int a2 = 0;
    int b2 = 0;
    int c2 = 0;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    // Сотировка размеров первой коробки
    int otvet_ml_1 = 0;
    int otvet_sr_1 = 0;
    int otvet_st_1 = 0;
    if ((a1 <= b1) && (a1 <= c1)) {
        otvet_ml_1 = a1;
        if (b1 <= c1) {
            otvet_sr_1 = b1;
            otvet_st_1 = c1;
        } else {
            otvet_sr_1 = c1;
            otvet_st_1 = b1;
        }
    } else if ((b1 <= a1) && (b1 <= c1)) {
        otvet_ml_1 = b1;
        if (a1 <= c1) {
            otvet_sr_1 = a1;
            otvet_st_1 = c1;
        } else {
            otvet_sr_1 = c1;
            otvet_st_1 = a1;
        }
    } else {
        otvet_ml_1 = c1;
        if (a1 <= b1) {
            otvet_sr_1 = a1;
            otvet_st_1 = b1;
        } else {
            otvet_sr_1 = b1;
            otvet_st_1 = a1;
        }
    }
    // Сотировка размеров второй коробки
    int otvet_ml_2 = 0;
    int otvet_sr_2 = 0;
    int otvet_st_2 = 0;
    if ((a2 <= b2) && (a2 <= c2)) {
        otvet_ml_2 = a2;
        if (b2 <= c2) {
            otvet_sr_2 = b2;
            otvet_st_2 = c2;
        } else {
            otvet_sr_2 = c2;
            otvet_st_2 = b2;
        }
    } else if ((b2 <= a2) && (b2 <= c2)) {
        otvet_ml_2 = b2;
        if (a2 <= c2) {
            otvet_sr_2 = a2;
            otvet_st_2 = c2;
        } else {
            otvet_sr_2 = c2;
            otvet_st_2 = a2;
        }
    } else {
        otvet_ml_2 = c2;
        if (a2 <= b2) {
            otvet_sr_2 = a2;
            otvet_st_2 = b2;
        } else {
            otvet_sr_2 = b2;
            otvet_st_2 = a2;
        }
    }
    cout << otvet_ml_1 << otvet_sr_1 << otvet_st_1 << endl;
    cout << otvet_ml_2 << otvet_sr_2 << otvet_st_2 << endl;
    // Сравниваем коробки, используя отсортированные размеры
    if (otvet_ml_1 == otvet_ml_2 && otvet_sr_1 == otvet_sr_2 &&
        otvet_st_1 == otvet_st_2) {
        cout << "Boxes are equal" << endl;
    } else if (otvet_ml_1 <= otvet_ml_2 && otvet_sr_1 <= otvet_sr_2 &&
               otvet_st_1 <= otvet_st_2) {
        cout << "The first box is smaller than the second one" << endl;
    } else if (otvet_ml_1 >= otvet_ml_2 && otvet_sr_1 >= otvet_sr_2 &&
               otvet_st_1 >= otvet_st_2) {
        cout << "The first box is larger than the second one" << endl;
    } else {
        cout << "Boxes are incomparable" << endl;
    }

    system("pause");
    return 0;
}