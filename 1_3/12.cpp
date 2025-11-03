// Электронные часы показывают время в формате h:mm:ss (от 0:00:00 до 23:59:59), 
// то есть сначала записывается количество часов, потом обязательно двузначное количество минут, 
// затем обязательно двузначное количество секунд. Количество минут и секунд при необходимости 
// дополняются до двузначного числа нулями.

// С начала суток прошло N секунд. Выведите, что покажут часы.
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a;
    int hours_full, hours, minutes, seconds;
    cin >> a;
    hours_full = a / 3600;
    hours = hours_full % 24;
    minutes = (a - (hours_full * 3600)) / 60;
    seconds = (a - (hours_full * 3600)) % 60;
    cout << hours << ":" << setw(2) << setfill('0') << minutes << ":" << setw(2) << setfill('0') << seconds << endl;    
    system("pause");
    return 0;
}
