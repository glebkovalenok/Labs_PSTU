#include <iostream>
#include <clocale>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int k = 1 + rand() % 100;
    bool m = true;
    cout << "Угадай число от 1 до 100, у тебя 7 попыток. " << endl;
    int z = 0;
    while (m && z < 7) {
        z++;
        cout << "Попытка № " << z << endl;
        int n;
        cout << "Введите число " << endl;
        cin >> n;
        if (k < n) cout << "Загаданное число меньше введенного" << endl;
        else if (k > n) cout << "Загаданное число больше введенного" << endl;
        else {
            cout << "Ты угадал!";
            m = false;
        }
    }
    if (m == true) cout << "Вы не угадали, загаданное число:  " << k;
    return 0;
}