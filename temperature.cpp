#include <iostream>
#include <clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	double c, f;
	cout << "Введите температуру по фаренгейта: ";
	cin >> f;
	c = (9 * (f - 32)) / 5;
	cout << "Температура цельсия: " << c;
	return 0;
}