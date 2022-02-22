#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

// Вывод массива
template <typename T> void showarr(T arr[], int length){
	cout << "[";
	for (int i = 0; i < length; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";

}

void findtype(int n) {
	cout << "Int";
}
void findtype(double n) {
	cout << "Double";
}

// Задача 2
int recsum(int n1, int n2) {
	if (n1 == n2)
		return n2;
	return recsum(n1 + 1, n2) + n1;
}

// Задача 3
template <typename T> void sort(T arr[], int length) {
	int index = -1, lastindex = -1;
	for (int i = 0; i < length; i++)
		if (arr[i] < 0) {
			index = i;
			break;
		}
	for (int i = length - 1; i >= 0; i--)
		if (arr[i] < 0) {
			lastindex = i;
			break;
		}
	if (index !=-1)
		for (int i = lastindex; i > index; i--)
			for (int j = index; j < i; j++)
				if (arr[j] > arr[j + 1])
					swap(arr[j], arr[j + 1]);
	}

// Задача 4
template <typename T> void movearr(T arr[], int length, int num) {
	for (int j = 0; j < num; j++) {
		T tmp = arr[length - 1];
		for (int i = length - 1; i > 0; i--)
			arr[i] = arr[i - 1];
		arr[0] = tmp;
	}
}

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int n,m;

	// Задача 1
	/*cout << "5 - ";
	findtype(5);
	cout << "\n1.2 - ";
	findtype(1.2);*/

	// Задача 2
	/*cout << "Введите начало и конец диапазона: ";
	cin >> n >> m;
	cout << "Сумма чисел от " << n << " до " << m << " = " << recsum (n,m) << "\n\n";*/

	// Задача 3
	/*cout << "Изначальный массив: \n";
	int z3[20];
	for (int i = 0; i < 20; i++)
		z3[i] = rand() % (20 + 1 - (-20)) + (-20);
	showarr(z3, 20);
	cout << "\n Отсортированный массив:\n";
	sort(z3, 20);
	showarr(z3, 20);
	cout << "\n\n";*/

	// Задача 4
	/*cout << "Изначальный массив:\n";
	int z4[10]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	showarr(z4, 10);
	cout << "\nВведите число: ";
	cin >> n;
	movearr(z4, 10,n);
	cout << "\nИтоговый массив:\n";
	showarr(z4, 10);
	cout << "\n\n";*/

	// Задача 5


	return 0;
}
