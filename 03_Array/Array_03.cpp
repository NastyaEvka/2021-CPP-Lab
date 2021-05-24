//#include <iostream>
//#include <limits>
//
//using namespace std;
//
////Задача 3.
////В массиве действительных чисел есть нулевые элементы.
////Найдите длину максимальной последовательности подряд
////идущих нулей и индекс первого элемента этой
////последовательности.
//
//int getValue(){
//	int n;
//	while (true){
//		cin >> n;
//
//		if (cin.fail()) // Извлечение оказалось неудачным
//		{
//			cout << "Число введено неверно. Введите еще раз." << endl;
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
//
//int main(){
//	setlocale(0, "");
//	int k = 0, maxPos = 0, maxInd = -1, l = -1;
//
//	cout << "Введите размер массива:\n";
//	int n = getValue();
//	double *array = new double[n];
//	cout << "Введите " << n << " элементов для массива:\n";
//	for (int i = 0; i < n; i++){
//		cin >> array[i];
//		if (cin.fail()) // Извлечение оказалось неудачным
//		{
//			cout << "Число введено неверно\n";
//			system("pause");
//			return 0;
//		}
//	}
//
//	cout << "Вы ввели массив:\n";
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
//		cout << "В массиве нет нулевых элементов\n";
//		delete[] array;
//		system("pause");
//		return 0;
//	}
//	else{
//		cout << "Длина максимальной последовательности подряд идущих нулей равна:\n" << maxPos << "\n";
//		cout << "индекс первого элемента этой последовательности:\n" << maxInd << "\n";
//	}
//
//	delete[] array;
//	system("pause");
//	return 0;
//}