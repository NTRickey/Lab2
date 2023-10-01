#include<iostream>
#include<locale.h>

using namespace std;
// Тугарин Никита ИВТ-31. Задание 19: Три точки на числовой оси a, b, c, где a < c < b, найти произведение длин отрезков ac и bc
int main() {
	setlocale(LC_ALL, "ru");
	int a, b, c;
	cout << "\n Введите 3 числа a,b,c, при этом a<c<b";
	cin >> a >> b >> c;
	int ac = c - a;
	int bc = b - c;
	cout << ac * bc;
}
