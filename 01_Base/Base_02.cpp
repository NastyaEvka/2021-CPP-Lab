#include <iostream>
#include <limits>

using namespace std;


//������ 2. ��������� ���������, �������������� ������� ������� ��
//��������� ���� � ��������� � ��������.���������� ������
//�����������, ����� ������� ����� �����������, � ���������
//��������� ��������.
int main() {
	setlocale(0, "");

	int n = 0;
	const float pi = 3.1415926;
	float rad, grad;

	cout << "������� 1, ���� ���� ��������� ������� � �������, ��� 2, ���� ���� ��������� ������� � �������:\n";
	cin >> n;
	
	if (n == 1){
		cout << "������� �������� ������:\n";
		cin >> rad;
		grad = (rad * 180) / pi;
		cout << "��� " << grad << " ��������.\n";
		system("pause");
		return 0;
	}
	else{
		if (n == 2){
			cout << "������� �������� ��������:\n";
			cin >> grad;
			rad = (grad * pi) / 180;
			cout << "��� " << rad << " ������.\n";
			system("pause");
			return 0;
		}
		else {
			cout << "�� �� ����� 1 ��� 2.\n";
			system("pause");
			return 0;
		}
	}
}