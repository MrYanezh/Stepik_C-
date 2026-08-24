#include <iostream>
using namespace std;

int fact(int n) {
    if (n == 0) {
        return 1;
    }
    return n * fact(n - 1);
}

int cnk(int n, int k) { return fact(n) / (fact(k) * fact(n - k)); }

int main() {
    int n = 0;
    int k = 0;
    cin >> n >> k;
    cout << cnk(n, k) << endl;
    system("pause");
    return 0;
}