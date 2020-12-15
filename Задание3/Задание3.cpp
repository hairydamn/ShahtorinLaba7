#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "ru");
	const int N = 3;
	int mas[N][N];
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; j++) {
			cout << "Введите " << i + 1 << " элемент матрицы из " << j + 1 << " строки: ";
			cin >> mas[i][j];
		}
	}

	cout << "\n";

	int sum = 0;
	for (int i = 0; i < N; i++)
		sum += mas[i][i];
	cout << "\n";
	cout << "Сумма элементов главной диагонали: " << sum;
	return 0;
}