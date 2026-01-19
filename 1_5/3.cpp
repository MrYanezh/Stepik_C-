// По данному целому числу N распечатайте все квадраты натуральных чисел, не
// превосходящие N, в порядке возрастания.
#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int output = 0;
    int i = 1;
    while (output <= n) {
        output = i * i;
        if (output <= n) {
            cout << output << " ";
        } else {
            cout << endl;
        }
        i += 1;
    }

    system("pause");
    return 0;
}
