//#include <iostream>
//#include <limits>
//
//using namespace std;
//
////������ 3.
////� ������� �������������� ����� ���� ������� ��������.
////������� ����� ������������ ������������������ ������
////������ ����� � ������ ������� �������� ����
////������������������.
//
//int getValue(){
//	int n;
//	while (true){
//		cin >> n;
//
//		if (cin.fail()) // ���������� ��������� ���������
//		{
//			cout << "����� ������� �������. ������� ��� ���." << endl;
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
//
//int main(){
//	setlocale(0, "");
//	int k = 0, maxPos = 0, maxInd = -1, l = -1;
//
//	cout << "������� ������ �������:\n";
//	int n = getValue();
//	double *array = new double[n];
//	cout << "������� " << n << " ��������� ��� �������:\n";
//	for (int i = 0; i < n; i++){
//		cin >> array[i];
//		if (cin.fail()) // ���������� ��������� ���������
//		{
//			cout << "����� ������� �������\n";
//			system("pause");
//			return 0;
//		}
//	}
//
//	cout << "�� ����� ������:\n";
//	for (int i = 0; i < n; i++){
//		cout << array[i] << " ";
//	}
//	cout << "\n";
//
//	for (int i = n-1; i >= 0; i--){
//		if (array[i] == 0){
//			k++;
//			l = i;
//		}
//		if (array[i] != 0){
//			if (k > maxPos){
//				maxPos = k;
//				maxInd = l;
//				k = 0;
//			}
//		}
//	}
//
//	if ((maxInd == -1) || (maxPos == 0)){
//		cout << "� ������� ��� ������� ���������\n";
//		delete[] array;
//		system("pause");
//		return 0;
//	}
//	else{
//		cout << "����� ������������ ������������������ ������ ������ ����� �����:\n" << maxPos << "\n";
//		cout << "������ ������� �������� ���� ������������������:\n" << maxInd << "\n";
//	}
//
//	delete[] array;
//	system("pause");
//	return 0;
//}