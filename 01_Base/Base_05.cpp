#include <iostream>
#include <limits>

using namespace std;

//������ 5. �������� ���������, ������������, �������� ��
//�������������� ����������� ����� N �����������, �.�.������,
//������� ��������� �������� ����� ������� � ������ ������.

int main() {
	setlocale(0, "");
	int n;
	int a1, a2, a3, a4;
	cout << "������� �������������� ����������� �����: \n";
	cin >> n;

	if ((n / 1000 > 9) || (n / 1000 < 1)) {
		cout << "�� ����� �� �������������� �����.\n";
		system("pause");
		return 0;
	}
	
	a1 = n / 1000;
	a2 = (n % 1000) / 100;
	a3 = (n % 100) / 10;
	a4 = n % 10;
		
	if ((a1 == a4) && (a2 = a3)){
		cout << "�������� ����� �������� �����������.\n";
		system("pause");
		return 0;
	}
	else{
		cout << "�������� ����� �� �������� �����������.\n";
		system("pause");
		return 0;
	}
}