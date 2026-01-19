// Дано целое число, не меньшее 2. Выведите его наименьший натуральный делитель,
// отличный от 1.
#include <iostream>
using namespace std;
int main() {
    int n = 0;
    cin >> n;
    int i = 2;
    while (n % i != 0) {
        i++;
    }
    cout << i << endl;
    system("pause");
    return 0;
}
