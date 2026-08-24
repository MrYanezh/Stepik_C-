#include <iostream>
using namespace std;
int min(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}
int main() {
    int n = 0;
    int m = 0;
    int x = 0;
    int y = 0;
    cin >> n >> m >> x >> y;
    cout << min(n, min(m, min(x, y))) << endl;
    system("pause");
    return 0;
}