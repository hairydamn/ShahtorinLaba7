#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "ru");
	cout << "Двумерный массив 10 на 10 элементов" << endl;
	int mas[10][10];
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			mas[i][j] = rand() % 2 + 1;
			cout << mas[i][j] << " ";
		}

		cout << "\n";
	}
	int sum = 0;
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			if (mas[i][j] % 2 == 0) {
				sum = sum + mas[i][j];
			}
		}
	}
	cout << "\n";
	cout << "Сумма чётных элементов массива равна: " << sum;
}
