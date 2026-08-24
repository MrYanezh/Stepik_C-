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

void reduce(int& a, int& b) {
    int c = gcd(a, b);
    a /= c;
    b /= c;
}

int main() {
    int n = 0;
    int m = 0;
    cin >> n >> m;
    reduce(n, m);
    cout << n << " " << m << endl;
    system("pause");
    return 0;
}