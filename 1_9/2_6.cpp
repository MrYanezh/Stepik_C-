#include <iostream>
using namespace std;

bool is_even(int n) { return n % 2 == 0; }

int main() {
    int n = 0;
    cin >> n;
    if (is_even(n)) {
        cout << "EVEN" << endl;
    } else {
        cout << "ODD" << endl;
    }

    system("pause");
    return 0;
}