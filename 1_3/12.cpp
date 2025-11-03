#include <iostream>

using namespace std;

int main() {
    int a, b, n, rub, kop;
    cin >> a >> b >>n;
    rub = a * n;
    kop = b * n;
    rub = rub + kop / 100;
    kop = kop % 100;
    cout << rub << " " << kop;
    // system("pause");
    return 0;
}
