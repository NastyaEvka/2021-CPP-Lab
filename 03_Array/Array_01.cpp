//#include <iostream>
//#include <limits>
//
//using namespace std;
//
////������ 1.
////���� ��� �������(�������).������� ��������� ������������
////���� ��������.
//
//int getValue(){
//	int n;
//	while (true){
//		cout << "������� ������ ������o�\n";
//		cin >> n;
//
//		if (cin.fail()) // ���������� ��������� ���������
//		{
//			cout << "����� ������� �������" << endl;
//			cin.clear(); // ���������� cin � '�������' ����� ������
//			cin.ignore(numeric_limits<int>::max(), '\n'); // �������� ����� ����� �� �������� �� ����� ������
//		}
//		else{
//			if (n < 1)
//			{
//				cout << "������� �����, ������ 0" << endl;
//				cin.clear();
//				cin.ignore(numeric_limits<int>::max(), '\n');
//			}
//			else
//			{
//				cin.ignore(numeric_limits<int>::max(), '\n'); // �������� ����� ����� �� �������� �� ����� ������
//				return n;
//			}
//		}
//	}
//}
//
//int main(){
//	setlocale(0, "");
//	int skal = 0, proiz = 1;
//	
//	int n = getValue();
//	int *array1 = new int[n];
//	int *array2 = new int[n];
//	cout << "������� " << n << " ��������� ������� �������\n";
//	for (int i = 0; i < n; i++){
//		cin >> array1[i];
//
//		if (cin.fail()) {
//			cout << "������� ������������ �����.\n";
//			system("pause");
//			return 0;
//		}
//	}
//		
//	cout << "������� " << n << " ��������� ������� �������\n";
//	for (int i = 0; i < n; i++){
//		cin >> array2[i];
//		if (cin.fail()) {
//			cout << "������� ������������ �����.\n";
//			system("pause");
//			return 0;
//		}
//	}
//
//	cout << "������ ������:\n";
//	for (int i = 0; i < n; i++){
//		cout << array1[i] << " ";
//	}
//	cout << "\n";
//	cout << "������ ������:\n";
//	for (int i = 0; i < n; i++){
//		cout << array2[i] << " ";
//		
//	}
//	cout << "\n";
//
//	cout << "��������� ������������ ���� ��������:\n";
//	for (int i = 0; i < n; i++){
//		proiz = array1[i]*array2[i];
//		skal = skal + proiz;
//	}
//
//	cout << skal << "\n";
//    delete[] array1;
//    delete[] array2;
//	system("pause");
//	return 0;
//}