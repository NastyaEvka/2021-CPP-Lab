//#include <iostream>
//#include <limits>
//
//using namespace std;
//
////Задача 1.
////Даны два вектора(массива).Найдите скалярное произведение
////этих векторов.
//
//int getValue(){
//	int n;
//	while (true){
//		cout << "Введите размер массивoв\n";
//		cin >> n;
//
//		if (cin.fail()) // Извлечение оказалось неудачным
//		{
//			cout << "Число введено неверно" << endl;
//			cin.clear(); // Возвращаем cin в 'обычный' режим работы
//			cin.ignore(numeric_limits<int>::max(), '\n'); // Очистить буфер ввода до перехода на новую строку
//		}
//		else{
//			if (n < 1)
//			{
//				cout << "Введите число, больше 0" << endl;
//				cin.clear();
//				cin.ignore(numeric_limits<int>::max(), '\n');
//			}
//			else
//			{
//				cin.ignore(numeric_limits<int>::max(), '\n'); // Очистить буфер ввода до перехода на новую строку
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
//	cout << "Введите " << n << " элементов первого массива\n";
//	for (int i = 0; i < n; i++){
//		cin >> array1[i];
//
//		if (cin.fail()) {
//			cout << "Введено неправильное число.\n";
//			system("pause");
//			return 0;
//		}
//	}
//		
//	cout << "Введите " << n << " элементов второго массива\n";
//	for (int i = 0; i < n; i++){
//		cin >> array2[i];
//		if (cin.fail()) {
//			cout << "Введено неправильное число.\n";
//			system("pause");
//			return 0;
//		}
//	}
//
//	cout << "Первый массив:\n";
//	for (int i = 0; i < n; i++){
//		cout << array1[i] << " ";
//	}
//	cout << "\n";
//	cout << "Второй массив:\n";
//	for (int i = 0; i < n; i++){
//		cout << array2[i] << " ";
//		
//	}
//	cout << "\n";
//
//	cout << "Скалярное произведение этих векторов:\n";
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