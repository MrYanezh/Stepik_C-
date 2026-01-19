// По данному числу N распечатайте все целые степени двойки, не превосходящие N,
// в порядке возрастания.
#include <cmath>
#include <iostream>
using namespace std;
int main() {
    int n = 0;
    int i = 0;
    cin >> n;
    while (pow(2, i) <= n) {
        cout << pow(2, i) << " ";
        i++;
    }
    // system("pause");
    return 0;
}