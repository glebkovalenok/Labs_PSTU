#include <iostream>
using namespace std;
int main() {
	int a, b, c, d, e, f, g, h, k, l, m, z;
	setlocale(LC_ALL, "Russian");
	cout << "Введите первоначальные час, минуту и секунду: ";
	cin >> a >> b >> c;
	cout << "Введите вторые значения часа, минуты, секунды: ";
	cin >> d >> e >> f;
	g = a * 3600 + b * 60 + c;
	h = d * 3600 + e * 60 + f;
	k = h - g;
	l = k / 3600;
	m = k / 60 - 60;
	z = k % 60;
	cout << "Разница " << l << " Часов " << m << " Минут " << z << " Секунд";
	return 0;
}