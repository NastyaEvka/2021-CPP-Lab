#include <iostream>
#include <limits>

using namespace std;


//Задача 2. Составить программу, осуществляющую перевод величин из
//радианной меры в градусную и наоборот.Приложение должно
//запрашивать, какой перевод нужно осуществить, и выполнять
//указанное действие.
int main() {
	setlocale(0, "");

	int n = 0;
	const float pi = 3.1415926;
	float rad, grad;

	cout << "Введите 1, если надо перевести радианы в градусы, или 2, если надо перевести градусы в радианы:\n";
	cin >> n;
	
	if (n == 1){
		cout << "Введите значение радиан:\n";
		cin >> rad;
		grad = (rad * 180) / pi;
		cout << "это " << grad << " градусов.\n";
		system("pause");
		return 0;
	}
	else{
		if (n == 2){
			cout << "Введите значение градусов:\n";
			cin >> grad;
			rad = (grad * pi) / 180;
			cout << "это " << rad << " радиан.\n";
			system("pause");
			return 0;
		}
		else {
			cout << "Вы не ввели 1 или 2.\n";
			system("pause");
			return 0;
		}
	}
}