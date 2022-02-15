// Персональный шаблон проекта С++
#include <iostream>
using namespace std;

/* 1 inline int func(int num1, int num2) {
	return (num1 > num2 ? num1 : num2); // тернарный оператор
}*/

/* 2 inline int func(int num1, int num2) { // перегрузка функции
	cout << "Целые числа.\n";
	return (num1 > num2 ? num1 : num2);
}
double func(double num1, double num2){
	cout << "Дробные числа.\n";
	return (num1 > num2 ? num1 : num2);
}

bool func(int num1, int num2, int num3) {
	if (num1 > num2 && num1 > num3)
		return true;
	return false;
}*/

template <typename T_1, typename T_2> T_1 maxFunc(T_1 num1, T_2 num2) {
	return num1 > num2 ? num1 : num2;
}


int main() {
	setlocale(LC_ALL, "Russian");
	float n, m;

	/* 1 cin >> n >> m;
	cout << func(n, m) << endl; 
	cout << func(5, 9) << endl;*/

	/* 2 cin >> n >> m;
	cout << func(n, m) << endl;
	cout << func(5.5, 9.5) << endl;
	cout << func(12, 5, 7);*/

	cin >> n >> m;
	cout << maxFunc(n, m) << endl;
	cout << "Конец!";


	return 0;
}