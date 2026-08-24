#include <iostream>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int c = a % b;
        a = b;
        b = c;
    }
    return a;
}
int main() {
    int n = 1;
    int m = 1;

    while (n && m != 0) {
        cin >> n >> m;
        cout << gcd(n, m) << endl;
    }

    system("pause");
    return 0;
}