#include <iostream>
using namespace std;

void rec() {
    int n = 0;
    cin >> n;
    if (n != 0) {
        rec();
        cout << n << " ";
    }
}

int main() {
    rec();
    cout << endl;
    system("pause");
    return 0;
}